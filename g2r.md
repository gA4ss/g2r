# google buffer protocal 转 ros message

为了将Apollo的google buffer protocal转换成常规的ros message，在节点接收到消息时由ros mesage转换成google buffer protocal，在节点要发送数据时，由google buffer protocal转换成ros message。本工具要实现的是给定一个google buffer protocal的文件，然后生成一个目录结构其中，目录名是包名，`msg`中保存了转换后的消息文件，并配套`package.xml`文件。随后输出另外外一个`hpp`文件，其中包含了两个数据结构的对转函数。

## google buffer protocal 常用字段分析

* `syntax = "proto2";` 可以当作注释忽略掉
* `package apollo.canbus;` 这个字段会生成`c++`代码时产生类似命名空间的结构

```c++
namespace apollo {
  namespace canbus {
    ...
  }
}
```
类似以上的代码，但是在**ROS**中，命名空间只会有一个就是包名。所以这里只取最后一个命令空间的名称`canbus`作为要生成的包名。

> 遇到 `package`，一直读取到最后一个名称，作为ros中的包名。

* `import "common/header.proto";`

导入文件分析，如果有import则进行关联，这里需要**g2r**设定一个*include path*类似的功能，`ros message`比较简单，因为在ros消息中没有导入这一说法，ros在编译时会自动寻找消息的关联。所以遇到导入文件时，我们需要进入到这个文件中，并将它的包名记录下，然后返回，但是并不对其作任何处理。这样我们在要输出的包中自动添加ros包的依赖信息。并在要输出的c++文件中添加#include支持。

> 但是包含文件的例如：`header.proto`其中的内容，不在本次工具中进行处理。

* message Chassis 消息主体,因为ros一个`.msg`的文件就是一个消息，但是在google buffer protocal中可以定义多个消息，所以这里遇到一个message则生成一个`.msg`的文件。
* enum DrivingMode 在消息中的枚举体直接转换到对应`.msg`文件中
* optional double latitude = 1; 在ros消息中并没有什么`optional`的修饰符号，遇到则忽略，后边的赋值也忽略。
* [default = false]; google buffer protocal可以有默认值的设定，但是ros不行，则遇到[...]则忽略

---

以上就是基本的转换过程。这里需要设计一下命令行参数。

* -I 后接一个*include path*指名需要到那里找import目录
* -o 后接输出目录



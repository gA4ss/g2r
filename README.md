# Google buffer protocal 2 ROS message in [Apollo]

将`Apollo`中所用的**Google buffer protocal**转换为**ros message**。在**gprotoc**中一个协议文件可以定义多个类，而
一个**ros**的一个文件只可以定义一个类。本程序读取每个协议文件，将每个`message`生成一个*.msg*文件。并且输出对应的`c++`代码转换函数。

代码中提供了*generate.sh*将*protocal*中的所有协议输出到当前目录的*message*与*transorm*中。

这个程序很多地方是针对`Apollo`以及我自己移植的目录结构而言的，代码中的`protocal`是`Apollo`中所有的**gprotoc**的协议文件,在

> *protocal*目录中的*build.sh*文件，可以将这些文件编译为一个静态库。

## BUG

目前版本存在文件嵌套的**BUG**。

## 使用说明
`./g2r.out -I ./protocal -o ./message -t ./transorm xxx.proto`

* -I 设置*include path* 设置`google buffer protocal`所在目录,处理`import`类似的语句
* -o 设置`rosmsg`要输出的目录
* -t 设置辅助转换**C++**源代码所在目录，生成类似代码

```c++
#include "g2r_Header.h"

void g2r_hdmap_Header(apollo::hdmap::Header& arg_gprotoc, ros_hdmap::Header::Header& arg_rosmsg) {
	arg_rosmsg.version = arg_gprotoc.version();
	arg_rosmsg.date = arg_gprotoc.date();
	arg_rosmsg.projection = arg_gprotoc.projection();
	arg_rosmsg.district = arg_gprotoc.district();
	arg_rosmsg.generation = arg_gprotoc.generation();
	arg_rosmsg.rev_major = arg_gprotoc.rev_major();
	arg_rosmsg.rev_minor = arg_gprotoc.rev_minor();
	arg_rosmsg.left = arg_gprotoc.left();
	arg_rosmsg.top = arg_gprotoc.top();
	arg_rosmsg.right = arg_gprotoc.right();
	arg_rosmsg.bottom = arg_gprotoc.bottom();
	arg_rosmsg.vendor = arg_gprotoc.vendor();
}

void r2g_hdmap_Header(ros_hdmap::Header::Header& arg_rosmsg, apollo::hdmap::Header& arg_gprotoc) {
	arg_gprotoc.set_version(arg_rosmsg.version);
	arg_gprotoc.set_date(arg_rosmsg.date);
	arg_gprotoc.set_projection(arg_rosmsg.projection);
	arg_gprotoc.set_district(arg_rosmsg.district);
	arg_gprotoc.set_generation(arg_rosmsg.generation);
	arg_gprotoc.set_rev_major(arg_rosmsg.rev_major);
	arg_gprotoc.set_rev_minor(arg_rosmsg.rev_minor);
	arg_gprotoc.set_left(arg_rosmsg.left);
	arg_gprotoc.set_top(arg_rosmsg.top);
	arg_gprotoc.set_right(arg_rosmsg.right);
	arg_gprotoc.set_bottom(arg_rosmsg.bottom);
	arg_gprotoc.set_vendor(arg_rosmsg.vendor);
}
```


## map类型
在遇到`map`类型时，会直接输出一个单独的*.msg*文件。例如：`map<int, string>`会生成一个名为*MapIntStringEntry.msg*的**ros message**。原来的`map`变量转换为`rosmsg`时变为`repeated MapIntStringEntry`一个队列变量。其对应文件内容为：

```
// MapIntStringEntry.msg
int key
string value
```

## oneof类型
如果遇到`oneof`类型，会将其中每个字段都直接作为`rosmsg`中的字段，忽略`oneof`本身。这样的转换至少在逻辑上是讲的通的。

## enum类型
遇到`enum`则将直接作为一个单独的`rosmsg`生成独立的*.msg*文件。

## message嵌套
遇到`message`中定义了`message`,例如：

```
message xxx{
  message yyy {
    ...
  }
}
```

会将`yyy`提取出来作为单独的*.msg*文件。

## 编译

1. flex
2. bison
3. tinyxml2

使用了*flex*与*bison*做了词语法分析器。因为要生成`rosmsg`的*package.xml*所以使用了*tinyxml2*库。

```
flex ./g2r.l
bison -d ./g2r.y
g++ lex.yy.c g2r.tab.c makepkg.cc -ltinyxml2 -w -o ./g2r.out
```

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception/yolo_camera_detector_config.proto

#ifndef PROTOBUF_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto__INCLUDED
#define PROTOBUF_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace perception {
namespace yolo_camera_detector_config {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();
void protobuf_AssignDesc_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();
void protobuf_ShutdownFile_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();

class ModelConfigs;

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.yolo_camera_detector_config.ModelConfigs) */ {
 public:
  ModelConfigs();
  virtual ~ModelConfigs();

  ModelConfigs(const ModelConfigs& from);

  inline ModelConfigs& operator=(const ModelConfigs& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ModelConfigs& default_instance();

  void Swap(ModelConfigs* other);

  // implements Message ----------------------------------------------

  inline ModelConfigs* New() const { return New(NULL); }

  ModelConfigs* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ModelConfigs& from);
  void MergeFrom(const ModelConfigs& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ModelConfigs* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1 [default = "YoloCameraDetector"];
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string version = 2 [default = "1.0.0"];
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 2;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional string yolo_root = 3 [default = "perception/model/yolo_camera_detector"];
  bool has_yolo_root() const;
  void clear_yolo_root();
  static const int kYoloRootFieldNumber = 3;
  const ::std::string& yolo_root() const;
  void set_yolo_root(const ::std::string& value);
  void set_yolo_root(const char* value);
  void set_yolo_root(const char* value, size_t size);
  ::std::string* mutable_yolo_root();
  ::std::string* release_yolo_root();
  void set_allocated_yolo_root(::std::string* yolo_root);

  // @@protoc_insertion_point(class_scope:apollo.perception.yolo_camera_detector_config.ModelConfigs)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_yolo_root();
  inline void clear_has_yolo_root();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  static ::std::string* _default_yolo_root_;
  ::google::protobuf::internal::ArenaStringPtr yolo_root_;
  friend void  protobuf_AddDesc_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ModelConfigs* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "YoloCameraDetector"];
inline bool ModelConfigs::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelConfigs::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelConfigs::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelConfigs::clear_name() {
  name_.ClearToDefaultNoArena(_default_name_);
  clear_has_name();
}
inline const ::std::string& ModelConfigs::name() const {
  // @@protoc_insertion_point(field_get:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
  return name_.GetNoArena(_default_name_);
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
  clear_has_name();
  return name_.ReleaseNoArena(_default_name_);
}
inline void ModelConfigs::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(_default_name_, name);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.yolo_camera_detector_config.ModelConfigs.name)
}

// optional string version = 2 [default = "1.0.0"];
inline bool ModelConfigs::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ModelConfigs::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ModelConfigs::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ModelConfigs::clear_version() {
  version_.ClearToDefaultNoArena(_default_version_);
  clear_has_version();
}
inline const ::std::string& ModelConfigs::version() const {
  // @@protoc_insertion_point(field_get:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
  return version_.GetNoArena(_default_version_);
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
  clear_has_version();
  return version_.ReleaseNoArena(_default_version_);
}
inline void ModelConfigs::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(_default_version_, version);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.yolo_camera_detector_config.ModelConfigs.version)
}

// optional string yolo_root = 3 [default = "perception/model/yolo_camera_detector"];
inline bool ModelConfigs::has_yolo_root() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_yolo_root() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_yolo_root() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_yolo_root() {
  yolo_root_.ClearToDefaultNoArena(_default_yolo_root_);
  clear_has_yolo_root();
}
inline const ::std::string& ModelConfigs::yolo_root() const {
  // @@protoc_insertion_point(field_get:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
  return yolo_root_.GetNoArena(_default_yolo_root_);
}
inline void ModelConfigs::set_yolo_root(const ::std::string& value) {
  set_has_yolo_root();
  yolo_root_.SetNoArena(_default_yolo_root_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
}
inline void ModelConfigs::set_yolo_root(const char* value) {
  set_has_yolo_root();
  yolo_root_.SetNoArena(_default_yolo_root_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
}
inline void ModelConfigs::set_yolo_root(const char* value, size_t size) {
  set_has_yolo_root();
  yolo_root_.SetNoArena(_default_yolo_root_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
}
inline ::std::string* ModelConfigs::mutable_yolo_root() {
  set_has_yolo_root();
  // @@protoc_insertion_point(field_mutable:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
  return yolo_root_.MutableNoArena(_default_yolo_root_);
}
inline ::std::string* ModelConfigs::release_yolo_root() {
  // @@protoc_insertion_point(field_release:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
  clear_has_yolo_root();
  return yolo_root_.ReleaseNoArena(_default_yolo_root_);
}
inline void ModelConfigs::set_allocated_yolo_root(::std::string* yolo_root) {
  if (yolo_root != NULL) {
    set_has_yolo_root();
  } else {
    clear_has_yolo_root();
  }
  yolo_root_.SetAllocatedNoArena(_default_yolo_root_, yolo_root);
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.yolo_camera_detector_config.ModelConfigs.yolo_root)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace yolo_camera_detector_config
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perception_2fyolo_5fcamera_5fdetector_5fconfig_2eproto__INCLUDED

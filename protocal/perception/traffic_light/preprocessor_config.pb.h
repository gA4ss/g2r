// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perception/traffic_light/preprocessor_config.proto

#ifndef PROTOBUF_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED
#define PROTOBUF_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED

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
namespace traffic_light {
namespace preprocessor_config {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();
void protobuf_AssignDesc_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();
void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();

class ModelConfigs;

// ===================================================================

class ModelConfigs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.perception.traffic_light.preprocessor_config.ModelConfigs) */ {
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

  // optional string name = 1 [default = "TLPreprocessor"];
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

  // optional int32 max_cached_lights_size = 3 [default = 100];
  bool has_max_cached_lights_size() const;
  void clear_max_cached_lights_size();
  static const int kMaxCachedLightsSizeFieldNumber = 3;
  ::google::protobuf::int32 max_cached_lights_size() const;
  void set_max_cached_lights_size(::google::protobuf::int32 value);

  // optional int32 projection_image_cols = 4 [default = 1920];
  bool has_projection_image_cols() const;
  void clear_projection_image_cols();
  static const int kProjectionImageColsFieldNumber = 4;
  ::google::protobuf::int32 projection_image_cols() const;
  void set_projection_image_cols(::google::protobuf::int32 value);

  // optional int32 projection_image_rows = 5 [default = 1080];
  bool has_projection_image_rows() const;
  void clear_projection_image_rows();
  static const int kProjectionImageRowsFieldNumber = 5;
  ::google::protobuf::int32 projection_image_rows() const;
  void set_projection_image_rows(::google::protobuf::int32 value);

  // optional float sync_interval_seconds = 6 [default = 0.1];
  bool has_sync_interval_seconds() const;
  void clear_sync_interval_seconds();
  static const int kSyncIntervalSecondsFieldNumber = 6;
  float sync_interval_seconds() const;
  void set_sync_interval_seconds(float value);

  // optional float no_signals_interval_seconds = 7 [default = 0.5];
  bool has_no_signals_interval_seconds() const;
  void clear_no_signals_interval_seconds();
  static const int kNoSignalsIntervalSecondsFieldNumber = 7;
  float no_signals_interval_seconds() const;
  void set_no_signals_interval_seconds(float value);

  // @@protoc_insertion_point(class_scope:apollo.perception.traffic_light.preprocessor_config.ModelConfigs)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_max_cached_lights_size();
  inline void clear_has_max_cached_lights_size();
  inline void set_has_projection_image_cols();
  inline void clear_has_projection_image_cols();
  inline void set_has_projection_image_rows();
  inline void clear_has_projection_image_rows();
  inline void set_has_sync_interval_seconds();
  inline void clear_has_sync_interval_seconds();
  inline void set_has_no_signals_interval_seconds();
  inline void clear_has_no_signals_interval_seconds();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_name_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  static ::std::string* _default_version_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  ::google::protobuf::int32 max_cached_lights_size_;
  ::google::protobuf::int32 projection_image_cols_;
  ::google::protobuf::int32 projection_image_rows_;
  float sync_interval_seconds_;
  float no_signals_interval_seconds_;
  friend void  protobuf_AddDesc_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();
  friend void protobuf_AssignDesc_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ModelConfigs* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelConfigs

// optional string name = 1 [default = "TLPreprocessor"];
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
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
  return name_.GetNoArena(_default_name_);
}
inline void ModelConfigs::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(_default_name_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(_default_name_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
inline void ModelConfigs::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(_default_name_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
}
inline ::std::string* ModelConfigs::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
  return name_.MutableNoArena(_default_name_);
}
inline ::std::string* ModelConfigs::release_name() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
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
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.name)
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
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
  return version_.GetNoArena(_default_version_);
}
inline void ModelConfigs::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(_default_version_, value);
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value) {
  set_has_version();
  version_.SetNoArena(_default_version_, ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
inline void ModelConfigs::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(_default_version_,
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}
inline ::std::string* ModelConfigs::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
  return version_.MutableNoArena(_default_version_);
}
inline ::std::string* ModelConfigs::release_version() {
  // @@protoc_insertion_point(field_release:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
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
  // @@protoc_insertion_point(field_set_allocated:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.version)
}

// optional int32 max_cached_lights_size = 3 [default = 100];
inline bool ModelConfigs::has_max_cached_lights_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ModelConfigs::set_has_max_cached_lights_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ModelConfigs::clear_has_max_cached_lights_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ModelConfigs::clear_max_cached_lights_size() {
  max_cached_lights_size_ = 100;
  clear_has_max_cached_lights_size();
}
inline ::google::protobuf::int32 ModelConfigs::max_cached_lights_size() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.max_cached_lights_size)
  return max_cached_lights_size_;
}
inline void ModelConfigs::set_max_cached_lights_size(::google::protobuf::int32 value) {
  set_has_max_cached_lights_size();
  max_cached_lights_size_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.max_cached_lights_size)
}

// optional int32 projection_image_cols = 4 [default = 1920];
inline bool ModelConfigs::has_projection_image_cols() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ModelConfigs::set_has_projection_image_cols() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ModelConfigs::clear_has_projection_image_cols() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ModelConfigs::clear_projection_image_cols() {
  projection_image_cols_ = 1920;
  clear_has_projection_image_cols();
}
inline ::google::protobuf::int32 ModelConfigs::projection_image_cols() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_cols)
  return projection_image_cols_;
}
inline void ModelConfigs::set_projection_image_cols(::google::protobuf::int32 value) {
  set_has_projection_image_cols();
  projection_image_cols_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_cols)
}

// optional int32 projection_image_rows = 5 [default = 1080];
inline bool ModelConfigs::has_projection_image_rows() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ModelConfigs::set_has_projection_image_rows() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ModelConfigs::clear_has_projection_image_rows() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ModelConfigs::clear_projection_image_rows() {
  projection_image_rows_ = 1080;
  clear_has_projection_image_rows();
}
inline ::google::protobuf::int32 ModelConfigs::projection_image_rows() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_rows)
  return projection_image_rows_;
}
inline void ModelConfigs::set_projection_image_rows(::google::protobuf::int32 value) {
  set_has_projection_image_rows();
  projection_image_rows_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.projection_image_rows)
}

// optional float sync_interval_seconds = 6 [default = 0.1];
inline bool ModelConfigs::has_sync_interval_seconds() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ModelConfigs::set_has_sync_interval_seconds() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ModelConfigs::clear_has_sync_interval_seconds() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ModelConfigs::clear_sync_interval_seconds() {
  sync_interval_seconds_ = 0.1f;
  clear_has_sync_interval_seconds();
}
inline float ModelConfigs::sync_interval_seconds() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.sync_interval_seconds)
  return sync_interval_seconds_;
}
inline void ModelConfigs::set_sync_interval_seconds(float value) {
  set_has_sync_interval_seconds();
  sync_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.sync_interval_seconds)
}

// optional float no_signals_interval_seconds = 7 [default = 0.5];
inline bool ModelConfigs::has_no_signals_interval_seconds() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ModelConfigs::set_has_no_signals_interval_seconds() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ModelConfigs::clear_has_no_signals_interval_seconds() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ModelConfigs::clear_no_signals_interval_seconds() {
  no_signals_interval_seconds_ = 0.5f;
  clear_has_no_signals_interval_seconds();
}
inline float ModelConfigs::no_signals_interval_seconds() const {
  // @@protoc_insertion_point(field_get:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.no_signals_interval_seconds)
  return no_signals_interval_seconds_;
}
inline void ModelConfigs::set_no_signals_interval_seconds(float value) {
  set_has_no_signals_interval_seconds();
  no_signals_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:apollo.perception.traffic_light.preprocessor_config.ModelConfigs.no_signals_interval_seconds)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace preprocessor_config
}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perception_2ftraffic_5flight_2fpreprocessor_5fconfig_2eproto__INCLUDED

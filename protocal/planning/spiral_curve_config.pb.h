// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: planning/spiral_curve_config.proto

#ifndef PROTOBUF_planning_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED
#define PROTOBUF_planning_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED

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
namespace planning {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_planning_2fspiral_5fcurve_5fconfig_2eproto();
void protobuf_AssignDesc_planning_2fspiral_5fcurve_5fconfig_2eproto();
void protobuf_ShutdownFile_planning_2fspiral_5fcurve_5fconfig_2eproto();

class SpiralCurveConfig;

// ===================================================================

class SpiralCurveConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.planning.SpiralCurveConfig) */ {
 public:
  SpiralCurveConfig();
  virtual ~SpiralCurveConfig();

  SpiralCurveConfig(const SpiralCurveConfig& from);

  inline SpiralCurveConfig& operator=(const SpiralCurveConfig& from) {
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
  static const SpiralCurveConfig& default_instance();

  void Swap(SpiralCurveConfig* other);

  // implements Message ----------------------------------------------

  inline SpiralCurveConfig* New() const { return New(NULL); }

  SpiralCurveConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SpiralCurveConfig& from);
  void MergeFrom(const SpiralCurveConfig& from);
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
  void InternalSwap(SpiralCurveConfig* other);
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

  // optional int32 simpson_size = 1 [default = 9];
  bool has_simpson_size() const;
  void clear_simpson_size();
  static const int kSimpsonSizeFieldNumber = 1;
  ::google::protobuf::int32 simpson_size() const;
  void set_simpson_size(::google::protobuf::int32 value);

  // optional double newton_raphson_tol = 2 [default = 0.01];
  bool has_newton_raphson_tol() const;
  void clear_newton_raphson_tol();
  static const int kNewtonRaphsonTolFieldNumber = 2;
  double newton_raphson_tol() const;
  void set_newton_raphson_tol(double value);

  // optional int32 newton_raphson_max_iter = 3 [default = 20];
  bool has_newton_raphson_max_iter() const;
  void clear_newton_raphson_max_iter();
  static const int kNewtonRaphsonMaxIterFieldNumber = 3;
  ::google::protobuf::int32 newton_raphson_max_iter() const;
  void set_newton_raphson_max_iter(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.planning.SpiralCurveConfig)
 private:
  inline void set_has_simpson_size();
  inline void clear_has_simpson_size();
  inline void set_has_newton_raphson_tol();
  inline void clear_has_newton_raphson_tol();
  inline void set_has_newton_raphson_max_iter();
  inline void clear_has_newton_raphson_max_iter();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double newton_raphson_tol_;
  ::google::protobuf::int32 simpson_size_;
  ::google::protobuf::int32 newton_raphson_max_iter_;
  friend void  protobuf_AddDesc_planning_2fspiral_5fcurve_5fconfig_2eproto();
  friend void protobuf_AssignDesc_planning_2fspiral_5fcurve_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_planning_2fspiral_5fcurve_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static SpiralCurveConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SpiralCurveConfig

// optional int32 simpson_size = 1 [default = 9];
inline bool SpiralCurveConfig::has_simpson_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpiralCurveConfig::set_has_simpson_size() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpiralCurveConfig::clear_has_simpson_size() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpiralCurveConfig::clear_simpson_size() {
  simpson_size_ = 9;
  clear_has_simpson_size();
}
inline ::google::protobuf::int32 SpiralCurveConfig::simpson_size() const {
  // @@protoc_insertion_point(field_get:apollo.planning.SpiralCurveConfig.simpson_size)
  return simpson_size_;
}
inline void SpiralCurveConfig::set_simpson_size(::google::protobuf::int32 value) {
  set_has_simpson_size();
  simpson_size_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.SpiralCurveConfig.simpson_size)
}

// optional double newton_raphson_tol = 2 [default = 0.01];
inline bool SpiralCurveConfig::has_newton_raphson_tol() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SpiralCurveConfig::set_has_newton_raphson_tol() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SpiralCurveConfig::clear_has_newton_raphson_tol() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SpiralCurveConfig::clear_newton_raphson_tol() {
  newton_raphson_tol_ = 0.01;
  clear_has_newton_raphson_tol();
}
inline double SpiralCurveConfig::newton_raphson_tol() const {
  // @@protoc_insertion_point(field_get:apollo.planning.SpiralCurveConfig.newton_raphson_tol)
  return newton_raphson_tol_;
}
inline void SpiralCurveConfig::set_newton_raphson_tol(double value) {
  set_has_newton_raphson_tol();
  newton_raphson_tol_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.SpiralCurveConfig.newton_raphson_tol)
}

// optional int32 newton_raphson_max_iter = 3 [default = 20];
inline bool SpiralCurveConfig::has_newton_raphson_max_iter() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SpiralCurveConfig::set_has_newton_raphson_max_iter() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SpiralCurveConfig::clear_has_newton_raphson_max_iter() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SpiralCurveConfig::clear_newton_raphson_max_iter() {
  newton_raphson_max_iter_ = 20;
  clear_has_newton_raphson_max_iter();
}
inline ::google::protobuf::int32 SpiralCurveConfig::newton_raphson_max_iter() const {
  // @@protoc_insertion_point(field_get:apollo.planning.SpiralCurveConfig.newton_raphson_max_iter)
  return newton_raphson_max_iter_;
}
inline void SpiralCurveConfig::set_newton_raphson_max_iter(::google::protobuf::int32 value) {
  set_has_newton_raphson_max_iter();
  newton_raphson_max_iter_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.SpiralCurveConfig.newton_raphson_max_iter)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_planning_2fspiral_5fcurve_5fconfig_2eproto__INCLUDED

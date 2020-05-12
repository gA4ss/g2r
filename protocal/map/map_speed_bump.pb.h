// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map/map_speed_bump.proto

#ifndef PROTOBUF_map_2fmap_5fspeed_5fbump_2eproto__INCLUDED
#define PROTOBUF_map_2fmap_5fspeed_5fbump_2eproto__INCLUDED

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
#include "map/map_id.pb.h"
#include "map/map_geometry.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace hdmap {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto();
void protobuf_AssignDesc_map_2fmap_5fspeed_5fbump_2eproto();
void protobuf_ShutdownFile_map_2fmap_5fspeed_5fbump_2eproto();

class SpeedBump;

// ===================================================================

class SpeedBump : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.hdmap.SpeedBump) */ {
 public:
  SpeedBump();
  virtual ~SpeedBump();

  SpeedBump(const SpeedBump& from);

  inline SpeedBump& operator=(const SpeedBump& from) {
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
  static const SpeedBump& default_instance();

  void Swap(SpeedBump* other);

  // implements Message ----------------------------------------------

  inline SpeedBump* New() const { return New(NULL); }

  SpeedBump* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SpeedBump& from);
  void MergeFrom(const SpeedBump& from);
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
  void InternalSwap(SpeedBump* other);
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

  // optional .apollo.hdmap.Id id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::apollo::hdmap::Id& id() const;
  ::apollo::hdmap::Id* mutable_id();
  ::apollo::hdmap::Id* release_id();
  void set_allocated_id(::apollo::hdmap::Id* id);

  // repeated .apollo.hdmap.Id overlap_id = 2;
  int overlap_id_size() const;
  void clear_overlap_id();
  static const int kOverlapIdFieldNumber = 2;
  const ::apollo::hdmap::Id& overlap_id(int index) const;
  ::apollo::hdmap::Id* mutable_overlap_id(int index);
  ::apollo::hdmap::Id* add_overlap_id();
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
      mutable_overlap_id();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
      overlap_id() const;

  // repeated .apollo.hdmap.Curve position = 3;
  int position_size() const;
  void clear_position();
  static const int kPositionFieldNumber = 3;
  const ::apollo::hdmap::Curve& position(int index) const;
  ::apollo::hdmap::Curve* mutable_position(int index);
  ::apollo::hdmap::Curve* add_position();
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
      mutable_position();
  const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
      position() const;

  // @@protoc_insertion_point(class_scope:apollo.hdmap.SpeedBump)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::hdmap::Id* id_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id > overlap_id_;
  ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve > position_;
  friend void  protobuf_AddDesc_map_2fmap_5fspeed_5fbump_2eproto();
  friend void protobuf_AssignDesc_map_2fmap_5fspeed_5fbump_2eproto();
  friend void protobuf_ShutdownFile_map_2fmap_5fspeed_5fbump_2eproto();

  void InitAsDefaultInstance();
  static SpeedBump* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedBump

// optional .apollo.hdmap.Id id = 1;
inline bool SpeedBump::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SpeedBump::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SpeedBump::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SpeedBump::clear_id() {
  if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  clear_has_id();
}
inline const ::apollo::hdmap::Id& SpeedBump::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
inline ::apollo::hdmap::Id* SpeedBump::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::apollo::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.id)
  return id_;
}
inline ::apollo::hdmap::Id* SpeedBump::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedBump.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline void SpeedBump::set_allocated_id(::apollo::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedBump.id)
}

// repeated .apollo.hdmap.Id overlap_id = 2;
inline int SpeedBump::overlap_id_size() const {
  return overlap_id_.size();
}
inline void SpeedBump::clear_overlap_id() {
  overlap_id_.Clear();
}
inline const ::apollo::hdmap::Id& SpeedBump::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Get(index);
}
inline ::apollo::hdmap::Id* SpeedBump::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Mutable(index);
}
inline ::apollo::hdmap::Id* SpeedBump::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
SpeedBump::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.overlap_id)
  return &overlap_id_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
SpeedBump::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.overlap_id)
  return overlap_id_;
}

// repeated .apollo.hdmap.Curve position = 3;
inline int SpeedBump::position_size() const {
  return position_.size();
}
inline void SpeedBump::clear_position() {
  position_.Clear();
}
inline const ::apollo::hdmap::Curve& SpeedBump::position(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedBump.position)
  return position_.Get(index);
}
inline ::apollo::hdmap::Curve* SpeedBump::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedBump.position)
  return position_.Mutable(index);
}
inline ::apollo::hdmap::Curve* SpeedBump::add_position() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedBump.position)
  return position_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >*
SpeedBump::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedBump.position)
  return &position_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Curve >&
SpeedBump::position() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedBump.position)
  return position_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_map_2fmap_5fspeed_5fbump_2eproto__INCLUDED

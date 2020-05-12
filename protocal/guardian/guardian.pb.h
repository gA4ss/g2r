// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guardian/guardian.proto

#ifndef PROTOBUF_guardian_2fguardian_2eproto__INCLUDED
#define PROTOBUF_guardian_2fguardian_2eproto__INCLUDED

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
#include "common/header.pb.h"
#include "control/control_cmd.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace guardian {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_guardian_2fguardian_2eproto();
void protobuf_AssignDesc_guardian_2fguardian_2eproto();
void protobuf_ShutdownFile_guardian_2fguardian_2eproto();

class GuardianCommand;

// ===================================================================

class GuardianCommand : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.guardian.GuardianCommand) */ {
 public:
  GuardianCommand();
  virtual ~GuardianCommand();

  GuardianCommand(const GuardianCommand& from);

  inline GuardianCommand& operator=(const GuardianCommand& from) {
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
  static const GuardianCommand& default_instance();

  void Swap(GuardianCommand* other);

  // implements Message ----------------------------------------------

  inline GuardianCommand* New() const { return New(NULL); }

  GuardianCommand* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GuardianCommand& from);
  void MergeFrom(const GuardianCommand& from);
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
  void InternalSwap(GuardianCommand* other);
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

  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* mutable_header();
  ::apollo::common::Header* release_header();
  void set_allocated_header(::apollo::common::Header* header);

  // optional .apollo.control.ControlCommand control_command = 2;
  bool has_control_command() const;
  void clear_control_command();
  static const int kControlCommandFieldNumber = 2;
  const ::apollo::control::ControlCommand& control_command() const;
  ::apollo::control::ControlCommand* mutable_control_command();
  ::apollo::control::ControlCommand* release_control_command();
  void set_allocated_control_command(::apollo::control::ControlCommand* control_command);

  // @@protoc_insertion_point(class_scope:apollo.guardian.GuardianCommand)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_control_command();
  inline void clear_has_control_command();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::apollo::common::Header* header_;
  ::apollo::control::ControlCommand* control_command_;
  friend void  protobuf_AddDesc_guardian_2fguardian_2eproto();
  friend void protobuf_AssignDesc_guardian_2fguardian_2eproto();
  friend void protobuf_ShutdownFile_guardian_2fguardian_2eproto();

  void InitAsDefaultInstance();
  static GuardianCommand* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GuardianCommand

// optional .apollo.common.Header header = 1;
inline bool GuardianCommand::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GuardianCommand::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GuardianCommand::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GuardianCommand::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
inline const ::apollo::common::Header& GuardianCommand::header() const {
  // @@protoc_insertion_point(field_get:apollo.guardian.GuardianCommand.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::apollo::common::Header* GuardianCommand::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.guardian.GuardianCommand.header)
  return header_;
}
inline ::apollo::common::Header* GuardianCommand::release_header() {
  // @@protoc_insertion_point(field_release:apollo.guardian.GuardianCommand.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void GuardianCommand::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.guardian.GuardianCommand.header)
}

// optional .apollo.control.ControlCommand control_command = 2;
inline bool GuardianCommand::has_control_command() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GuardianCommand::set_has_control_command() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GuardianCommand::clear_has_control_command() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GuardianCommand::clear_control_command() {
  if (control_command_ != NULL) control_command_->::apollo::control::ControlCommand::Clear();
  clear_has_control_command();
}
inline const ::apollo::control::ControlCommand& GuardianCommand::control_command() const {
  // @@protoc_insertion_point(field_get:apollo.guardian.GuardianCommand.control_command)
  return control_command_ != NULL ? *control_command_ : *default_instance_->control_command_;
}
inline ::apollo::control::ControlCommand* GuardianCommand::mutable_control_command() {
  set_has_control_command();
  if (control_command_ == NULL) {
    control_command_ = new ::apollo::control::ControlCommand;
  }
  // @@protoc_insertion_point(field_mutable:apollo.guardian.GuardianCommand.control_command)
  return control_command_;
}
inline ::apollo::control::ControlCommand* GuardianCommand::release_control_command() {
  // @@protoc_insertion_point(field_release:apollo.guardian.GuardianCommand.control_command)
  clear_has_control_command();
  ::apollo::control::ControlCommand* temp = control_command_;
  control_command_ = NULL;
  return temp;
}
inline void GuardianCommand::set_allocated_control_command(::apollo::control::ControlCommand* control_command) {
  delete control_command_;
  control_command_ = control_command;
  if (control_command) {
    set_has_control_command();
  } else {
    clear_has_control_command();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.guardian.GuardianCommand.control_command)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace guardian
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_guardian_2fguardian_2eproto__INCLUDED
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: calibration/republish_msg/relative_odometry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "calibration/republish_msg/relative_odometry.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace apollo {
namespace calibration {
namespace republish_msg {

namespace {

const ::google::protobuf::Descriptor* RelativeOdometry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RelativeOdometry_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() {
  protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "calibration/republish_msg/relative_odometry.proto");
  GOOGLE_CHECK(file != NULL);
  RelativeOdometry_descriptor_ = file->message_type(0);
  static const int RelativeOdometry_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, position_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, orientation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, position_type_),
  };
  RelativeOdometry_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RelativeOdometry_descriptor_,
      RelativeOdometry::default_instance_,
      RelativeOdometry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, _has_bits_[0]),
      -1,
      -1,
      sizeof(RelativeOdometry),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RelativeOdometry, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RelativeOdometry_descriptor_, &RelativeOdometry::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() {
  delete RelativeOdometry::default_instance_;
  delete RelativeOdometry_reflection_;
}

void protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::common::protobuf_AddDesc_common_2fheader_2eproto();
  ::apollo::common::protobuf_AddDesc_common_2fgeometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1calibration/republish_msg/relative_odo"
    "metry.proto\022 apollo.calibration.republis"
    "h_msg\032\023common/header.proto\032\025common/geome"
    "try.proto\"\253\001\n\020RelativeOdometry\022%\n\006header"
    "\030\001 \001(\0132\025.apollo.common.Header\022)\n\010positio"
    "n\030\002 \001(\0132\027.apollo.common.PointENU\022.\n\013orie"
    "ntation\030\003 \001(\0132\031.apollo.common.Quaternion"
    "\022\025\n\rposition_type\030\004 \001(\r", 303);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "calibration/republish_msg/relative_odometry.proto", &protobuf_RegisterTypes);
  RelativeOdometry::default_instance_ = new RelativeOdometry();
  RelativeOdometry::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto {
  StaticDescriptorInitializer_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto() {
    protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
  }
} static_descriptor_initializer_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RelativeOdometry::kHeaderFieldNumber;
const int RelativeOdometry::kPositionFieldNumber;
const int RelativeOdometry::kOrientationFieldNumber;
const int RelativeOdometry::kPositionTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RelativeOdometry::RelativeOdometry()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.calibration.republish_msg.RelativeOdometry)
}

void RelativeOdometry::InitAsDefaultInstance() {
  header_ = const_cast< ::apollo::common::Header*>(&::apollo::common::Header::default_instance());
  position_ = const_cast< ::apollo::common::PointENU*>(&::apollo::common::PointENU::default_instance());
  orientation_ = const_cast< ::apollo::common::Quaternion*>(&::apollo::common::Quaternion::default_instance());
}

RelativeOdometry::RelativeOdometry(const RelativeOdometry& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.calibration.republish_msg.RelativeOdometry)
}

void RelativeOdometry::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  position_ = NULL;
  orientation_ = NULL;
  position_type_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RelativeOdometry::~RelativeOdometry() {
  // @@protoc_insertion_point(destructor:apollo.calibration.republish_msg.RelativeOdometry)
  SharedDtor();
}

void RelativeOdometry::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
    delete position_;
    delete orientation_;
  }
}

void RelativeOdometry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RelativeOdometry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RelativeOdometry_descriptor_;
}

const RelativeOdometry& RelativeOdometry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_calibration_2frepublish_5fmsg_2frelative_5fodometry_2eproto();
  return *default_instance_;
}

RelativeOdometry* RelativeOdometry::default_instance_ = NULL;

RelativeOdometry* RelativeOdometry::New(::google::protobuf::Arena* arena) const {
  RelativeOdometry* n = new RelativeOdometry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RelativeOdometry::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.calibration.republish_msg.RelativeOdometry)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_header()) {
      if (header_ != NULL) header_->::apollo::common::Header::Clear();
    }
    if (has_position()) {
      if (position_ != NULL) position_->::apollo::common::PointENU::Clear();
    }
    if (has_orientation()) {
      if (orientation_ != NULL) orientation_->::apollo::common::Quaternion::Clear();
    }
    position_type_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool RelativeOdometry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.calibration.republish_msg.RelativeOdometry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_position;
        break;
      }

      // optional .apollo.common.PointENU position = 2;
      case 2: {
        if (tag == 18) {
         parse_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_orientation;
        break;
      }

      // optional .apollo.common.Quaternion orientation = 3;
      case 3: {
        if (tag == 26) {
         parse_orientation:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_orientation()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_position_type;
        break;
      }

      // optional uint32 position_type = 4;
      case 4: {
        if (tag == 32) {
         parse_position_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &position_type_)));
          set_has_position_type();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.calibration.republish_msg.RelativeOdometry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.calibration.republish_msg.RelativeOdometry)
  return false;
#undef DO_
}

void RelativeOdometry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.calibration.republish_msg.RelativeOdometry)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional .apollo.common.PointENU position = 2;
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->position_, output);
  }

  // optional .apollo.common.Quaternion orientation = 3;
  if (has_orientation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->orientation_, output);
  }

  // optional uint32 position_type = 4;
  if (has_position_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->position_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.calibration.republish_msg.RelativeOdometry)
}

::google::protobuf::uint8* RelativeOdometry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.calibration.republish_msg.RelativeOdometry)
  // optional .apollo.common.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // optional .apollo.common.PointENU position = 2;
  if (has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->position_, false, target);
  }

  // optional .apollo.common.Quaternion orientation = 3;
  if (has_orientation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->orientation_, false, target);
  }

  // optional uint32 position_type = 4;
  if (has_position_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->position_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.calibration.republish_msg.RelativeOdometry)
  return target;
}

int RelativeOdometry::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.calibration.republish_msg.RelativeOdometry)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional .apollo.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->header_);
    }

    // optional .apollo.common.PointENU position = 2;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->position_);
    }

    // optional .apollo.common.Quaternion orientation = 3;
    if (has_orientation()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->orientation_);
    }

    // optional uint32 position_type = 4;
    if (has_position_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->position_type());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RelativeOdometry::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.calibration.republish_msg.RelativeOdometry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RelativeOdometry* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RelativeOdometry>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.calibration.republish_msg.RelativeOdometry)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.calibration.republish_msg.RelativeOdometry)
    MergeFrom(*source);
  }
}

void RelativeOdometry::MergeFrom(const RelativeOdometry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.calibration.republish_msg.RelativeOdometry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::apollo::common::Header::MergeFrom(from.header());
    }
    if (from.has_position()) {
      mutable_position()->::apollo::common::PointENU::MergeFrom(from.position());
    }
    if (from.has_orientation()) {
      mutable_orientation()->::apollo::common::Quaternion::MergeFrom(from.orientation());
    }
    if (from.has_position_type()) {
      set_position_type(from.position_type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void RelativeOdometry::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.calibration.republish_msg.RelativeOdometry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RelativeOdometry::CopyFrom(const RelativeOdometry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.calibration.republish_msg.RelativeOdometry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RelativeOdometry::IsInitialized() const {

  return true;
}

void RelativeOdometry::Swap(RelativeOdometry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RelativeOdometry::InternalSwap(RelativeOdometry* other) {
  std::swap(header_, other->header_);
  std::swap(position_, other->position_);
  std::swap(orientation_, other->orientation_);
  std::swap(position_type_, other->position_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RelativeOdometry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RelativeOdometry_descriptor_;
  metadata.reflection = RelativeOdometry_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RelativeOdometry

// optional .apollo.common.Header header = 1;
bool RelativeOdometry::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RelativeOdometry::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void RelativeOdometry::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void RelativeOdometry::clear_header() {
  if (header_ != NULL) header_->::apollo::common::Header::Clear();
  clear_has_header();
}
const ::apollo::common::Header& RelativeOdometry::header() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::apollo::common::Header* RelativeOdometry::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::apollo::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.header)
  return header_;
}
::apollo::common::Header* RelativeOdometry::release_header() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.header)
  clear_has_header();
  ::apollo::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void RelativeOdometry::set_allocated_header(::apollo::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.header)
}

// optional .apollo.common.PointENU position = 2;
bool RelativeOdometry::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RelativeOdometry::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
void RelativeOdometry::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
void RelativeOdometry::clear_position() {
  if (position_ != NULL) position_->::apollo::common::PointENU::Clear();
  clear_has_position();
}
const ::apollo::common::PointENU& RelativeOdometry::position() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
::apollo::common::PointENU* RelativeOdometry::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::apollo::common::PointENU;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.position)
  return position_;
}
::apollo::common::PointENU* RelativeOdometry::release_position() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.position)
  clear_has_position();
  ::apollo::common::PointENU* temp = position_;
  position_ = NULL;
  return temp;
}
void RelativeOdometry::set_allocated_position(::apollo::common::PointENU* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.position)
}

// optional .apollo.common.Quaternion orientation = 3;
bool RelativeOdometry::has_orientation() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void RelativeOdometry::set_has_orientation() {
  _has_bits_[0] |= 0x00000004u;
}
void RelativeOdometry::clear_has_orientation() {
  _has_bits_[0] &= ~0x00000004u;
}
void RelativeOdometry::clear_orientation() {
  if (orientation_ != NULL) orientation_->::apollo::common::Quaternion::Clear();
  clear_has_orientation();
}
const ::apollo::common::Quaternion& RelativeOdometry::orientation() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  return orientation_ != NULL ? *orientation_ : *default_instance_->orientation_;
}
::apollo::common::Quaternion* RelativeOdometry::mutable_orientation() {
  set_has_orientation();
  if (orientation_ == NULL) {
    orientation_ = new ::apollo::common::Quaternion;
  }
  // @@protoc_insertion_point(field_mutable:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  return orientation_;
}
::apollo::common::Quaternion* RelativeOdometry::release_orientation() {
  // @@protoc_insertion_point(field_release:apollo.calibration.republish_msg.RelativeOdometry.orientation)
  clear_has_orientation();
  ::apollo::common::Quaternion* temp = orientation_;
  orientation_ = NULL;
  return temp;
}
void RelativeOdometry::set_allocated_orientation(::apollo::common::Quaternion* orientation) {
  delete orientation_;
  orientation_ = orientation;
  if (orientation) {
    set_has_orientation();
  } else {
    clear_has_orientation();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.calibration.republish_msg.RelativeOdometry.orientation)
}

// optional uint32 position_type = 4;
bool RelativeOdometry::has_position_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void RelativeOdometry::set_has_position_type() {
  _has_bits_[0] |= 0x00000008u;
}
void RelativeOdometry::clear_has_position_type() {
  _has_bits_[0] &= ~0x00000008u;
}
void RelativeOdometry::clear_position_type() {
  position_type_ = 0u;
  clear_has_position_type();
}
 ::google::protobuf::uint32 RelativeOdometry::position_type() const {
  // @@protoc_insertion_point(field_get:apollo.calibration.republish_msg.RelativeOdometry.position_type)
  return position_type_;
}
 void RelativeOdometry::set_position_type(::google::protobuf::uint32 value) {
  set_has_position_type();
  position_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.calibration.republish_msg.RelativeOdometry.position_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace republish_msg
}  // namespace calibration
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

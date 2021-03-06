// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map/map_speed_control.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map/map_speed_control.pb.h"

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
namespace hdmap {

namespace {

const ::google::protobuf::Descriptor* SpeedControl_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SpeedControl_reflection_ = NULL;
const ::google::protobuf::Descriptor* SpeedControls_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SpeedControls_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_map_2fmap_5fspeed_5fcontrol_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_map_2fmap_5fspeed_5fcontrol_2eproto() {
  protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "map/map_speed_control.proto");
  GOOGLE_CHECK(file != NULL);
  SpeedControl_descriptor_ = file->message_type(0);
  static const int SpeedControl_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, polygon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, speed_limit_),
  };
  SpeedControl_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SpeedControl_descriptor_,
      SpeedControl::default_instance_,
      SpeedControl_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, _has_bits_[0]),
      -1,
      -1,
      sizeof(SpeedControl),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControl, _internal_metadata_),
      -1);
  SpeedControls_descriptor_ = file->message_type(1);
  static const int SpeedControls_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, speed_control_),
  };
  SpeedControls_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SpeedControls_descriptor_,
      SpeedControls::default_instance_,
      SpeedControls_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, _has_bits_[0]),
      -1,
      -1,
      sizeof(SpeedControls),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SpeedControls, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_map_2fmap_5fspeed_5fcontrol_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SpeedControl_descriptor_, &SpeedControl::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SpeedControls_descriptor_, &SpeedControls::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_map_2fmap_5fspeed_5fcontrol_2eproto() {
  delete SpeedControl::default_instance_;
  delete SpeedControl_reflection_;
  delete SpeedControls::default_instance_;
  delete SpeedControls_reflection_;
}

void protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::hdmap::protobuf_AddDesc_map_2fmap_5fgeometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033map/map_speed_control.proto\022\014apollo.hd"
    "map\032\026map/map_geometry.proto\"Y\n\014SpeedCont"
    "rol\022\014\n\004name\030\001 \001(\t\022&\n\007polygon\030\002 \001(\0132\025.apo"
    "llo.hdmap.Polygon\022\023\n\013speed_limit\030\003 \001(\001\"B"
    "\n\rSpeedControls\0221\n\rspeed_control\030\001 \003(\0132\032"
    ".apollo.hdmap.SpeedControl", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map/map_speed_control.proto", &protobuf_RegisterTypes);
  SpeedControl::default_instance_ = new SpeedControl();
  SpeedControls::default_instance_ = new SpeedControls();
  SpeedControl::default_instance_->InitAsDefaultInstance();
  SpeedControls::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_map_2fmap_5fspeed_5fcontrol_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_map_2fmap_5fspeed_5fcontrol_2eproto {
  StaticDescriptorInitializer_map_2fmap_5fspeed_5fcontrol_2eproto() {
    protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto();
  }
} static_descriptor_initializer_map_2fmap_5fspeed_5fcontrol_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedControl::kNameFieldNumber;
const int SpeedControl::kPolygonFieldNumber;
const int SpeedControl::kSpeedLimitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedControl::SpeedControl()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedControl)
}

void SpeedControl::InitAsDefaultInstance() {
  polygon_ = const_cast< ::apollo::hdmap::Polygon*>(&::apollo::hdmap::Polygon::default_instance());
}

SpeedControl::SpeedControl(const SpeedControl& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedControl)
}

void SpeedControl::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  polygon_ = NULL;
  speed_limit_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeedControl::~SpeedControl() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedControl)
  SharedDtor();
}

void SpeedControl::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete polygon_;
  }
}

void SpeedControl::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedControl::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SpeedControl_descriptor_;
}

const SpeedControl& SpeedControl::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto();
  return *default_instance_;
}

SpeedControl* SpeedControl::default_instance_ = NULL;

SpeedControl* SpeedControl::New(::google::protobuf::Arena* arena) const {
  SpeedControl* n = new SpeedControl;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedControl::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedControl)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_polygon()) {
      if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
    }
    speed_limit_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SpeedControl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedControl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.hdmap.SpeedControl.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_polygon;
        break;
      }

      // optional .apollo.hdmap.Polygon polygon = 2;
      case 2: {
        if (tag == 18) {
         parse_polygon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_polygon()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_speed_limit;
        break;
      }

      // optional double speed_limit = 3;
      case 3: {
        if (tag == 25) {
         parse_speed_limit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_limit_)));
          set_has_speed_limit();
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
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedControl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedControl)
  return false;
#undef DO_
}

void SpeedControl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedControl)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.SpeedControl.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional .apollo.hdmap.Polygon polygon = 2;
  if (has_polygon()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->polygon_, output);
  }

  // optional double speed_limit = 3;
  if (has_speed_limit()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->speed_limit(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedControl)
}

::google::protobuf::uint8* SpeedControl::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedControl)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.SpeedControl.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional .apollo.hdmap.Polygon polygon = 2;
  if (has_polygon()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->polygon_, false, target);
  }

  // optional double speed_limit = 3;
  if (has_speed_limit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->speed_limit(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedControl)
  return target;
}

int SpeedControl::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedControl)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .apollo.hdmap.Polygon polygon = 2;
    if (has_polygon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->polygon_);
    }

    // optional double speed_limit = 3;
    if (has_speed_limit()) {
      total_size += 1 + 8;
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

void SpeedControl::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedControl)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SpeedControl* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedControl>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedControl)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedControl)
    MergeFrom(*source);
  }
}

void SpeedControl::MergeFrom(const SpeedControl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedControl)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_polygon()) {
      mutable_polygon()->::apollo::hdmap::Polygon::MergeFrom(from.polygon());
    }
    if (from.has_speed_limit()) {
      set_speed_limit(from.speed_limit());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SpeedControl::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedControl::CopyFrom(const SpeedControl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedControl::IsInitialized() const {

  return true;
}

void SpeedControl::Swap(SpeedControl* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedControl::InternalSwap(SpeedControl* other) {
  name_.Swap(&other->name_);
  std::swap(polygon_, other->polygon_);
  std::swap(speed_limit_, other->speed_limit_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedControl::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SpeedControl_descriptor_;
  metadata.reflection = SpeedControl_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedControl

// optional string name = 1;
bool SpeedControl::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SpeedControl::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void SpeedControl::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void SpeedControl::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& SpeedControl::name() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SpeedControl::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.name)
}
 void SpeedControl::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.hdmap.SpeedControl.name)
}
 void SpeedControl::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.hdmap.SpeedControl.name)
}
 ::std::string* SpeedControl::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SpeedControl::release_name() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SpeedControl::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedControl.name)
}

// optional .apollo.hdmap.Polygon polygon = 2;
bool SpeedControl::has_polygon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SpeedControl::set_has_polygon() {
  _has_bits_[0] |= 0x00000002u;
}
void SpeedControl::clear_has_polygon() {
  _has_bits_[0] &= ~0x00000002u;
}
void SpeedControl::clear_polygon() {
  if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
  clear_has_polygon();
}
const ::apollo::hdmap::Polygon& SpeedControl::polygon() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.polygon)
  return polygon_ != NULL ? *polygon_ : *default_instance_->polygon_;
}
::apollo::hdmap::Polygon* SpeedControl::mutable_polygon() {
  set_has_polygon();
  if (polygon_ == NULL) {
    polygon_ = new ::apollo::hdmap::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControl.polygon)
  return polygon_;
}
::apollo::hdmap::Polygon* SpeedControl::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.SpeedControl.polygon)
  clear_has_polygon();
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
void SpeedControl::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    set_has_polygon();
  } else {
    clear_has_polygon();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.SpeedControl.polygon)
}

// optional double speed_limit = 3;
bool SpeedControl::has_speed_limit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SpeedControl::set_has_speed_limit() {
  _has_bits_[0] |= 0x00000004u;
}
void SpeedControl::clear_has_speed_limit() {
  _has_bits_[0] &= ~0x00000004u;
}
void SpeedControl::clear_speed_limit() {
  speed_limit_ = 0;
  clear_has_speed_limit();
}
 double SpeedControl::speed_limit() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControl.speed_limit)
  return speed_limit_;
}
 void SpeedControl::set_speed_limit(double value) {
  set_has_speed_limit();
  speed_limit_ = value;
  // @@protoc_insertion_point(field_set:apollo.hdmap.SpeedControl.speed_limit)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SpeedControls::kSpeedControlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SpeedControls::SpeedControls()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.SpeedControls)
}

void SpeedControls::InitAsDefaultInstance() {
}

SpeedControls::SpeedControls(const SpeedControls& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.SpeedControls)
}

void SpeedControls::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SpeedControls::~SpeedControls() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.SpeedControls)
  SharedDtor();
}

void SpeedControls::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SpeedControls::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SpeedControls::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SpeedControls_descriptor_;
}

const SpeedControls& SpeedControls::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_map_2fmap_5fspeed_5fcontrol_2eproto();
  return *default_instance_;
}

SpeedControls* SpeedControls::default_instance_ = NULL;

SpeedControls* SpeedControls::New(::google::protobuf::Arena* arena) const {
  SpeedControls* n = new SpeedControls;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SpeedControls::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.SpeedControls)
  speed_control_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SpeedControls::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.SpeedControls)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .apollo.hdmap.SpeedControl speed_control = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_speed_control:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_speed_control()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_speed_control;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:apollo.hdmap.SpeedControls)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.SpeedControls)
  return false;
#undef DO_
}

void SpeedControls::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.SpeedControls)
  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  for (unsigned int i = 0, n = this->speed_control_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->speed_control(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.SpeedControls)
}

::google::protobuf::uint8* SpeedControls::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.SpeedControls)
  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  for (unsigned int i = 0, n = this->speed_control_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->speed_control(i), false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.SpeedControls)
  return target;
}

int SpeedControls::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.SpeedControls)
  int total_size = 0;

  // repeated .apollo.hdmap.SpeedControl speed_control = 1;
  total_size += 1 * this->speed_control_size();
  for (int i = 0; i < this->speed_control_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->speed_control(i));
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

void SpeedControls::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.SpeedControls)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SpeedControls* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SpeedControls>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.SpeedControls)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.SpeedControls)
    MergeFrom(*source);
  }
}

void SpeedControls::MergeFrom(const SpeedControls& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.SpeedControls)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  speed_control_.MergeFrom(from.speed_control_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SpeedControls::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.SpeedControls)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SpeedControls::CopyFrom(const SpeedControls& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.SpeedControls)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SpeedControls::IsInitialized() const {

  return true;
}

void SpeedControls::Swap(SpeedControls* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SpeedControls::InternalSwap(SpeedControls* other) {
  speed_control_.UnsafeArenaSwap(&other->speed_control_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SpeedControls::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SpeedControls_descriptor_;
  metadata.reflection = SpeedControls_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SpeedControls

// repeated .apollo.hdmap.SpeedControl speed_control = 1;
int SpeedControls::speed_control_size() const {
  return speed_control_.size();
}
void SpeedControls::clear_speed_control() {
  speed_control_.Clear();
}
const ::apollo::hdmap::SpeedControl& SpeedControls::speed_control(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Get(index);
}
::apollo::hdmap::SpeedControl* SpeedControls::mutable_speed_control(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Mutable(index);
}
::apollo::hdmap::SpeedControl* SpeedControls::add_speed_control() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >*
SpeedControls::mutable_speed_control() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.SpeedControls.speed_control)
  return &speed_control_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::SpeedControl >&
SpeedControls::speed_control() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.SpeedControls.speed_control)
  return speed_control_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

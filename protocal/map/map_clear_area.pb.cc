// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map/map_clear_area.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map/map_clear_area.pb.h"

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

const ::google::protobuf::Descriptor* ClearArea_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClearArea_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_map_2fmap_5fclear_5farea_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_map_2fmap_5fclear_5farea_2eproto() {
  protobuf_AddDesc_map_2fmap_5fclear_5farea_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "map/map_clear_area.proto");
  GOOGLE_CHECK(file != NULL);
  ClearArea_descriptor_ = file->message_type(0);
  static const int ClearArea_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClearArea, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClearArea, overlap_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClearArea, polygon_),
  };
  ClearArea_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ClearArea_descriptor_,
      ClearArea::default_instance_,
      ClearArea_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClearArea, _has_bits_[0]),
      -1,
      -1,
      sizeof(ClearArea),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClearArea, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_map_2fmap_5fclear_5farea_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ClearArea_descriptor_, &ClearArea::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_map_2fmap_5fclear_5farea_2eproto() {
  delete ClearArea::default_instance_;
  delete ClearArea_reflection_;
}

void protobuf_AddDesc_map_2fmap_5fclear_5farea_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_map_2fmap_5fclear_5farea_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::apollo::hdmap::protobuf_AddDesc_map_2fmap_5fid_2eproto();
  ::apollo::hdmap::protobuf_AddDesc_map_2fmap_5fgeometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030map/map_clear_area.proto\022\014apollo.hdmap"
    "\032\020map/map_id.proto\032\026map/map_geometry.pro"
    "to\"w\n\tClearArea\022\034\n\002id\030\001 \001(\0132\020.apollo.hdm"
    "ap.Id\022$\n\noverlap_id\030\002 \003(\0132\020.apollo.hdmap"
    ".Id\022&\n\007polygon\030\003 \001(\0132\025.apollo.hdmap.Poly"
    "gon", 203);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map/map_clear_area.proto", &protobuf_RegisterTypes);
  ClearArea::default_instance_ = new ClearArea();
  ClearArea::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_map_2fmap_5fclear_5farea_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_map_2fmap_5fclear_5farea_2eproto {
  StaticDescriptorInitializer_map_2fmap_5fclear_5farea_2eproto() {
    protobuf_AddDesc_map_2fmap_5fclear_5farea_2eproto();
  }
} static_descriptor_initializer_map_2fmap_5fclear_5farea_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClearArea::kIdFieldNumber;
const int ClearArea::kOverlapIdFieldNumber;
const int ClearArea::kPolygonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClearArea::ClearArea()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.ClearArea)
}

void ClearArea::InitAsDefaultInstance() {
  id_ = const_cast< ::apollo::hdmap::Id*>(&::apollo::hdmap::Id::default_instance());
  polygon_ = const_cast< ::apollo::hdmap::Polygon*>(&::apollo::hdmap::Polygon::default_instance());
}

ClearArea::ClearArea(const ClearArea& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.ClearArea)
}

void ClearArea::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
  polygon_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClearArea::~ClearArea() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.ClearArea)
  SharedDtor();
}

void ClearArea::SharedDtor() {
  if (this != default_instance_) {
    delete id_;
    delete polygon_;
  }
}

void ClearArea::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClearArea::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClearArea_descriptor_;
}

const ClearArea& ClearArea::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_map_2fmap_5fclear_5farea_2eproto();
  return *default_instance_;
}

ClearArea* ClearArea::default_instance_ = NULL;

ClearArea* ClearArea::New(::google::protobuf::Arena* arena) const {
  ClearArea* n = new ClearArea;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClearArea::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.ClearArea)
  if (_has_bits_[0 / 32] & 5u) {
    if (has_id()) {
      if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
    }
    if (has_polygon()) {
      if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
    }
  }
  overlap_id_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ClearArea::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.ClearArea)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.hdmap.Id id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_overlap_id;
        break;
      }

      // repeated .apollo.hdmap.Id overlap_id = 2;
      case 2: {
        if (tag == 18) {
         parse_overlap_id:
          DO_(input->IncrementRecursionDepth());
         parse_loop_overlap_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_overlap_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_overlap_id;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(26)) goto parse_polygon;
        break;
      }

      // optional .apollo.hdmap.Polygon polygon = 3;
      case 3: {
        if (tag == 26) {
         parse_polygon:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_polygon()));
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
  // @@protoc_insertion_point(parse_success:apollo.hdmap.ClearArea)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.ClearArea)
  return false;
#undef DO_
}

void ClearArea::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.ClearArea)
  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->id_, output);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->overlap_id(i), output);
  }

  // optional .apollo.hdmap.Polygon polygon = 3;
  if (has_polygon()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->polygon_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.ClearArea)
}

::google::protobuf::uint8* ClearArea::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.ClearArea)
  // optional .apollo.hdmap.Id id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->id_, false, target);
  }

  // repeated .apollo.hdmap.Id overlap_id = 2;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->overlap_id(i), false, target);
  }

  // optional .apollo.hdmap.Polygon polygon = 3;
  if (has_polygon()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->polygon_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.ClearArea)
  return target;
}

int ClearArea::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.ClearArea)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 5u) {
    // optional .apollo.hdmap.Id id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->id_);
    }

    // optional .apollo.hdmap.Polygon polygon = 3;
    if (has_polygon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->polygon_);
    }

  }
  // repeated .apollo.hdmap.Id overlap_id = 2;
  total_size += 1 * this->overlap_id_size();
  for (int i = 0; i < this->overlap_id_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->overlap_id(i));
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

void ClearArea::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.ClearArea)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ClearArea* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ClearArea>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.ClearArea)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.ClearArea)
    MergeFrom(*source);
  }
}

void ClearArea::MergeFrom(const ClearArea& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.ClearArea)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  overlap_id_.MergeFrom(from.overlap_id_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      mutable_id()->::apollo::hdmap::Id::MergeFrom(from.id());
    }
    if (from.has_polygon()) {
      mutable_polygon()->::apollo::hdmap::Polygon::MergeFrom(from.polygon());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ClearArea::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.ClearArea)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClearArea::CopyFrom(const ClearArea& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.ClearArea)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClearArea::IsInitialized() const {

  return true;
}

void ClearArea::Swap(ClearArea* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClearArea::InternalSwap(ClearArea* other) {
  std::swap(id_, other->id_);
  overlap_id_.UnsafeArenaSwap(&other->overlap_id_);
  std::swap(polygon_, other->polygon_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ClearArea::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClearArea_descriptor_;
  metadata.reflection = ClearArea_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClearArea

// optional .apollo.hdmap.Id id = 1;
bool ClearArea::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ClearArea::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ClearArea::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ClearArea::clear_id() {
  if (id_ != NULL) id_->::apollo::hdmap::Id::Clear();
  clear_has_id();
}
const ::apollo::hdmap::Id& ClearArea::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.ClearArea.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
::apollo::hdmap::Id* ClearArea::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::apollo::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.ClearArea.id)
  return id_;
}
::apollo::hdmap::Id* ClearArea::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.ClearArea.id)
  clear_has_id();
  ::apollo::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
void ClearArea::set_allocated_id(::apollo::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.ClearArea.id)
}

// repeated .apollo.hdmap.Id overlap_id = 2;
int ClearArea::overlap_id_size() const {
  return overlap_id_.size();
}
void ClearArea::clear_overlap_id() {
  overlap_id_.Clear();
}
const ::apollo::hdmap::Id& ClearArea::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.ClearArea.overlap_id)
  return overlap_id_.Get(index);
}
::apollo::hdmap::Id* ClearArea::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.ClearArea.overlap_id)
  return overlap_id_.Mutable(index);
}
::apollo::hdmap::Id* ClearArea::add_overlap_id() {
  // @@protoc_insertion_point(field_add:apollo.hdmap.ClearArea.overlap_id)
  return overlap_id_.Add();
}
::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >*
ClearArea::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:apollo.hdmap.ClearArea.overlap_id)
  return &overlap_id_;
}
const ::google::protobuf::RepeatedPtrField< ::apollo::hdmap::Id >&
ClearArea::overlap_id() const {
  // @@protoc_insertion_point(field_list:apollo.hdmap.ClearArea.overlap_id)
  return overlap_id_;
}

// optional .apollo.hdmap.Polygon polygon = 3;
bool ClearArea::has_polygon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ClearArea::set_has_polygon() {
  _has_bits_[0] |= 0x00000004u;
}
void ClearArea::clear_has_polygon() {
  _has_bits_[0] &= ~0x00000004u;
}
void ClearArea::clear_polygon() {
  if (polygon_ != NULL) polygon_->::apollo::hdmap::Polygon::Clear();
  clear_has_polygon();
}
const ::apollo::hdmap::Polygon& ClearArea::polygon() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.ClearArea.polygon)
  return polygon_ != NULL ? *polygon_ : *default_instance_->polygon_;
}
::apollo::hdmap::Polygon* ClearArea::mutable_polygon() {
  set_has_polygon();
  if (polygon_ == NULL) {
    polygon_ = new ::apollo::hdmap::Polygon;
  }
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.ClearArea.polygon)
  return polygon_;
}
::apollo::hdmap::Polygon* ClearArea::release_polygon() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.ClearArea.polygon)
  clear_has_polygon();
  ::apollo::hdmap::Polygon* temp = polygon_;
  polygon_ = NULL;
  return temp;
}
void ClearArea::set_allocated_polygon(::apollo::hdmap::Polygon* polygon) {
  delete polygon_;
  polygon_ = polygon;
  if (polygon) {
    set_has_polygon();
  } else {
    clear_has_polygon();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.ClearArea.polygon)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
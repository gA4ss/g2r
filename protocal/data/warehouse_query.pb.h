// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: data/warehouse_query.proto

#ifndef PROTOBUF_data_2fwarehouse_5fquery_2eproto__INCLUDED
#define PROTOBUF_data_2fwarehouse_5fquery_2eproto__INCLUDED

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
#include "data/task.pb.h"
// @@protoc_insertion_point(includes)

namespace apollo {
namespace data {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_data_2fwarehouse_5fquery_2eproto();
void protobuf_AssignDesc_data_2fwarehouse_5fquery_2eproto();
void protobuf_ShutdownFile_data_2fwarehouse_5fquery_2eproto();

class SearchRequest;
class SearchResponse;

// ===================================================================

class SearchRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.data.SearchRequest) */ {
 public:
  SearchRequest();
  virtual ~SearchRequest();

  SearchRequest(const SearchRequest& from);

  inline SearchRequest& operator=(const SearchRequest& from) {
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
  static const SearchRequest& default_instance();

  void Swap(SearchRequest* other);

  // implements Message ----------------------------------------------

  inline SearchRequest* New() const { return New(NULL); }

  SearchRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchRequest& from);
  void MergeFrom(const SearchRequest& from);
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
  void InternalSwap(SearchRequest* other);
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

  // optional string vehicle_name = 1;
  bool has_vehicle_name() const;
  void clear_vehicle_name();
  static const int kVehicleNameFieldNumber = 1;
  const ::std::string& vehicle_name() const;
  void set_vehicle_name(const ::std::string& value);
  void set_vehicle_name(const char* value);
  void set_vehicle_name(const char* value, size_t size);
  ::std::string* mutable_vehicle_name();
  ::std::string* release_vehicle_name();
  void set_allocated_vehicle_name(::std::string* vehicle_name);

  // optional string map_name = 2;
  bool has_map_name() const;
  void clear_map_name();
  static const int kMapNameFieldNumber = 2;
  const ::std::string& map_name() const;
  void set_map_name(const ::std::string& value);
  void set_map_name(const char* value);
  void set_map_name(const char* value, size_t size);
  ::std::string* mutable_map_name();
  ::std::string* release_map_name();
  void set_allocated_map_name(::std::string* map_name);

  // optional .apollo.data.Task.LoopType loop_type = 3;
  bool has_loop_type() const;
  void clear_loop_type();
  static const int kLoopTypeFieldNumber = 3;
  ::apollo::data::Task_LoopType loop_type() const;
  void set_loop_type(::apollo::data::Task_LoopType value);

  // repeated string topics = 4;
  int topics_size() const;
  void clear_topics();
  static const int kTopicsFieldNumber = 4;
  const ::std::string& topics(int index) const;
  ::std::string* mutable_topics(int index);
  void set_topics(int index, const ::std::string& value);
  void set_topics(int index, const char* value);
  void set_topics(int index, const char* value, size_t size);
  ::std::string* add_topics();
  void add_topics(const ::std::string& value);
  void add_topics(const char* value);
  void add_topics(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& topics() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_topics();

  // repeated string fields = 5;
  int fields_size() const;
  void clear_fields();
  static const int kFieldsFieldNumber = 5;
  const ::std::string& fields(int index) const;
  ::std::string* mutable_fields(int index);
  void set_fields(int index, const ::std::string& value);
  void set_fields(int index, const char* value);
  void set_fields(int index, const char* value, size_t size);
  ::std::string* add_fields();
  void add_fields(const ::std::string& value);
  void add_fields(const char* value);
  void add_fields(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& fields() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_fields();

  // optional int32 count = 6 [default = 20];
  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 6;
  ::google::protobuf::int32 count() const;
  void set_count(::google::protobuf::int32 value);

  // optional int32 offset = 7;
  bool has_offset() const;
  void clear_offset();
  static const int kOffsetFieldNumber = 7;
  ::google::protobuf::int32 offset() const;
  void set_offset(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.data.SearchRequest)
 private:
  inline void set_has_vehicle_name();
  inline void clear_has_vehicle_name();
  inline void set_has_map_name();
  inline void clear_has_map_name();
  inline void set_has_loop_type();
  inline void clear_has_loop_type();
  inline void set_has_count();
  inline void clear_has_count();
  inline void set_has_offset();
  inline void clear_has_offset();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr vehicle_name_;
  ::google::protobuf::internal::ArenaStringPtr map_name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> topics_;
  int loop_type_;
  ::google::protobuf::int32 count_;
  ::google::protobuf::RepeatedPtrField< ::std::string> fields_;
  ::google::protobuf::int32 offset_;
  friend void  protobuf_AddDesc_data_2fwarehouse_5fquery_2eproto();
  friend void protobuf_AssignDesc_data_2fwarehouse_5fquery_2eproto();
  friend void protobuf_ShutdownFile_data_2fwarehouse_5fquery_2eproto();

  void InitAsDefaultInstance();
  static SearchRequest* default_instance_;
};
// -------------------------------------------------------------------

class SearchResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.data.SearchResponse) */ {
 public:
  SearchResponse();
  virtual ~SearchResponse();

  SearchResponse(const SearchResponse& from);

  inline SearchResponse& operator=(const SearchResponse& from) {
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
  static const SearchResponse& default_instance();

  void Swap(SearchResponse* other);

  // implements Message ----------------------------------------------

  inline SearchResponse* New() const { return New(NULL); }

  SearchResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchResponse& from);
  void MergeFrom(const SearchResponse& from);
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
  void InternalSwap(SearchResponse* other);
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

  // repeated .apollo.data.Task tasks = 1;
  int tasks_size() const;
  void clear_tasks();
  static const int kTasksFieldNumber = 1;
  const ::apollo::data::Task& tasks(int index) const;
  ::apollo::data::Task* mutable_tasks(int index);
  ::apollo::data::Task* add_tasks();
  ::google::protobuf::RepeatedPtrField< ::apollo::data::Task >*
      mutable_tasks();
  const ::google::protobuf::RepeatedPtrField< ::apollo::data::Task >&
      tasks() const;

  // optional int32 total_count = 2;
  bool has_total_count() const;
  void clear_total_count();
  static const int kTotalCountFieldNumber = 2;
  ::google::protobuf::int32 total_count() const;
  void set_total_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.data.SearchResponse)
 private:
  inline void set_has_total_count();
  inline void clear_has_total_count();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::data::Task > tasks_;
  ::google::protobuf::int32 total_count_;
  friend void  protobuf_AddDesc_data_2fwarehouse_5fquery_2eproto();
  friend void protobuf_AssignDesc_data_2fwarehouse_5fquery_2eproto();
  friend void protobuf_ShutdownFile_data_2fwarehouse_5fquery_2eproto();

  void InitAsDefaultInstance();
  static SearchResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SearchRequest

// optional string vehicle_name = 1;
inline bool SearchRequest::has_vehicle_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchRequest::set_has_vehicle_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchRequest::clear_has_vehicle_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchRequest::clear_vehicle_name() {
  vehicle_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_vehicle_name();
}
inline const ::std::string& SearchRequest::vehicle_name() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.vehicle_name)
  return vehicle_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_vehicle_name(const ::std::string& value) {
  set_has_vehicle_name();
  vehicle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.vehicle_name)
}
inline void SearchRequest::set_vehicle_name(const char* value) {
  set_has_vehicle_name();
  vehicle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.data.SearchRequest.vehicle_name)
}
inline void SearchRequest::set_vehicle_name(const char* value, size_t size) {
  set_has_vehicle_name();
  vehicle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.data.SearchRequest.vehicle_name)
}
inline ::std::string* SearchRequest::mutable_vehicle_name() {
  set_has_vehicle_name();
  // @@protoc_insertion_point(field_mutable:apollo.data.SearchRequest.vehicle_name)
  return vehicle_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SearchRequest::release_vehicle_name() {
  // @@protoc_insertion_point(field_release:apollo.data.SearchRequest.vehicle_name)
  clear_has_vehicle_name();
  return vehicle_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_allocated_vehicle_name(::std::string* vehicle_name) {
  if (vehicle_name != NULL) {
    set_has_vehicle_name();
  } else {
    clear_has_vehicle_name();
  }
  vehicle_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vehicle_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.data.SearchRequest.vehicle_name)
}

// optional string map_name = 2;
inline bool SearchRequest::has_map_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchRequest::set_has_map_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchRequest::clear_has_map_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchRequest::clear_map_name() {
  map_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_map_name();
}
inline const ::std::string& SearchRequest::map_name() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.map_name)
  return map_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_map_name(const ::std::string& value) {
  set_has_map_name();
  map_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.map_name)
}
inline void SearchRequest::set_map_name(const char* value) {
  set_has_map_name();
  map_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.data.SearchRequest.map_name)
}
inline void SearchRequest::set_map_name(const char* value, size_t size) {
  set_has_map_name();
  map_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.data.SearchRequest.map_name)
}
inline ::std::string* SearchRequest::mutable_map_name() {
  set_has_map_name();
  // @@protoc_insertion_point(field_mutable:apollo.data.SearchRequest.map_name)
  return map_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SearchRequest::release_map_name() {
  // @@protoc_insertion_point(field_release:apollo.data.SearchRequest.map_name)
  clear_has_map_name();
  return map_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_allocated_map_name(::std::string* map_name) {
  if (map_name != NULL) {
    set_has_map_name();
  } else {
    clear_has_map_name();
  }
  map_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), map_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.data.SearchRequest.map_name)
}

// optional .apollo.data.Task.LoopType loop_type = 3;
inline bool SearchRequest::has_loop_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SearchRequest::set_has_loop_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SearchRequest::clear_has_loop_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SearchRequest::clear_loop_type() {
  loop_type_ = 0;
  clear_has_loop_type();
}
inline ::apollo::data::Task_LoopType SearchRequest::loop_type() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.loop_type)
  return static_cast< ::apollo::data::Task_LoopType >(loop_type_);
}
inline void SearchRequest::set_loop_type(::apollo::data::Task_LoopType value) {
  assert(::apollo::data::Task_LoopType_IsValid(value));
  set_has_loop_type();
  loop_type_ = value;
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.loop_type)
}

// repeated string topics = 4;
inline int SearchRequest::topics_size() const {
  return topics_.size();
}
inline void SearchRequest::clear_topics() {
  topics_.Clear();
}
inline const ::std::string& SearchRequest::topics(int index) const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.topics)
  return topics_.Get(index);
}
inline ::std::string* SearchRequest::mutable_topics(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.data.SearchRequest.topics)
  return topics_.Mutable(index);
}
inline void SearchRequest::set_topics(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.topics)
  topics_.Mutable(index)->assign(value);
}
inline void SearchRequest::set_topics(int index, const char* value) {
  topics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:apollo.data.SearchRequest.topics)
}
inline void SearchRequest::set_topics(int index, const char* value, size_t size) {
  topics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:apollo.data.SearchRequest.topics)
}
inline ::std::string* SearchRequest::add_topics() {
  // @@protoc_insertion_point(field_add_mutable:apollo.data.SearchRequest.topics)
  return topics_.Add();
}
inline void SearchRequest::add_topics(const ::std::string& value) {
  topics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:apollo.data.SearchRequest.topics)
}
inline void SearchRequest::add_topics(const char* value) {
  topics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:apollo.data.SearchRequest.topics)
}
inline void SearchRequest::add_topics(const char* value, size_t size) {
  topics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:apollo.data.SearchRequest.topics)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SearchRequest::topics() const {
  // @@protoc_insertion_point(field_list:apollo.data.SearchRequest.topics)
  return topics_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SearchRequest::mutable_topics() {
  // @@protoc_insertion_point(field_mutable_list:apollo.data.SearchRequest.topics)
  return &topics_;
}

// repeated string fields = 5;
inline int SearchRequest::fields_size() const {
  return fields_.size();
}
inline void SearchRequest::clear_fields() {
  fields_.Clear();
}
inline const ::std::string& SearchRequest::fields(int index) const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.fields)
  return fields_.Get(index);
}
inline ::std::string* SearchRequest::mutable_fields(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.data.SearchRequest.fields)
  return fields_.Mutable(index);
}
inline void SearchRequest::set_fields(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.fields)
  fields_.Mutable(index)->assign(value);
}
inline void SearchRequest::set_fields(int index, const char* value) {
  fields_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:apollo.data.SearchRequest.fields)
}
inline void SearchRequest::set_fields(int index, const char* value, size_t size) {
  fields_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:apollo.data.SearchRequest.fields)
}
inline ::std::string* SearchRequest::add_fields() {
  // @@protoc_insertion_point(field_add_mutable:apollo.data.SearchRequest.fields)
  return fields_.Add();
}
inline void SearchRequest::add_fields(const ::std::string& value) {
  fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:apollo.data.SearchRequest.fields)
}
inline void SearchRequest::add_fields(const char* value) {
  fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:apollo.data.SearchRequest.fields)
}
inline void SearchRequest::add_fields(const char* value, size_t size) {
  fields_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:apollo.data.SearchRequest.fields)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SearchRequest::fields() const {
  // @@protoc_insertion_point(field_list:apollo.data.SearchRequest.fields)
  return fields_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SearchRequest::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_list:apollo.data.SearchRequest.fields)
  return &fields_;
}

// optional int32 count = 6 [default = 20];
inline bool SearchRequest::has_count() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SearchRequest::set_has_count() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SearchRequest::clear_has_count() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SearchRequest::clear_count() {
  count_ = 20;
  clear_has_count();
}
inline ::google::protobuf::int32 SearchRequest::count() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.count)
  return count_;
}
inline void SearchRequest::set_count(::google::protobuf::int32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.count)
}

// optional int32 offset = 7;
inline bool SearchRequest::has_offset() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SearchRequest::set_has_offset() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SearchRequest::clear_has_offset() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SearchRequest::clear_offset() {
  offset_ = 0;
  clear_has_offset();
}
inline ::google::protobuf::int32 SearchRequest::offset() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchRequest.offset)
  return offset_;
}
inline void SearchRequest::set_offset(::google::protobuf::int32 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:apollo.data.SearchRequest.offset)
}

// -------------------------------------------------------------------

// SearchResponse

// repeated .apollo.data.Task tasks = 1;
inline int SearchResponse::tasks_size() const {
  return tasks_.size();
}
inline void SearchResponse::clear_tasks() {
  tasks_.Clear();
}
inline const ::apollo::data::Task& SearchResponse::tasks(int index) const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchResponse.tasks)
  return tasks_.Get(index);
}
inline ::apollo::data::Task* SearchResponse::mutable_tasks(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.data.SearchResponse.tasks)
  return tasks_.Mutable(index);
}
inline ::apollo::data::Task* SearchResponse::add_tasks() {
  // @@protoc_insertion_point(field_add:apollo.data.SearchResponse.tasks)
  return tasks_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::data::Task >*
SearchResponse::mutable_tasks() {
  // @@protoc_insertion_point(field_mutable_list:apollo.data.SearchResponse.tasks)
  return &tasks_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::data::Task >&
SearchResponse::tasks() const {
  // @@protoc_insertion_point(field_list:apollo.data.SearchResponse.tasks)
  return tasks_;
}

// optional int32 total_count = 2;
inline bool SearchResponse::has_total_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchResponse::set_has_total_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchResponse::clear_has_total_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchResponse::clear_total_count() {
  total_count_ = 0;
  clear_has_total_count();
}
inline ::google::protobuf::int32 SearchResponse::total_count() const {
  // @@protoc_insertion_point(field_get:apollo.data.SearchResponse.total_count)
  return total_count_;
}
inline void SearchResponse::set_total_count(::google::protobuf::int32 value) {
  set_has_total_count();
  total_count_ = value;
  // @@protoc_insertion_point(field_set:apollo.data.SearchResponse.total_count)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_data_2fwarehouse_5fquery_2eproto__INCLUDED

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: planning/navi_obstacle_decider_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "planning/navi_obstacle_decider_config.pb.h"

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
namespace planning {

namespace {

const ::google::protobuf::Descriptor* NaviObstacleDeciderConfig_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NaviObstacleDeciderConfig_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() {
  protobuf_AddDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "planning/navi_obstacle_decider_config.proto");
  GOOGLE_CHECK(file != NULL);
  NaviObstacleDeciderConfig_descriptor_ = file->message_type(0);
  static const int NaviObstacleDeciderConfig_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, min_nudge_distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, max_nudge_distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, max_allow_nudge_speed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, safe_distance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, nudge_allow_tolerance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, cycles_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, judge_dis_coeff_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, basis_dis_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, lateral_velocity_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, speed_decider_detect_range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, max_keep_nudge_cycles_),
  };
  NaviObstacleDeciderConfig_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      NaviObstacleDeciderConfig_descriptor_,
      NaviObstacleDeciderConfig::default_instance_,
      NaviObstacleDeciderConfig_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, _has_bits_[0]),
      -1,
      -1,
      sizeof(NaviObstacleDeciderConfig),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NaviObstacleDeciderConfig, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      NaviObstacleDeciderConfig_descriptor_, &NaviObstacleDeciderConfig::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() {
  delete NaviObstacleDeciderConfig::default_instance_;
  delete NaviObstacleDeciderConfig_reflection_;
}

void protobuf_AddDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n+planning/navi_obstacle_decider_config."
    "proto\022\017apollo.planning\"\210\003\n\031NaviObstacleD"
    "eciderConfig\022\037\n\022min_nudge_distance\030\001 \001(\001"
    ":\0030.2\022\037\n\022max_nudge_distance\030\002 \001(\001:\0031.2\022%"
    "\n\025max_allow_nudge_speed\030\003 \001(\001:\00616.667\022\032\n"
    "\rsafe_distance\030\004 \001(\001:\0030.2\022#\n\025nudge_allow"
    "_tolerance\030\005 \001(\001:\0040.05\022\030\n\rcycles_number\030"
    "\006 \001(\r:\0013\022\032\n\017judge_dis_coeff\030\007 \001(\001:\0012\022\033\n\017"
    "basis_dis_value\030\010 \001(\001:\00230\022#\n\026lateral_vel"
    "ocity_value\030\t \001(\001:\0030.5\022%\n\032speed_decider_"
    "detect_range\030\n \001(\001:\0011\022\"\n\025max_keep_nudge_"
    "cycles\030\013 \001(\r:\003100", 457);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "planning/navi_obstacle_decider_config.proto", &protobuf_RegisterTypes);
  NaviObstacleDeciderConfig::default_instance_ = new NaviObstacleDeciderConfig();
  NaviObstacleDeciderConfig::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto {
  StaticDescriptorInitializer_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto() {
    protobuf_AddDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto();
  }
} static_descriptor_initializer_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NaviObstacleDeciderConfig::kMinNudgeDistanceFieldNumber;
const int NaviObstacleDeciderConfig::kMaxNudgeDistanceFieldNumber;
const int NaviObstacleDeciderConfig::kMaxAllowNudgeSpeedFieldNumber;
const int NaviObstacleDeciderConfig::kSafeDistanceFieldNumber;
const int NaviObstacleDeciderConfig::kNudgeAllowToleranceFieldNumber;
const int NaviObstacleDeciderConfig::kCyclesNumberFieldNumber;
const int NaviObstacleDeciderConfig::kJudgeDisCoeffFieldNumber;
const int NaviObstacleDeciderConfig::kBasisDisValueFieldNumber;
const int NaviObstacleDeciderConfig::kLateralVelocityValueFieldNumber;
const int NaviObstacleDeciderConfig::kSpeedDeciderDetectRangeFieldNumber;
const int NaviObstacleDeciderConfig::kMaxKeepNudgeCyclesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NaviObstacleDeciderConfig::NaviObstacleDeciderConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.planning.NaviObstacleDeciderConfig)
}

void NaviObstacleDeciderConfig::InitAsDefaultInstance() {
}

NaviObstacleDeciderConfig::NaviObstacleDeciderConfig(const NaviObstacleDeciderConfig& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.planning.NaviObstacleDeciderConfig)
}

void NaviObstacleDeciderConfig::SharedCtor() {
  _cached_size_ = 0;
  min_nudge_distance_ = 0.2;
  max_nudge_distance_ = 1.2;
  max_allow_nudge_speed_ = 16.667;
  safe_distance_ = 0.2;
  nudge_allow_tolerance_ = 0.05;
  cycles_number_ = 3u;
  judge_dis_coeff_ = 2;
  basis_dis_value_ = 30;
  lateral_velocity_value_ = 0.5;
  speed_decider_detect_range_ = 1;
  max_keep_nudge_cycles_ = 100u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NaviObstacleDeciderConfig::~NaviObstacleDeciderConfig() {
  // @@protoc_insertion_point(destructor:apollo.planning.NaviObstacleDeciderConfig)
  SharedDtor();
}

void NaviObstacleDeciderConfig::SharedDtor() {
  if (this != default_instance_) {
  }
}

void NaviObstacleDeciderConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NaviObstacleDeciderConfig::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NaviObstacleDeciderConfig_descriptor_;
}

const NaviObstacleDeciderConfig& NaviObstacleDeciderConfig::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_planning_2fnavi_5fobstacle_5fdecider_5fconfig_2eproto();
  return *default_instance_;
}

NaviObstacleDeciderConfig* NaviObstacleDeciderConfig::default_instance_ = NULL;

NaviObstacleDeciderConfig* NaviObstacleDeciderConfig::New(::google::protobuf::Arena* arena) const {
  NaviObstacleDeciderConfig* n = new NaviObstacleDeciderConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void NaviObstacleDeciderConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.planning.NaviObstacleDeciderConfig)
  if (_has_bits_[0 / 32] & 255u) {
    min_nudge_distance_ = 0.2;
    max_nudge_distance_ = 1.2;
    max_allow_nudge_speed_ = 16.667;
    safe_distance_ = 0.2;
    nudge_allow_tolerance_ = 0.05;
    cycles_number_ = 3u;
    judge_dis_coeff_ = 2;
    basis_dis_value_ = 30;
  }
  if (_has_bits_[8 / 32] & 1792u) {
    lateral_velocity_value_ = 0.5;
    speed_decider_detect_range_ = 1;
    max_keep_nudge_cycles_ = 100u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool NaviObstacleDeciderConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.planning.NaviObstacleDeciderConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double min_nudge_distance = 1 [default = 0.2];
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_nudge_distance_)));
          set_has_min_nudge_distance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_max_nudge_distance;
        break;
      }

      // optional double max_nudge_distance = 2 [default = 1.2];
      case 2: {
        if (tag == 17) {
         parse_max_nudge_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_nudge_distance_)));
          set_has_max_nudge_distance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_max_allow_nudge_speed;
        break;
      }

      // optional double max_allow_nudge_speed = 3 [default = 16.667];
      case 3: {
        if (tag == 25) {
         parse_max_allow_nudge_speed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_allow_nudge_speed_)));
          set_has_max_allow_nudge_speed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_safe_distance;
        break;
      }

      // optional double safe_distance = 4 [default = 0.2];
      case 4: {
        if (tag == 33) {
         parse_safe_distance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &safe_distance_)));
          set_has_safe_distance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_nudge_allow_tolerance;
        break;
      }

      // optional double nudge_allow_tolerance = 5 [default = 0.05];
      case 5: {
        if (tag == 41) {
         parse_nudge_allow_tolerance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &nudge_allow_tolerance_)));
          set_has_nudge_allow_tolerance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_cycles_number;
        break;
      }

      // optional uint32 cycles_number = 6 [default = 3];
      case 6: {
        if (tag == 48) {
         parse_cycles_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cycles_number_)));
          set_has_cycles_number();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_judge_dis_coeff;
        break;
      }

      // optional double judge_dis_coeff = 7 [default = 2];
      case 7: {
        if (tag == 57) {
         parse_judge_dis_coeff:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &judge_dis_coeff_)));
          set_has_judge_dis_coeff();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_basis_dis_value;
        break;
      }

      // optional double basis_dis_value = 8 [default = 30];
      case 8: {
        if (tag == 65) {
         parse_basis_dis_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &basis_dis_value_)));
          set_has_basis_dis_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_lateral_velocity_value;
        break;
      }

      // optional double lateral_velocity_value = 9 [default = 0.5];
      case 9: {
        if (tag == 73) {
         parse_lateral_velocity_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lateral_velocity_value_)));
          set_has_lateral_velocity_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_speed_decider_detect_range;
        break;
      }

      // optional double speed_decider_detect_range = 10 [default = 1];
      case 10: {
        if (tag == 81) {
         parse_speed_decider_detect_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_decider_detect_range_)));
          set_has_speed_decider_detect_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_max_keep_nudge_cycles;
        break;
      }

      // optional uint32 max_keep_nudge_cycles = 11 [default = 100];
      case 11: {
        if (tag == 88) {
         parse_max_keep_nudge_cycles:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &max_keep_nudge_cycles_)));
          set_has_max_keep_nudge_cycles();
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
  // @@protoc_insertion_point(parse_success:apollo.planning.NaviObstacleDeciderConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.planning.NaviObstacleDeciderConfig)
  return false;
#undef DO_
}

void NaviObstacleDeciderConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.planning.NaviObstacleDeciderConfig)
  // optional double min_nudge_distance = 1 [default = 0.2];
  if (has_min_nudge_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->min_nudge_distance(), output);
  }

  // optional double max_nudge_distance = 2 [default = 1.2];
  if (has_max_nudge_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->max_nudge_distance(), output);
  }

  // optional double max_allow_nudge_speed = 3 [default = 16.667];
  if (has_max_allow_nudge_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->max_allow_nudge_speed(), output);
  }

  // optional double safe_distance = 4 [default = 0.2];
  if (has_safe_distance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->safe_distance(), output);
  }

  // optional double nudge_allow_tolerance = 5 [default = 0.05];
  if (has_nudge_allow_tolerance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->nudge_allow_tolerance(), output);
  }

  // optional uint32 cycles_number = 6 [default = 3];
  if (has_cycles_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->cycles_number(), output);
  }

  // optional double judge_dis_coeff = 7 [default = 2];
  if (has_judge_dis_coeff()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->judge_dis_coeff(), output);
  }

  // optional double basis_dis_value = 8 [default = 30];
  if (has_basis_dis_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->basis_dis_value(), output);
  }

  // optional double lateral_velocity_value = 9 [default = 0.5];
  if (has_lateral_velocity_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->lateral_velocity_value(), output);
  }

  // optional double speed_decider_detect_range = 10 [default = 1];
  if (has_speed_decider_detect_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->speed_decider_detect_range(), output);
  }

  // optional uint32 max_keep_nudge_cycles = 11 [default = 100];
  if (has_max_keep_nudge_cycles()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->max_keep_nudge_cycles(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.planning.NaviObstacleDeciderConfig)
}

::google::protobuf::uint8* NaviObstacleDeciderConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.planning.NaviObstacleDeciderConfig)
  // optional double min_nudge_distance = 1 [default = 0.2];
  if (has_min_nudge_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->min_nudge_distance(), target);
  }

  // optional double max_nudge_distance = 2 [default = 1.2];
  if (has_max_nudge_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->max_nudge_distance(), target);
  }

  // optional double max_allow_nudge_speed = 3 [default = 16.667];
  if (has_max_allow_nudge_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->max_allow_nudge_speed(), target);
  }

  // optional double safe_distance = 4 [default = 0.2];
  if (has_safe_distance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->safe_distance(), target);
  }

  // optional double nudge_allow_tolerance = 5 [default = 0.05];
  if (has_nudge_allow_tolerance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->nudge_allow_tolerance(), target);
  }

  // optional uint32 cycles_number = 6 [default = 3];
  if (has_cycles_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->cycles_number(), target);
  }

  // optional double judge_dis_coeff = 7 [default = 2];
  if (has_judge_dis_coeff()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->judge_dis_coeff(), target);
  }

  // optional double basis_dis_value = 8 [default = 30];
  if (has_basis_dis_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->basis_dis_value(), target);
  }

  // optional double lateral_velocity_value = 9 [default = 0.5];
  if (has_lateral_velocity_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->lateral_velocity_value(), target);
  }

  // optional double speed_decider_detect_range = 10 [default = 1];
  if (has_speed_decider_detect_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->speed_decider_detect_range(), target);
  }

  // optional uint32 max_keep_nudge_cycles = 11 [default = 100];
  if (has_max_keep_nudge_cycles()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->max_keep_nudge_cycles(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.planning.NaviObstacleDeciderConfig)
  return target;
}

int NaviObstacleDeciderConfig::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.planning.NaviObstacleDeciderConfig)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 255u) {
    // optional double min_nudge_distance = 1 [default = 0.2];
    if (has_min_nudge_distance()) {
      total_size += 1 + 8;
    }

    // optional double max_nudge_distance = 2 [default = 1.2];
    if (has_max_nudge_distance()) {
      total_size += 1 + 8;
    }

    // optional double max_allow_nudge_speed = 3 [default = 16.667];
    if (has_max_allow_nudge_speed()) {
      total_size += 1 + 8;
    }

    // optional double safe_distance = 4 [default = 0.2];
    if (has_safe_distance()) {
      total_size += 1 + 8;
    }

    // optional double nudge_allow_tolerance = 5 [default = 0.05];
    if (has_nudge_allow_tolerance()) {
      total_size += 1 + 8;
    }

    // optional uint32 cycles_number = 6 [default = 3];
    if (has_cycles_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cycles_number());
    }

    // optional double judge_dis_coeff = 7 [default = 2];
    if (has_judge_dis_coeff()) {
      total_size += 1 + 8;
    }

    // optional double basis_dis_value = 8 [default = 30];
    if (has_basis_dis_value()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & 1792u) {
    // optional double lateral_velocity_value = 9 [default = 0.5];
    if (has_lateral_velocity_value()) {
      total_size += 1 + 8;
    }

    // optional double speed_decider_detect_range = 10 [default = 1];
    if (has_speed_decider_detect_range()) {
      total_size += 1 + 8;
    }

    // optional uint32 max_keep_nudge_cycles = 11 [default = 100];
    if (has_max_keep_nudge_cycles()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->max_keep_nudge_cycles());
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

void NaviObstacleDeciderConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.planning.NaviObstacleDeciderConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const NaviObstacleDeciderConfig* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const NaviObstacleDeciderConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.planning.NaviObstacleDeciderConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.planning.NaviObstacleDeciderConfig)
    MergeFrom(*source);
  }
}

void NaviObstacleDeciderConfig::MergeFrom(const NaviObstacleDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.planning.NaviObstacleDeciderConfig)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_min_nudge_distance()) {
      set_min_nudge_distance(from.min_nudge_distance());
    }
    if (from.has_max_nudge_distance()) {
      set_max_nudge_distance(from.max_nudge_distance());
    }
    if (from.has_max_allow_nudge_speed()) {
      set_max_allow_nudge_speed(from.max_allow_nudge_speed());
    }
    if (from.has_safe_distance()) {
      set_safe_distance(from.safe_distance());
    }
    if (from.has_nudge_allow_tolerance()) {
      set_nudge_allow_tolerance(from.nudge_allow_tolerance());
    }
    if (from.has_cycles_number()) {
      set_cycles_number(from.cycles_number());
    }
    if (from.has_judge_dis_coeff()) {
      set_judge_dis_coeff(from.judge_dis_coeff());
    }
    if (from.has_basis_dis_value()) {
      set_basis_dis_value(from.basis_dis_value());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_lateral_velocity_value()) {
      set_lateral_velocity_value(from.lateral_velocity_value());
    }
    if (from.has_speed_decider_detect_range()) {
      set_speed_decider_detect_range(from.speed_decider_detect_range());
    }
    if (from.has_max_keep_nudge_cycles()) {
      set_max_keep_nudge_cycles(from.max_keep_nudge_cycles());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void NaviObstacleDeciderConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.planning.NaviObstacleDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NaviObstacleDeciderConfig::CopyFrom(const NaviObstacleDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.planning.NaviObstacleDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NaviObstacleDeciderConfig::IsInitialized() const {

  return true;
}

void NaviObstacleDeciderConfig::Swap(NaviObstacleDeciderConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NaviObstacleDeciderConfig::InternalSwap(NaviObstacleDeciderConfig* other) {
  std::swap(min_nudge_distance_, other->min_nudge_distance_);
  std::swap(max_nudge_distance_, other->max_nudge_distance_);
  std::swap(max_allow_nudge_speed_, other->max_allow_nudge_speed_);
  std::swap(safe_distance_, other->safe_distance_);
  std::swap(nudge_allow_tolerance_, other->nudge_allow_tolerance_);
  std::swap(cycles_number_, other->cycles_number_);
  std::swap(judge_dis_coeff_, other->judge_dis_coeff_);
  std::swap(basis_dis_value_, other->basis_dis_value_);
  std::swap(lateral_velocity_value_, other->lateral_velocity_value_);
  std::swap(speed_decider_detect_range_, other->speed_decider_detect_range_);
  std::swap(max_keep_nudge_cycles_, other->max_keep_nudge_cycles_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata NaviObstacleDeciderConfig::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NaviObstacleDeciderConfig_descriptor_;
  metadata.reflection = NaviObstacleDeciderConfig_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// NaviObstacleDeciderConfig

// optional double min_nudge_distance = 1 [default = 0.2];
bool NaviObstacleDeciderConfig::has_min_nudge_distance() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void NaviObstacleDeciderConfig::set_has_min_nudge_distance() {
  _has_bits_[0] |= 0x00000001u;
}
void NaviObstacleDeciderConfig::clear_has_min_nudge_distance() {
  _has_bits_[0] &= ~0x00000001u;
}
void NaviObstacleDeciderConfig::clear_min_nudge_distance() {
  min_nudge_distance_ = 0.2;
  clear_has_min_nudge_distance();
}
 double NaviObstacleDeciderConfig::min_nudge_distance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.min_nudge_distance)
  return min_nudge_distance_;
}
 void NaviObstacleDeciderConfig::set_min_nudge_distance(double value) {
  set_has_min_nudge_distance();
  min_nudge_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.min_nudge_distance)
}

// optional double max_nudge_distance = 2 [default = 1.2];
bool NaviObstacleDeciderConfig::has_max_nudge_distance() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void NaviObstacleDeciderConfig::set_has_max_nudge_distance() {
  _has_bits_[0] |= 0x00000002u;
}
void NaviObstacleDeciderConfig::clear_has_max_nudge_distance() {
  _has_bits_[0] &= ~0x00000002u;
}
void NaviObstacleDeciderConfig::clear_max_nudge_distance() {
  max_nudge_distance_ = 1.2;
  clear_has_max_nudge_distance();
}
 double NaviObstacleDeciderConfig::max_nudge_distance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.max_nudge_distance)
  return max_nudge_distance_;
}
 void NaviObstacleDeciderConfig::set_max_nudge_distance(double value) {
  set_has_max_nudge_distance();
  max_nudge_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.max_nudge_distance)
}

// optional double max_allow_nudge_speed = 3 [default = 16.667];
bool NaviObstacleDeciderConfig::has_max_allow_nudge_speed() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void NaviObstacleDeciderConfig::set_has_max_allow_nudge_speed() {
  _has_bits_[0] |= 0x00000004u;
}
void NaviObstacleDeciderConfig::clear_has_max_allow_nudge_speed() {
  _has_bits_[0] &= ~0x00000004u;
}
void NaviObstacleDeciderConfig::clear_max_allow_nudge_speed() {
  max_allow_nudge_speed_ = 16.667;
  clear_has_max_allow_nudge_speed();
}
 double NaviObstacleDeciderConfig::max_allow_nudge_speed() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.max_allow_nudge_speed)
  return max_allow_nudge_speed_;
}
 void NaviObstacleDeciderConfig::set_max_allow_nudge_speed(double value) {
  set_has_max_allow_nudge_speed();
  max_allow_nudge_speed_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.max_allow_nudge_speed)
}

// optional double safe_distance = 4 [default = 0.2];
bool NaviObstacleDeciderConfig::has_safe_distance() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void NaviObstacleDeciderConfig::set_has_safe_distance() {
  _has_bits_[0] |= 0x00000008u;
}
void NaviObstacleDeciderConfig::clear_has_safe_distance() {
  _has_bits_[0] &= ~0x00000008u;
}
void NaviObstacleDeciderConfig::clear_safe_distance() {
  safe_distance_ = 0.2;
  clear_has_safe_distance();
}
 double NaviObstacleDeciderConfig::safe_distance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.safe_distance)
  return safe_distance_;
}
 void NaviObstacleDeciderConfig::set_safe_distance(double value) {
  set_has_safe_distance();
  safe_distance_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.safe_distance)
}

// optional double nudge_allow_tolerance = 5 [default = 0.05];
bool NaviObstacleDeciderConfig::has_nudge_allow_tolerance() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void NaviObstacleDeciderConfig::set_has_nudge_allow_tolerance() {
  _has_bits_[0] |= 0x00000010u;
}
void NaviObstacleDeciderConfig::clear_has_nudge_allow_tolerance() {
  _has_bits_[0] &= ~0x00000010u;
}
void NaviObstacleDeciderConfig::clear_nudge_allow_tolerance() {
  nudge_allow_tolerance_ = 0.05;
  clear_has_nudge_allow_tolerance();
}
 double NaviObstacleDeciderConfig::nudge_allow_tolerance() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.nudge_allow_tolerance)
  return nudge_allow_tolerance_;
}
 void NaviObstacleDeciderConfig::set_nudge_allow_tolerance(double value) {
  set_has_nudge_allow_tolerance();
  nudge_allow_tolerance_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.nudge_allow_tolerance)
}

// optional uint32 cycles_number = 6 [default = 3];
bool NaviObstacleDeciderConfig::has_cycles_number() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void NaviObstacleDeciderConfig::set_has_cycles_number() {
  _has_bits_[0] |= 0x00000020u;
}
void NaviObstacleDeciderConfig::clear_has_cycles_number() {
  _has_bits_[0] &= ~0x00000020u;
}
void NaviObstacleDeciderConfig::clear_cycles_number() {
  cycles_number_ = 3u;
  clear_has_cycles_number();
}
 ::google::protobuf::uint32 NaviObstacleDeciderConfig::cycles_number() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.cycles_number)
  return cycles_number_;
}
 void NaviObstacleDeciderConfig::set_cycles_number(::google::protobuf::uint32 value) {
  set_has_cycles_number();
  cycles_number_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.cycles_number)
}

// optional double judge_dis_coeff = 7 [default = 2];
bool NaviObstacleDeciderConfig::has_judge_dis_coeff() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void NaviObstacleDeciderConfig::set_has_judge_dis_coeff() {
  _has_bits_[0] |= 0x00000040u;
}
void NaviObstacleDeciderConfig::clear_has_judge_dis_coeff() {
  _has_bits_[0] &= ~0x00000040u;
}
void NaviObstacleDeciderConfig::clear_judge_dis_coeff() {
  judge_dis_coeff_ = 2;
  clear_has_judge_dis_coeff();
}
 double NaviObstacleDeciderConfig::judge_dis_coeff() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.judge_dis_coeff)
  return judge_dis_coeff_;
}
 void NaviObstacleDeciderConfig::set_judge_dis_coeff(double value) {
  set_has_judge_dis_coeff();
  judge_dis_coeff_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.judge_dis_coeff)
}

// optional double basis_dis_value = 8 [default = 30];
bool NaviObstacleDeciderConfig::has_basis_dis_value() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void NaviObstacleDeciderConfig::set_has_basis_dis_value() {
  _has_bits_[0] |= 0x00000080u;
}
void NaviObstacleDeciderConfig::clear_has_basis_dis_value() {
  _has_bits_[0] &= ~0x00000080u;
}
void NaviObstacleDeciderConfig::clear_basis_dis_value() {
  basis_dis_value_ = 30;
  clear_has_basis_dis_value();
}
 double NaviObstacleDeciderConfig::basis_dis_value() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.basis_dis_value)
  return basis_dis_value_;
}
 void NaviObstacleDeciderConfig::set_basis_dis_value(double value) {
  set_has_basis_dis_value();
  basis_dis_value_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.basis_dis_value)
}

// optional double lateral_velocity_value = 9 [default = 0.5];
bool NaviObstacleDeciderConfig::has_lateral_velocity_value() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void NaviObstacleDeciderConfig::set_has_lateral_velocity_value() {
  _has_bits_[0] |= 0x00000100u;
}
void NaviObstacleDeciderConfig::clear_has_lateral_velocity_value() {
  _has_bits_[0] &= ~0x00000100u;
}
void NaviObstacleDeciderConfig::clear_lateral_velocity_value() {
  lateral_velocity_value_ = 0.5;
  clear_has_lateral_velocity_value();
}
 double NaviObstacleDeciderConfig::lateral_velocity_value() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.lateral_velocity_value)
  return lateral_velocity_value_;
}
 void NaviObstacleDeciderConfig::set_lateral_velocity_value(double value) {
  set_has_lateral_velocity_value();
  lateral_velocity_value_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.lateral_velocity_value)
}

// optional double speed_decider_detect_range = 10 [default = 1];
bool NaviObstacleDeciderConfig::has_speed_decider_detect_range() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void NaviObstacleDeciderConfig::set_has_speed_decider_detect_range() {
  _has_bits_[0] |= 0x00000200u;
}
void NaviObstacleDeciderConfig::clear_has_speed_decider_detect_range() {
  _has_bits_[0] &= ~0x00000200u;
}
void NaviObstacleDeciderConfig::clear_speed_decider_detect_range() {
  speed_decider_detect_range_ = 1;
  clear_has_speed_decider_detect_range();
}
 double NaviObstacleDeciderConfig::speed_decider_detect_range() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.speed_decider_detect_range)
  return speed_decider_detect_range_;
}
 void NaviObstacleDeciderConfig::set_speed_decider_detect_range(double value) {
  set_has_speed_decider_detect_range();
  speed_decider_detect_range_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.speed_decider_detect_range)
}

// optional uint32 max_keep_nudge_cycles = 11 [default = 100];
bool NaviObstacleDeciderConfig::has_max_keep_nudge_cycles() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
void NaviObstacleDeciderConfig::set_has_max_keep_nudge_cycles() {
  _has_bits_[0] |= 0x00000400u;
}
void NaviObstacleDeciderConfig::clear_has_max_keep_nudge_cycles() {
  _has_bits_[0] &= ~0x00000400u;
}
void NaviObstacleDeciderConfig::clear_max_keep_nudge_cycles() {
  max_keep_nudge_cycles_ = 100u;
  clear_has_max_keep_nudge_cycles();
}
 ::google::protobuf::uint32 NaviObstacleDeciderConfig::max_keep_nudge_cycles() const {
  // @@protoc_insertion_point(field_get:apollo.planning.NaviObstacleDeciderConfig.max_keep_nudge_cycles)
  return max_keep_nudge_cycles_;
}
 void NaviObstacleDeciderConfig::set_max_keep_nudge_cycles(::google::protobuf::uint32 value) {
  set_has_max_keep_nudge_cycles();
  max_keep_nudge_cycles_ = value;
  // @@protoc_insertion_point(field_set:apollo.planning.NaviObstacleDeciderConfig.max_keep_nudge_cycles)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
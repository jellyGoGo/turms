// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: constant/response_action.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_constant_2fresponse_5faction_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_constant_2fresponse_5faction_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_util.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_constant_2fresponse_5faction_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_constant_2fresponse_5faction_2eproto {
  static const ::uint32_t offsets[];
};
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {
enum ResponseAction : int {
  ACCEPT = 0,
  DECLINE = 1,
  IGNORE = 2,
  ResponseAction_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  ResponseAction_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool ResponseAction_IsValid(int value);
constexpr ResponseAction ResponseAction_MIN = static_cast<ResponseAction>(0);
constexpr ResponseAction ResponseAction_MAX = static_cast<ResponseAction>(2);
constexpr int ResponseAction_ARRAYSIZE = 2 + 1;
const std::string& ResponseAction_Name(ResponseAction value);
template <typename T>
const std::string& ResponseAction_Name(T value) {
  static_assert(std::is_same<T, ResponseAction>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ResponseAction_Name().");
  return ResponseAction_Name(static_cast<ResponseAction>(value));
}
const std::string& ResponseAction_Name(ResponseAction value);
bool ResponseAction_Parse(absl::string_view name, ResponseAction* value);

// ===================================================================



// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::turms::client::model::proto::ResponseAction> : std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_constant_2fresponse_5faction_2eproto_2epb_2eh

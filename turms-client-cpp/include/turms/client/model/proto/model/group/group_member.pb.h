// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/group/group_member.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmember_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmember_2eproto_2epb_2eh

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
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "turms/client/model/proto/constant/group_member_role.pb.h"
#include "turms/client/model/proto/constant/user_status.pb.h"
#include "turms/client/model/proto/constant/device_type.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroup_5fmember_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroup_5fmember_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupMember;
struct GroupMemberDefaultTypeInternal;
extern GroupMemberDefaultTypeInternal _GroupMember_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class GroupMember final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupMember) */ {
 public:
  inline GroupMember() : GroupMember(nullptr) {}
  ~GroupMember() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GroupMember(::google::protobuf::internal::ConstantInitialized);

  GroupMember(const GroupMember& from);
  GroupMember(GroupMember&& from) noexcept
    : GroupMember() {
    *this = ::std::move(from);
  }

  inline GroupMember& operator=(const GroupMember& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupMember& operator=(GroupMember&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const GroupMember& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupMember* internal_default_instance() {
    return reinterpret_cast<const GroupMember*>(
               &_GroupMember_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupMember& a, GroupMember& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupMember* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GroupMember* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupMember* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupMember>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const GroupMember& from);
  void MergeFrom(const GroupMember& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GroupMember* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.GroupMember";
  }
  protected:
  explicit GroupMember(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsingDeviceTypesFieldNumber = 8,
    kNameFieldNumber = 3,
    kGroupIdFieldNumber = 1,
    kUserIdFieldNumber = 2,
    kJoinDateFieldNumber = 5,
    kRoleFieldNumber = 4,
    kUserStatusFieldNumber = 7,
    kMuteEndDateFieldNumber = 6,
  };
  // repeated .turms.client.model.proto.DeviceType using_device_types = 8;
  int using_device_types_size() const;
  private:
  int _internal_using_device_types_size() const;

  public:
  void clear_using_device_types() ;
  public:
  ::turms::client::model::proto::DeviceType using_device_types(int index) const;
  void set_using_device_types(int index, ::turms::client::model::proto::DeviceType value);
  void add_using_device_types(::turms::client::model::proto::DeviceType value);
  const ::google::protobuf::RepeatedField<int>& using_device_types() const;
  ::google::protobuf::RepeatedField<int>* mutable_using_device_types();

  private:
  const ::google::protobuf::RepeatedField<int>& _internal_using_device_types() const;
  ::google::protobuf::RepeatedField<int>* _internal_mutable_using_device_types();

  public:
  // optional string name = 3;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional int64 group_id = 1;
  bool has_group_id() const;
  void clear_group_id() ;
  ::int64_t group_id() const;
  void set_group_id(::int64_t value);

  private:
  ::int64_t _internal_group_id() const;
  void _internal_set_group_id(::int64_t value);

  public:
  // optional int64 user_id = 2;
  bool has_user_id() const;
  void clear_user_id() ;
  ::int64_t user_id() const;
  void set_user_id(::int64_t value);

  private:
  ::int64_t _internal_user_id() const;
  void _internal_set_user_id(::int64_t value);

  public:
  // optional int64 join_date = 5;
  bool has_join_date() const;
  void clear_join_date() ;
  ::int64_t join_date() const;
  void set_join_date(::int64_t value);

  private:
  ::int64_t _internal_join_date() const;
  void _internal_set_join_date(::int64_t value);

  public:
  // optional .turms.client.model.proto.GroupMemberRole role = 4;
  bool has_role() const;
  void clear_role() ;
  ::turms::client::model::proto::GroupMemberRole role() const;
  void set_role(::turms::client::model::proto::GroupMemberRole value);

  private:
  ::turms::client::model::proto::GroupMemberRole _internal_role() const;
  void _internal_set_role(::turms::client::model::proto::GroupMemberRole value);

  public:
  // optional .turms.client.model.proto.UserStatus user_status = 7;
  bool has_user_status() const;
  void clear_user_status() ;
  ::turms::client::model::proto::UserStatus user_status() const;
  void set_user_status(::turms::client::model::proto::UserStatus value);

  private:
  ::turms::client::model::proto::UserStatus _internal_user_status() const;
  void _internal_set_user_status(::turms::client::model::proto::UserStatus value);

  public:
  // optional int64 mute_end_date = 6;
  bool has_mute_end_date() const;
  void clear_mute_end_date() ;
  ::int64_t mute_end_date() const;
  void set_mute_end_date(::int64_t value);

  private:
  ::int64_t _internal_mute_end_date() const;
  void _internal_set_mute_end_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupMember)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<3, 8, 0, 57, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedField<int> using_device_types_;
    mutable ::google::protobuf::internal::CachedSize _using_device_types_cached_byte_size_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::int64_t group_id_;
    ::int64_t user_id_;
    ::int64_t join_date_;
    int role_;
    int user_status_;
    ::int64_t mute_end_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fgroup_2fgroup_5fmember_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupMember

// optional int64 group_id = 1;
inline bool GroupMember::has_group_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void GroupMember::clear_group_id() {
  _impl_.group_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t GroupMember::group_id() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.group_id)
  return _internal_group_id();
}
inline void GroupMember::set_group_id(::int64_t value) {
  _internal_set_group_id(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.group_id)
}
inline ::int64_t GroupMember::_internal_group_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_id_;
}
inline void GroupMember::_internal_set_group_id(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.group_id_ = value;
}

// optional int64 user_id = 2;
inline bool GroupMember::has_user_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void GroupMember::clear_user_id() {
  _impl_.user_id_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t GroupMember::user_id() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.user_id)
  return _internal_user_id();
}
inline void GroupMember::set_user_id(::int64_t value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.user_id)
}
inline ::int64_t GroupMember::_internal_user_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_id_;
}
inline void GroupMember::_internal_set_user_id(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.user_id_ = value;
}

// optional string name = 3;
inline bool GroupMember::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GroupMember::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GroupMember::name() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void GroupMember::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.name)
}
inline std::string* GroupMember::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupMember.name)
  return _s;
}
inline const std::string& GroupMember::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void GroupMember::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupMember::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* GroupMember::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:turms.client.model.proto.GroupMember.name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void GroupMember::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.GroupMember.name)
}

// optional .turms.client.model.proto.GroupMemberRole role = 4;
inline bool GroupMember::has_role() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void GroupMember::clear_role() {
  _impl_.role_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::turms::client::model::proto::GroupMemberRole GroupMember::role() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.role)
  return _internal_role();
}
inline void GroupMember::set_role(::turms::client::model::proto::GroupMemberRole value) {
  _internal_set_role(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.role)
}
inline ::turms::client::model::proto::GroupMemberRole GroupMember::_internal_role() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::turms::client::model::proto::GroupMemberRole>(_impl_.role_);
}
inline void GroupMember::_internal_set_role(::turms::client::model::proto::GroupMemberRole value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.role_ = value;
}

// optional int64 join_date = 5;
inline bool GroupMember::has_join_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void GroupMember::clear_join_date() {
  _impl_.join_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t GroupMember::join_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.join_date)
  return _internal_join_date();
}
inline void GroupMember::set_join_date(::int64_t value) {
  _internal_set_join_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.join_date)
}
inline ::int64_t GroupMember::_internal_join_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.join_date_;
}
inline void GroupMember::_internal_set_join_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.join_date_ = value;
}

// optional int64 mute_end_date = 6;
inline bool GroupMember::has_mute_end_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline void GroupMember::clear_mute_end_date() {
  _impl_.mute_end_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::int64_t GroupMember::mute_end_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.mute_end_date)
  return _internal_mute_end_date();
}
inline void GroupMember::set_mute_end_date(::int64_t value) {
  _internal_set_mute_end_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.mute_end_date)
}
inline ::int64_t GroupMember::_internal_mute_end_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.mute_end_date_;
}
inline void GroupMember::_internal_set_mute_end_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.mute_end_date_ = value;
}

// optional .turms.client.model.proto.UserStatus user_status = 7;
inline bool GroupMember::has_user_status() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void GroupMember::clear_user_status() {
  _impl_.user_status_ = 0;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::turms::client::model::proto::UserStatus GroupMember::user_status() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.user_status)
  return _internal_user_status();
}
inline void GroupMember::set_user_status(::turms::client::model::proto::UserStatus value) {
  _internal_set_user_status(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.user_status)
}
inline ::turms::client::model::proto::UserStatus GroupMember::_internal_user_status() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::turms::client::model::proto::UserStatus>(_impl_.user_status_);
}
inline void GroupMember::_internal_set_user_status(::turms::client::model::proto::UserStatus value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.user_status_ = value;
}

// repeated .turms.client.model.proto.DeviceType using_device_types = 8;
inline int GroupMember::_internal_using_device_types_size() const {
  return _internal_using_device_types().size();
}
inline int GroupMember::using_device_types_size() const {
  return _internal_using_device_types_size();
}
inline void GroupMember::clear_using_device_types() {
  _internal_mutable_using_device_types()->Clear();
}
inline ::turms::client::model::proto::DeviceType GroupMember::using_device_types(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupMember.using_device_types)
  return static_cast<::turms::client::model::proto::DeviceType>(_internal_using_device_types().Get(index));
}
inline void GroupMember::set_using_device_types(int index, ::turms::client::model::proto::DeviceType value) {
  _internal_mutable_using_device_types()->Set(index, value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupMember.using_device_types)
}
inline void GroupMember::add_using_device_types(::turms::client::model::proto::DeviceType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_using_device_types()->Add(value);
  // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupMember.using_device_types)
}
inline const ::google::protobuf::RepeatedField<int>& GroupMember::using_device_types() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupMember.using_device_types)
  return _internal_using_device_types();
}
inline ::google::protobuf::RepeatedField<int>* GroupMember::mutable_using_device_types() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupMember.using_device_types)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_using_device_types();
}
inline const ::google::protobuf::RepeatedField<int>& GroupMember::_internal_using_device_types() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.using_device_types_;
}
inline ::google::protobuf::RepeatedField<int>* GroupMember::_internal_mutable_using_device_types() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.using_device_types_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroup_5fmember_2eproto_2epb_2eh

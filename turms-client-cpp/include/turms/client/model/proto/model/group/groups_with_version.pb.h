// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/group/groups_with_version.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroups_5fwith_5fversion_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroups_5fwith_5fversion_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/group/group.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fgroup_2fgroups_5fwith_5fversion_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fgroup_2fgroups_5fwith_5fversion_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class GroupsWithVersion;
struct GroupsWithVersionDefaultTypeInternal;
extern GroupsWithVersionDefaultTypeInternal _GroupsWithVersion_default_instance_;
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

class GroupsWithVersion final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.GroupsWithVersion) */ {
 public:
  inline GroupsWithVersion() : GroupsWithVersion(nullptr) {}
  ~GroupsWithVersion() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GroupsWithVersion(::google::protobuf::internal::ConstantInitialized);

  GroupsWithVersion(const GroupsWithVersion& from);
  GroupsWithVersion(GroupsWithVersion&& from) noexcept
    : GroupsWithVersion() {
    *this = ::std::move(from);
  }

  inline GroupsWithVersion& operator=(const GroupsWithVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupsWithVersion& operator=(GroupsWithVersion&& from) noexcept {
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

  static const GroupsWithVersion& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupsWithVersion* internal_default_instance() {
    return reinterpret_cast<const GroupsWithVersion*>(
               &_GroupsWithVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupsWithVersion& a, GroupsWithVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupsWithVersion* other) {
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
  void UnsafeArenaSwap(GroupsWithVersion* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupsWithVersion* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupsWithVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const GroupsWithVersion& from);
  void MergeFrom(const GroupsWithVersion& from);
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
  void InternalSwap(GroupsWithVersion* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.GroupsWithVersion";
  }
  protected:
  explicit GroupsWithVersion(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupsFieldNumber = 1,
    kLastUpdatedDateFieldNumber = 2,
  };
  // repeated .turms.client.model.proto.Group groups = 1;
  int groups_size() const;
  private:
  int _internal_groups_size() const;

  public:
  void clear_groups() ;
  ::turms::client::model::proto::Group* mutable_groups(int index);
  ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Group >*
      mutable_groups();
  private:
  const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Group>& _internal_groups() const;
  ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Group>* _internal_mutable_groups();
  public:
  const ::turms::client::model::proto::Group& groups(int index) const;
  ::turms::client::model::proto::Group* add_groups();
  const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Group >&
      groups() const;
  // optional int64 last_updated_date = 2;
  bool has_last_updated_date() const;
  void clear_last_updated_date() ;
  ::int64_t last_updated_date() const;
  void set_last_updated_date(::int64_t value);

  private:
  ::int64_t _internal_last_updated_date() const;
  void _internal_set_last_updated_date(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.GroupsWithVersion)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<1, 2, 1, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Group > groups_;
    ::int64_t last_updated_date_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fgroup_2fgroups_5fwith_5fversion_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GroupsWithVersion

// repeated .turms.client.model.proto.Group groups = 1;
inline int GroupsWithVersion::_internal_groups_size() const {
  return _internal_groups().size();
}
inline int GroupsWithVersion::groups_size() const {
  return _internal_groups_size();
}
inline ::turms::client::model::proto::Group* GroupsWithVersion::mutable_groups(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.GroupsWithVersion.groups)
  return _internal_mutable_groups()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Group >*
GroupsWithVersion::mutable_groups() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.GroupsWithVersion.groups)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_groups();
}
inline const ::turms::client::model::proto::Group& GroupsWithVersion::groups(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupsWithVersion.groups)
    return _internal_groups().Get(index);
}
inline ::turms::client::model::proto::Group* GroupsWithVersion::add_groups() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::turms::client::model::proto::Group* _add = _internal_mutable_groups()->Add();
  // @@protoc_insertion_point(field_add:turms.client.model.proto.GroupsWithVersion.groups)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Group >&
GroupsWithVersion::groups() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.GroupsWithVersion.groups)
  return _internal_groups();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Group>&
GroupsWithVersion::_internal_groups() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.groups_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Group>*
GroupsWithVersion::_internal_mutable_groups() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.groups_;
}

// optional int64 last_updated_date = 2;
inline bool GroupsWithVersion::has_last_updated_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GroupsWithVersion::clear_last_updated_date() {
  _impl_.last_updated_date_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t GroupsWithVersion::last_updated_date() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.GroupsWithVersion.last_updated_date)
  return _internal_last_updated_date();
}
inline void GroupsWithVersion::set_last_updated_date(::int64_t value) {
  _internal_set_last_updated_date(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.GroupsWithVersion.last_updated_date)
}
inline ::int64_t GroupsWithVersion::_internal_last_updated_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.last_updated_date_;
}
inline void GroupsWithVersion::_internal_set_last_updated_date(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.last_updated_date_ = value;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fgroup_2fgroups_5fwith_5fversion_2eproto_2epb_2eh

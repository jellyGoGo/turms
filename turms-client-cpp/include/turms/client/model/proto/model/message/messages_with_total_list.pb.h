// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/message/messages_with_total_list.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/message/messages_with_total.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class MessagesWithTotalList;
struct MessagesWithTotalListDefaultTypeInternal;
extern MessagesWithTotalListDefaultTypeInternal _MessagesWithTotalList_default_instance_;
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

class MessagesWithTotalList final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.MessagesWithTotalList) */ {
 public:
  inline MessagesWithTotalList() : MessagesWithTotalList(nullptr) {}
  ~MessagesWithTotalList() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MessagesWithTotalList(::google::protobuf::internal::ConstantInitialized);

  MessagesWithTotalList(const MessagesWithTotalList& from);
  MessagesWithTotalList(MessagesWithTotalList&& from) noexcept
    : MessagesWithTotalList() {
    *this = ::std::move(from);
  }

  inline MessagesWithTotalList& operator=(const MessagesWithTotalList& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessagesWithTotalList& operator=(MessagesWithTotalList&& from) noexcept {
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

  static const MessagesWithTotalList& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessagesWithTotalList* internal_default_instance() {
    return reinterpret_cast<const MessagesWithTotalList*>(
               &_MessagesWithTotalList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessagesWithTotalList& a, MessagesWithTotalList& b) {
    a.Swap(&b);
  }
  inline void Swap(MessagesWithTotalList* other) {
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
  void UnsafeArenaSwap(MessagesWithTotalList* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MessagesWithTotalList* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MessagesWithTotalList>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const MessagesWithTotalList& from);
  void MergeFrom(const MessagesWithTotalList& from);
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
  void InternalSwap(MessagesWithTotalList* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.MessagesWithTotalList";
  }
  protected:
  explicit MessagesWithTotalList(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessagesWithTotalListFieldNumber = 1,
  };
  // repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
  int messages_with_total_list_size() const;
  private:
  int _internal_messages_with_total_list_size() const;

  public:
  void clear_messages_with_total_list() ;
  ::turms::client::model::proto::MessagesWithTotal* mutable_messages_with_total_list(int index);
  ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::MessagesWithTotal >*
      mutable_messages_with_total_list();
  private:
  const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::MessagesWithTotal>& _internal_messages_with_total_list() const;
  ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::MessagesWithTotal>* _internal_mutable_messages_with_total_list();
  public:
  const ::turms::client::model::proto::MessagesWithTotal& messages_with_total_list(int index) const;
  ::turms::client::model::proto::MessagesWithTotal* add_messages_with_total_list();
  const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::MessagesWithTotal >&
      messages_with_total_list() const;
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.MessagesWithTotalList)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 1, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::MessagesWithTotal > messages_with_total_list_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MessagesWithTotalList

// repeated .turms.client.model.proto.MessagesWithTotal messages_with_total_list = 1;
inline int MessagesWithTotalList::_internal_messages_with_total_list_size() const {
  return _internal_messages_with_total_list().size();
}
inline int MessagesWithTotalList::messages_with_total_list_size() const {
  return _internal_messages_with_total_list_size();
}
inline ::turms::client::model::proto::MessagesWithTotal* MessagesWithTotalList::mutable_messages_with_total_list(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.MessagesWithTotalList.messages_with_total_list)
  return _internal_mutable_messages_with_total_list()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::MessagesWithTotal >*
MessagesWithTotalList::mutable_messages_with_total_list() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.MessagesWithTotalList.messages_with_total_list)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_messages_with_total_list();
}
inline const ::turms::client::model::proto::MessagesWithTotal& MessagesWithTotalList::messages_with_total_list(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.MessagesWithTotalList.messages_with_total_list)
    return _internal_messages_with_total_list().Get(index);
}
inline ::turms::client::model::proto::MessagesWithTotal* MessagesWithTotalList::add_messages_with_total_list() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::turms::client::model::proto::MessagesWithTotal* _add = _internal_mutable_messages_with_total_list()->Add();
  // @@protoc_insertion_point(field_add:turms.client.model.proto.MessagesWithTotalList.messages_with_total_list)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::MessagesWithTotal >&
MessagesWithTotalList::messages_with_total_list() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.MessagesWithTotalList.messages_with_total_list)
  return _internal_messages_with_total_list();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::MessagesWithTotal>&
MessagesWithTotalList::_internal_messages_with_total_list() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.messages_with_total_list_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::MessagesWithTotal>*
MessagesWithTotalList::_internal_mutable_messages_with_total_list() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.messages_with_total_list_;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_5fwith_5ftotal_5flist_2eproto_2epb_2eh

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/message/messages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_2eproto_2epb_2eh

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
#include "turms/client/model/proto/model/message/message.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_model_2fmessage_2fmessages_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2fmessage_2fmessages_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class Messages;
struct MessagesDefaultTypeInternal;
extern MessagesDefaultTypeInternal _Messages_default_instance_;
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

class Messages final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.Messages) */ {
 public:
  inline Messages() : Messages(nullptr) {}
  ~Messages() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Messages(::google::protobuf::internal::ConstantInitialized);

  Messages(const Messages& from);
  Messages(Messages&& from) noexcept
    : Messages() {
    *this = ::std::move(from);
  }

  inline Messages& operator=(const Messages& from) {
    CopyFrom(from);
    return *this;
  }
  inline Messages& operator=(Messages&& from) noexcept {
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

  static const Messages& default_instance() {
    return *internal_default_instance();
  }
  static inline const Messages* internal_default_instance() {
    return reinterpret_cast<const Messages*>(
               &_Messages_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Messages& a, Messages& b) {
    a.Swap(&b);
  }
  inline void Swap(Messages* other) {
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
  void UnsafeArenaSwap(Messages* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Messages* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Messages>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const Messages& from);
  void MergeFrom(const Messages& from);
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
  void InternalSwap(Messages* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.Messages";
  }
  protected:
  explicit Messages(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessagesFieldNumber = 1,
  };
  // repeated .turms.client.model.proto.Message messages = 1;
  int messages_size() const;
  private:
  int _internal_messages_size() const;

  public:
  void clear_messages() ;
  ::turms::client::model::proto::Message* mutable_messages(int index);
  ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Message >*
      mutable_messages();
  private:
  const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>& _internal_messages() const;
  ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>* _internal_mutable_messages();
  public:
  const ::turms::client::model::proto::Message& messages(int index) const;
  ::turms::client::model::proto::Message* add_messages();
  const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Message >&
      messages() const;
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.Messages)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 1, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Message > messages_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_model_2fmessage_2fmessages_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Messages

// repeated .turms.client.model.proto.Message messages = 1;
inline int Messages::_internal_messages_size() const {
  return _internal_messages().size();
}
inline int Messages::messages_size() const {
  return _internal_messages_size();
}
inline ::turms::client::model::proto::Message* Messages::mutable_messages(int index) {
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.Messages.messages)
  return _internal_mutable_messages()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Message >*
Messages::mutable_messages() {
  // @@protoc_insertion_point(field_mutable_list:turms.client.model.proto.Messages.messages)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_messages();
}
inline const ::turms::client::model::proto::Message& Messages::messages(int index) const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.Messages.messages)
    return _internal_messages().Get(index);
}
inline ::turms::client::model::proto::Message* Messages::add_messages() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::turms::client::model::proto::Message* _add = _internal_mutable_messages()->Add();
  // @@protoc_insertion_point(field_add:turms.client.model.proto.Messages.messages)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField< ::turms::client::model::proto::Message >&
Messages::messages() const {
  // @@protoc_insertion_point(field_list:turms.client.model.proto.Messages.messages)
  return _internal_messages();
}
inline const ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>&
Messages::_internal_messages() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.messages_;
}
inline ::google::protobuf::RepeatedPtrField<::turms::client::model::proto::Message>*
Messages::_internal_mutable_messages() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.messages_;
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

#endif  // GOOGLE_PROTOBUF_INCLUDED_model_2fmessage_2fmessages_2eproto_2epb_2eh

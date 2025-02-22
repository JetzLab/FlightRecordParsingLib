// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Camera/FRCameraStateProto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Camera_2fFRCameraStateProto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Camera_2fFRCameraStateProto_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Camera_2fFRCameraStateProto_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Camera_2fFRCameraStateProto_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Camera_2fFRCameraStateProto_2eproto;
namespace DJIFRProto {
namespace Standard {
class CameraState;
struct CameraStateDefaultTypeInternal;
extern CameraStateDefaultTypeInternal _CameraState_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
PROTOBUF_NAMESPACE_OPEN
template<> ::DJIFRProto::Standard::CameraState* Arena::CreateMaybeMessage<::DJIFRProto::Standard::CameraState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace DJIFRProto {
namespace Standard {

enum CameraState_CameraMode : int {
  CameraState_CameraMode_ShootPhoto = 0,
  CameraState_CameraMode_RecordVideo = 1,
  CameraState_CameraMode_Playback = 2,
  CameraState_CameraMode_MediaDownload = 3,
  CameraState_CameraMode_Broadcast = 4,
  CameraState_CameraMode_Unknown = 255,
  CameraState_CameraMode_CameraState_CameraMode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CameraState_CameraMode_CameraState_CameraMode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CameraState_CameraMode_IsValid(int value);
constexpr CameraState_CameraMode CameraState_CameraMode_CameraMode_MIN = CameraState_CameraMode_ShootPhoto;
constexpr CameraState_CameraMode CameraState_CameraMode_CameraMode_MAX = CameraState_CameraMode_Unknown;
constexpr int CameraState_CameraMode_CameraMode_ARRAYSIZE = CameraState_CameraMode_CameraMode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CameraState_CameraMode_descriptor();
template<typename T>
inline const std::string& CameraState_CameraMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CameraState_CameraMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CameraState_CameraMode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CameraState_CameraMode_descriptor(), enum_t_value);
}
inline bool CameraState_CameraMode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CameraState_CameraMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CameraState_CameraMode>(
    CameraState_CameraMode_descriptor(), name, value);
}
// ===================================================================

class CameraState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DJIFRProto.Standard.CameraState) */ {
 public:
  inline CameraState() : CameraState(nullptr) {}
  ~CameraState() override;
  explicit PROTOBUF_CONSTEXPR CameraState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CameraState(const CameraState& from);
  CameraState(CameraState&& from) noexcept
    : CameraState() {
    *this = ::std::move(from);
  }

  inline CameraState& operator=(const CameraState& from) {
    CopyFrom(from);
    return *this;
  }
  inline CameraState& operator=(CameraState&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CameraState& default_instance() {
    return *internal_default_instance();
  }
  static inline const CameraState* internal_default_instance() {
    return reinterpret_cast<const CameraState*>(
               &_CameraState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CameraState& a, CameraState& b) {
    a.Swap(&b);
  }
  inline void Swap(CameraState* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CameraState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CameraState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CameraState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CameraState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CameraState& from) {
    CameraState::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CameraState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DJIFRProto.Standard.CameraState";
  }
  protected:
  explicit CameraState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CameraState_CameraMode CameraMode;
  static constexpr CameraMode ShootPhoto =
    CameraState_CameraMode_ShootPhoto;
  static constexpr CameraMode RecordVideo =
    CameraState_CameraMode_RecordVideo;
  static constexpr CameraMode Playback =
    CameraState_CameraMode_Playback;
  static constexpr CameraMode MediaDownload =
    CameraState_CameraMode_MediaDownload;
  static constexpr CameraMode Broadcast =
    CameraState_CameraMode_Broadcast;
  static constexpr CameraMode Unknown =
    CameraState_CameraMode_Unknown;
  static inline bool CameraMode_IsValid(int value) {
    return CameraState_CameraMode_IsValid(value);
  }
  static constexpr CameraMode CameraMode_MIN =
    CameraState_CameraMode_CameraMode_MIN;
  static constexpr CameraMode CameraMode_MAX =
    CameraState_CameraMode_CameraMode_MAX;
  static constexpr int CameraMode_ARRAYSIZE =
    CameraState_CameraMode_CameraMode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CameraMode_descriptor() {
    return CameraState_CameraMode_descriptor();
  }
  template<typename T>
  static inline const std::string& CameraMode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CameraMode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CameraMode_Name.");
    return CameraState_CameraMode_Name(enum_t_value);
  }
  static inline bool CameraMode_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CameraMode* value) {
    return CameraState_CameraMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kIsRecordingFieldNumber = 1,
    kIsShootingSinglePhotoFieldNumber = 2,
    kIsInsertedFieldNumber = 3,
    kIsInitializingFieldNumber = 4,
    kHasErrorFieldNumber = 5,
    kIsVerifiedFieldNumber = 6,
    kIsFullFieldNumber = 7,
    kIsFormattedFieldNumber = 8,
    kIsFormattingFieldNumber = 9,
    kIsInvalidFormatFieldNumber = 10,
    kIsReadOnlyFieldNumber = 11,
    kTotalSpaceInMBFieldNumber = 12,
    kRemainingSpaceInMBFieldNumber = 13,
    kAvailableCaptureCountFieldNumber = 14,
    kAvailableRecordingTimeInSecondsFieldNumber = 15,
    kIndexFieldNumber = 16,
    kModeFieldNumber = 17,
  };
  // bool isRecording = 1;
  void clear_isrecording();
  bool isrecording() const;
  void set_isrecording(bool value);
  private:
  bool _internal_isrecording() const;
  void _internal_set_isrecording(bool value);
  public:

  // bool isShootingSinglePhoto = 2;
  void clear_isshootingsinglephoto();
  bool isshootingsinglephoto() const;
  void set_isshootingsinglephoto(bool value);
  private:
  bool _internal_isshootingsinglephoto() const;
  void _internal_set_isshootingsinglephoto(bool value);
  public:

  // bool isInserted = 3;
  void clear_isinserted();
  bool isinserted() const;
  void set_isinserted(bool value);
  private:
  bool _internal_isinserted() const;
  void _internal_set_isinserted(bool value);
  public:

  // bool isInitializing = 4;
  void clear_isinitializing();
  bool isinitializing() const;
  void set_isinitializing(bool value);
  private:
  bool _internal_isinitializing() const;
  void _internal_set_isinitializing(bool value);
  public:

  // bool hasError = 5;
  void clear_haserror();
  bool haserror() const;
  void set_haserror(bool value);
  private:
  bool _internal_haserror() const;
  void _internal_set_haserror(bool value);
  public:

  // bool isVerified = 6;
  void clear_isverified();
  bool isverified() const;
  void set_isverified(bool value);
  private:
  bool _internal_isverified() const;
  void _internal_set_isverified(bool value);
  public:

  // bool isFull = 7;
  void clear_isfull();
  bool isfull() const;
  void set_isfull(bool value);
  private:
  bool _internal_isfull() const;
  void _internal_set_isfull(bool value);
  public:

  // bool isFormatted = 8;
  void clear_isformatted();
  bool isformatted() const;
  void set_isformatted(bool value);
  private:
  bool _internal_isformatted() const;
  void _internal_set_isformatted(bool value);
  public:

  // bool isFormatting = 9;
  void clear_isformatting();
  bool isformatting() const;
  void set_isformatting(bool value);
  private:
  bool _internal_isformatting() const;
  void _internal_set_isformatting(bool value);
  public:

  // bool isInvalidFormat = 10;
  void clear_isinvalidformat();
  bool isinvalidformat() const;
  void set_isinvalidformat(bool value);
  private:
  bool _internal_isinvalidformat() const;
  void _internal_set_isinvalidformat(bool value);
  public:

  // bool isReadOnly = 11;
  void clear_isreadonly();
  bool isreadonly() const;
  void set_isreadonly(bool value);
  private:
  bool _internal_isreadonly() const;
  void _internal_set_isreadonly(bool value);
  public:

  // uint32 totalSpaceInMB = 12;
  void clear_totalspaceinmb();
  uint32_t totalspaceinmb() const;
  void set_totalspaceinmb(uint32_t value);
  private:
  uint32_t _internal_totalspaceinmb() const;
  void _internal_set_totalspaceinmb(uint32_t value);
  public:

  // uint32 remainingSpaceInMB = 13;
  void clear_remainingspaceinmb();
  uint32_t remainingspaceinmb() const;
  void set_remainingspaceinmb(uint32_t value);
  private:
  uint32_t _internal_remainingspaceinmb() const;
  void _internal_set_remainingspaceinmb(uint32_t value);
  public:

  // uint32 availableCaptureCount = 14;
  void clear_availablecapturecount();
  uint32_t availablecapturecount() const;
  void set_availablecapturecount(uint32_t value);
  private:
  uint32_t _internal_availablecapturecount() const;
  void _internal_set_availablecapturecount(uint32_t value);
  public:

  // uint32 availableRecordingTimeInSeconds = 15;
  void clear_availablerecordingtimeinseconds();
  uint32_t availablerecordingtimeinseconds() const;
  void set_availablerecordingtimeinseconds(uint32_t value);
  private:
  uint32_t _internal_availablerecordingtimeinseconds() const;
  void _internal_set_availablerecordingtimeinseconds(uint32_t value);
  public:

  // int32 index = 16;
  void clear_index();
  int32_t index() const;
  void set_index(int32_t value);
  private:
  int32_t _internal_index() const;
  void _internal_set_index(int32_t value);
  public:

  // .DJIFRProto.Standard.CameraState.CameraMode mode = 17;
  void clear_mode();
  ::DJIFRProto::Standard::CameraState_CameraMode mode() const;
  void set_mode(::DJIFRProto::Standard::CameraState_CameraMode value);
  private:
  ::DJIFRProto::Standard::CameraState_CameraMode _internal_mode() const;
  void _internal_set_mode(::DJIFRProto::Standard::CameraState_CameraMode value);
  public:

  // @@protoc_insertion_point(class_scope:DJIFRProto.Standard.CameraState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool isrecording_;
    bool isshootingsinglephoto_;
    bool isinserted_;
    bool isinitializing_;
    bool haserror_;
    bool isverified_;
    bool isfull_;
    bool isformatted_;
    bool isformatting_;
    bool isinvalidformat_;
    bool isreadonly_;
    uint32_t totalspaceinmb_;
    uint32_t remainingspaceinmb_;
    uint32_t availablecapturecount_;
    uint32_t availablerecordingtimeinseconds_;
    int32_t index_;
    int mode_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Camera_2fFRCameraStateProto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CameraState

// bool isRecording = 1;
inline void CameraState::clear_isrecording() {
  _impl_.isrecording_ = false;
}
inline bool CameraState::_internal_isrecording() const {
  return _impl_.isrecording_;
}
inline bool CameraState::isrecording() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isRecording)
  return _internal_isrecording();
}
inline void CameraState::_internal_set_isrecording(bool value) {
  
  _impl_.isrecording_ = value;
}
inline void CameraState::set_isrecording(bool value) {
  _internal_set_isrecording(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isRecording)
}

// bool isShootingSinglePhoto = 2;
inline void CameraState::clear_isshootingsinglephoto() {
  _impl_.isshootingsinglephoto_ = false;
}
inline bool CameraState::_internal_isshootingsinglephoto() const {
  return _impl_.isshootingsinglephoto_;
}
inline bool CameraState::isshootingsinglephoto() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isShootingSinglePhoto)
  return _internal_isshootingsinglephoto();
}
inline void CameraState::_internal_set_isshootingsinglephoto(bool value) {
  
  _impl_.isshootingsinglephoto_ = value;
}
inline void CameraState::set_isshootingsinglephoto(bool value) {
  _internal_set_isshootingsinglephoto(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isShootingSinglePhoto)
}

// bool isInserted = 3;
inline void CameraState::clear_isinserted() {
  _impl_.isinserted_ = false;
}
inline bool CameraState::_internal_isinserted() const {
  return _impl_.isinserted_;
}
inline bool CameraState::isinserted() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isInserted)
  return _internal_isinserted();
}
inline void CameraState::_internal_set_isinserted(bool value) {
  
  _impl_.isinserted_ = value;
}
inline void CameraState::set_isinserted(bool value) {
  _internal_set_isinserted(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isInserted)
}

// bool isInitializing = 4;
inline void CameraState::clear_isinitializing() {
  _impl_.isinitializing_ = false;
}
inline bool CameraState::_internal_isinitializing() const {
  return _impl_.isinitializing_;
}
inline bool CameraState::isinitializing() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isInitializing)
  return _internal_isinitializing();
}
inline void CameraState::_internal_set_isinitializing(bool value) {
  
  _impl_.isinitializing_ = value;
}
inline void CameraState::set_isinitializing(bool value) {
  _internal_set_isinitializing(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isInitializing)
}

// bool hasError = 5;
inline void CameraState::clear_haserror() {
  _impl_.haserror_ = false;
}
inline bool CameraState::_internal_haserror() const {
  return _impl_.haserror_;
}
inline bool CameraState::haserror() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.hasError)
  return _internal_haserror();
}
inline void CameraState::_internal_set_haserror(bool value) {
  
  _impl_.haserror_ = value;
}
inline void CameraState::set_haserror(bool value) {
  _internal_set_haserror(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.hasError)
}

// bool isVerified = 6;
inline void CameraState::clear_isverified() {
  _impl_.isverified_ = false;
}
inline bool CameraState::_internal_isverified() const {
  return _impl_.isverified_;
}
inline bool CameraState::isverified() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isVerified)
  return _internal_isverified();
}
inline void CameraState::_internal_set_isverified(bool value) {
  
  _impl_.isverified_ = value;
}
inline void CameraState::set_isverified(bool value) {
  _internal_set_isverified(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isVerified)
}

// bool isFull = 7;
inline void CameraState::clear_isfull() {
  _impl_.isfull_ = false;
}
inline bool CameraState::_internal_isfull() const {
  return _impl_.isfull_;
}
inline bool CameraState::isfull() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isFull)
  return _internal_isfull();
}
inline void CameraState::_internal_set_isfull(bool value) {
  
  _impl_.isfull_ = value;
}
inline void CameraState::set_isfull(bool value) {
  _internal_set_isfull(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isFull)
}

// bool isFormatted = 8;
inline void CameraState::clear_isformatted() {
  _impl_.isformatted_ = false;
}
inline bool CameraState::_internal_isformatted() const {
  return _impl_.isformatted_;
}
inline bool CameraState::isformatted() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isFormatted)
  return _internal_isformatted();
}
inline void CameraState::_internal_set_isformatted(bool value) {
  
  _impl_.isformatted_ = value;
}
inline void CameraState::set_isformatted(bool value) {
  _internal_set_isformatted(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isFormatted)
}

// bool isFormatting = 9;
inline void CameraState::clear_isformatting() {
  _impl_.isformatting_ = false;
}
inline bool CameraState::_internal_isformatting() const {
  return _impl_.isformatting_;
}
inline bool CameraState::isformatting() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isFormatting)
  return _internal_isformatting();
}
inline void CameraState::_internal_set_isformatting(bool value) {
  
  _impl_.isformatting_ = value;
}
inline void CameraState::set_isformatting(bool value) {
  _internal_set_isformatting(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isFormatting)
}

// bool isInvalidFormat = 10;
inline void CameraState::clear_isinvalidformat() {
  _impl_.isinvalidformat_ = false;
}
inline bool CameraState::_internal_isinvalidformat() const {
  return _impl_.isinvalidformat_;
}
inline bool CameraState::isinvalidformat() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isInvalidFormat)
  return _internal_isinvalidformat();
}
inline void CameraState::_internal_set_isinvalidformat(bool value) {
  
  _impl_.isinvalidformat_ = value;
}
inline void CameraState::set_isinvalidformat(bool value) {
  _internal_set_isinvalidformat(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isInvalidFormat)
}

// bool isReadOnly = 11;
inline void CameraState::clear_isreadonly() {
  _impl_.isreadonly_ = false;
}
inline bool CameraState::_internal_isreadonly() const {
  return _impl_.isreadonly_;
}
inline bool CameraState::isreadonly() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.isReadOnly)
  return _internal_isreadonly();
}
inline void CameraState::_internal_set_isreadonly(bool value) {
  
  _impl_.isreadonly_ = value;
}
inline void CameraState::set_isreadonly(bool value) {
  _internal_set_isreadonly(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.isReadOnly)
}

// uint32 totalSpaceInMB = 12;
inline void CameraState::clear_totalspaceinmb() {
  _impl_.totalspaceinmb_ = 0u;
}
inline uint32_t CameraState::_internal_totalspaceinmb() const {
  return _impl_.totalspaceinmb_;
}
inline uint32_t CameraState::totalspaceinmb() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.totalSpaceInMB)
  return _internal_totalspaceinmb();
}
inline void CameraState::_internal_set_totalspaceinmb(uint32_t value) {
  
  _impl_.totalspaceinmb_ = value;
}
inline void CameraState::set_totalspaceinmb(uint32_t value) {
  _internal_set_totalspaceinmb(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.totalSpaceInMB)
}

// uint32 remainingSpaceInMB = 13;
inline void CameraState::clear_remainingspaceinmb() {
  _impl_.remainingspaceinmb_ = 0u;
}
inline uint32_t CameraState::_internal_remainingspaceinmb() const {
  return _impl_.remainingspaceinmb_;
}
inline uint32_t CameraState::remainingspaceinmb() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.remainingSpaceInMB)
  return _internal_remainingspaceinmb();
}
inline void CameraState::_internal_set_remainingspaceinmb(uint32_t value) {
  
  _impl_.remainingspaceinmb_ = value;
}
inline void CameraState::set_remainingspaceinmb(uint32_t value) {
  _internal_set_remainingspaceinmb(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.remainingSpaceInMB)
}

// uint32 availableCaptureCount = 14;
inline void CameraState::clear_availablecapturecount() {
  _impl_.availablecapturecount_ = 0u;
}
inline uint32_t CameraState::_internal_availablecapturecount() const {
  return _impl_.availablecapturecount_;
}
inline uint32_t CameraState::availablecapturecount() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.availableCaptureCount)
  return _internal_availablecapturecount();
}
inline void CameraState::_internal_set_availablecapturecount(uint32_t value) {
  
  _impl_.availablecapturecount_ = value;
}
inline void CameraState::set_availablecapturecount(uint32_t value) {
  _internal_set_availablecapturecount(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.availableCaptureCount)
}

// uint32 availableRecordingTimeInSeconds = 15;
inline void CameraState::clear_availablerecordingtimeinseconds() {
  _impl_.availablerecordingtimeinseconds_ = 0u;
}
inline uint32_t CameraState::_internal_availablerecordingtimeinseconds() const {
  return _impl_.availablerecordingtimeinseconds_;
}
inline uint32_t CameraState::availablerecordingtimeinseconds() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.availableRecordingTimeInSeconds)
  return _internal_availablerecordingtimeinseconds();
}
inline void CameraState::_internal_set_availablerecordingtimeinseconds(uint32_t value) {
  
  _impl_.availablerecordingtimeinseconds_ = value;
}
inline void CameraState::set_availablerecordingtimeinseconds(uint32_t value) {
  _internal_set_availablerecordingtimeinseconds(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.availableRecordingTimeInSeconds)
}

// int32 index = 16;
inline void CameraState::clear_index() {
  _impl_.index_ = 0;
}
inline int32_t CameraState::_internal_index() const {
  return _impl_.index_;
}
inline int32_t CameraState::index() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.index)
  return _internal_index();
}
inline void CameraState::_internal_set_index(int32_t value) {
  
  _impl_.index_ = value;
}
inline void CameraState::set_index(int32_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.index)
}

// .DJIFRProto.Standard.CameraState.CameraMode mode = 17;
inline void CameraState::clear_mode() {
  _impl_.mode_ = 0;
}
inline ::DJIFRProto::Standard::CameraState_CameraMode CameraState::_internal_mode() const {
  return static_cast< ::DJIFRProto::Standard::CameraState_CameraMode >(_impl_.mode_);
}
inline ::DJIFRProto::Standard::CameraState_CameraMode CameraState::mode() const {
  // @@protoc_insertion_point(field_get:DJIFRProto.Standard.CameraState.mode)
  return _internal_mode();
}
inline void CameraState::_internal_set_mode(::DJIFRProto::Standard::CameraState_CameraMode value) {
  
  _impl_.mode_ = value;
}
inline void CameraState::set_mode(::DJIFRProto::Standard::CameraState_CameraMode value) {
  _internal_set_mode(value);
  // @@protoc_insertion_point(field_set:DJIFRProto.Standard.CameraState.mode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Standard
}  // namespace DJIFRProto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::DJIFRProto::Standard::CameraState_CameraMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DJIFRProto::Standard::CameraState_CameraMode>() {
  return ::DJIFRProto::Standard::CameraState_CameraMode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Camera_2fFRCameraStateProto_2eproto

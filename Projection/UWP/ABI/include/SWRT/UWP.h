#pragma once

#include "SWRT/WindowsRuntime.h"

typedef int32_t SWRT_WindowsFoundation_AsyncStatus;
typedef int32_t SWRT_WindowsFoundation_PropertyType;

// Windows.Foundation.DateTime
typedef struct SWRT_WindowsFoundation_DateTime
{
    int64_t UniversalTime;
} SWRT_WindowsFoundation_DateTime;

// Windows.Foundation.EventRegistrationToken
typedef struct SWRT_WindowsFoundation_EventRegistrationToken
{
    int64_t Value;
} SWRT_WindowsFoundation_EventRegistrationToken;

// Windows.Foundation.HResult
typedef struct SWRT_WindowsFoundation_HResult
{
    int32_t Value;
} SWRT_WindowsFoundation_HResult;

// Windows.Foundation.Point
typedef struct SWRT_WindowsFoundation_Point
{
    float X;
    float Y;
} SWRT_WindowsFoundation_Point;

// Windows.Foundation.Rect
typedef struct SWRT_WindowsFoundation_Rect
{
    float X;
    float Y;
    float Width;
    float Height;
} SWRT_WindowsFoundation_Rect;

// Windows.Foundation.Size
typedef struct SWRT_WindowsFoundation_Size
{
    float Width;
    float Height;
} SWRT_WindowsFoundation_Size;

// Windows.Foundation.TimeSpan
typedef struct SWRT_WindowsFoundation_TimeSpan
{
    int64_t Duration;
} SWRT_WindowsFoundation_TimeSpan;

typedef struct SWRT_WindowsFoundation_IAsyncInfo SWRT_WindowsFoundation_IAsyncInfo;
typedef struct SWRT_WindowsFoundation_IClosable SWRT_WindowsFoundation_IClosable;
typedef struct SWRT_WindowsFoundation_IMemoryBuffer SWRT_WindowsFoundation_IMemoryBuffer;
typedef struct SWRT_WindowsFoundation_IMemoryBufferFactory SWRT_WindowsFoundation_IMemoryBufferFactory;
typedef struct SWRT_WindowsFoundation_IMemoryBufferReference SWRT_WindowsFoundation_IMemoryBufferReference;
typedef struct SWRT_WindowsFoundation_IPropertyValue SWRT_WindowsFoundation_IPropertyValue;
typedef struct SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable;
typedef struct SWRT_WindowsStorageStreams_IBuffer SWRT_WindowsStorageStreams_IBuffer;
typedef struct SWRT_WindowsStorageStreams_IBufferFactory SWRT_WindowsStorageStreams_IBufferFactory;
typedef struct SWRT_WindowsStorageStreams_IBufferStatics SWRT_WindowsStorageStreams_IBufferStatics;

// Windows.Foundation.IAsyncInfo
struct SWRT_WindowsFoundation_IAsyncInfo
{
    struct SWRT_WindowsFoundation_IAsyncInfo_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IAsyncInfo_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IAsyncInfo* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IAsyncInfo* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IAsyncInfo* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IAsyncInfo* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IAsyncInfo* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IAsyncInfo* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Id)(SWRT_WindowsFoundation_IAsyncInfo* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *get_Status)(SWRT_WindowsFoundation_IAsyncInfo* _this, SWRT_WindowsFoundation_AsyncStatus* _return);
    SWRT_HResult (__stdcall *get_ErrorCode)(SWRT_WindowsFoundation_IAsyncInfo* _this, SWRT_HResult* _return);
    SWRT_HResult (__stdcall *Cancel)(SWRT_WindowsFoundation_IAsyncInfo* _this);
    SWRT_HResult (__stdcall *Close)(SWRT_WindowsFoundation_IAsyncInfo* _this);
};

// Windows.Foundation.IClosable
struct SWRT_WindowsFoundation_IClosable
{
    struct SWRT_WindowsFoundation_IClosable_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IClosable_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IClosable* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IClosable* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IClosable* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IClosable* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IClosable* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IClosable* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Close)(SWRT_WindowsFoundation_IClosable* _this);
};

// Windows.Foundation.IMemoryBuffer
struct SWRT_WindowsFoundation_IMemoryBuffer
{
    struct SWRT_WindowsFoundation_IMemoryBuffer_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IMemoryBuffer_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IMemoryBuffer* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IMemoryBuffer* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IMemoryBuffer* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IMemoryBuffer* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IMemoryBuffer* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IMemoryBuffer* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateReference)(SWRT_WindowsFoundation_IMemoryBuffer* _this, SWRT_WindowsFoundation_IMemoryBufferReference** _return);
};

// Windows.Foundation.IMemoryBufferFactory
struct SWRT_WindowsFoundation_IMemoryBufferFactory
{
    struct SWRT_WindowsFoundation_IMemoryBufferFactory_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IMemoryBufferFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Create)(SWRT_WindowsFoundation_IMemoryBufferFactory* _this, uint32_t capacity, SWRT_WindowsFoundation_IMemoryBuffer** _return);
};

// Windows.Foundation.IMemoryBufferReference
struct SWRT_WindowsFoundation_IMemoryBufferReference
{
    struct SWRT_WindowsFoundation_IMemoryBufferReference_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IMemoryBufferReference_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IMemoryBufferReference* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IMemoryBufferReference* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Capacity)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *add_Closed)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable* handler, SWRT_EventRegistrationToken* _return);
    SWRT_HResult (__stdcall *remove_Closed)(SWRT_WindowsFoundation_IMemoryBufferReference* _this, SWRT_EventRegistrationToken cookie);
};

// Windows.Foundation.IPropertyValue
struct SWRT_WindowsFoundation_IPropertyValue
{
    struct SWRT_WindowsFoundation_IPropertyValue_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IPropertyValue_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IPropertyValue* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IPropertyValue* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Type)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_PropertyType* _return);
    SWRT_HResult (__stdcall *get_IsNumericScalar)(SWRT_WindowsFoundation_IPropertyValue* _this, bool* _return);
    SWRT_HResult (__stdcall *GetUInt8)(SWRT_WindowsFoundation_IPropertyValue* _this, uint8_t* _return);
    SWRT_HResult (__stdcall *GetInt16)(SWRT_WindowsFoundation_IPropertyValue* _this, int16_t* _return);
    SWRT_HResult (__stdcall *GetUInt16)(SWRT_WindowsFoundation_IPropertyValue* _this, uint16_t* _return);
    SWRT_HResult (__stdcall *GetInt32)(SWRT_WindowsFoundation_IPropertyValue* _this, int32_t* _return);
    SWRT_HResult (__stdcall *GetUInt32)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *GetInt64)(SWRT_WindowsFoundation_IPropertyValue* _this, int64_t* _return);
    SWRT_HResult (__stdcall *GetUInt64)(SWRT_WindowsFoundation_IPropertyValue* _this, uint64_t* _return);
    SWRT_HResult (__stdcall *GetSingle)(SWRT_WindowsFoundation_IPropertyValue* _this, float* _return);
    SWRT_HResult (__stdcall *GetDouble)(SWRT_WindowsFoundation_IPropertyValue* _this, double* _return);
    SWRT_HResult (__stdcall *GetChar16)(SWRT_WindowsFoundation_IPropertyValue* _this, char16_t* _return);
    SWRT_HResult (__stdcall *GetBoolean)(SWRT_WindowsFoundation_IPropertyValue* _this, bool* _return);
    SWRT_HResult (__stdcall *GetString)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_HString* _return);
    SWRT_HResult (__stdcall *GetGuid)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_Guid* _return);
    SWRT_HResult (__stdcall *GetDateTime)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_DateTime* _return);
    SWRT_HResult (__stdcall *GetTimeSpan)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_TimeSpan* _return);
    SWRT_HResult (__stdcall *GetPoint)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_Point* _return);
    SWRT_HResult (__stdcall *GetSize)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_Size* _return);
    SWRT_HResult (__stdcall *GetRect)(SWRT_WindowsFoundation_IPropertyValue* _this, SWRT_WindowsFoundation_Rect* _return);
    SWRT_HResult (__stdcall *GetUInt8Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, uint8_t** value);
    SWRT_HResult (__stdcall *GetInt16Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, int16_t** value);
    SWRT_HResult (__stdcall *GetUInt16Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, uint16_t** value);
    SWRT_HResult (__stdcall *GetInt32Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, int32_t** value);
    SWRT_HResult (__stdcall *GetUInt32Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, uint32_t** value);
    SWRT_HResult (__stdcall *GetInt64Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, int64_t** value);
    SWRT_HResult (__stdcall *GetUInt64Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, uint64_t** value);
    SWRT_HResult (__stdcall *GetSingleArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, float** value);
    SWRT_HResult (__stdcall *GetDoubleArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, double** value);
    SWRT_HResult (__stdcall *GetChar16Array)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, char16_t** value);
    SWRT_HResult (__stdcall *GetBooleanArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, bool** value);
    SWRT_HResult (__stdcall *GetStringArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_HString** value);
    SWRT_HResult (__stdcall *GetInspectableArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_IInspectable*** value);
    SWRT_HResult (__stdcall *GetGuidArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_Guid** value);
    SWRT_HResult (__stdcall *GetDateTimeArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_WindowsFoundation_DateTime** value);
    SWRT_HResult (__stdcall *GetTimeSpanArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_WindowsFoundation_TimeSpan** value);
    SWRT_HResult (__stdcall *GetPointArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_WindowsFoundation_Point** value);
    SWRT_HResult (__stdcall *GetSizeArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_WindowsFoundation_Size** value);
    SWRT_HResult (__stdcall *GetRectArray)(SWRT_WindowsFoundation_IPropertyValue* _this, uint32_t* valueLength, SWRT_WindowsFoundation_Rect** value);
};

// Windows.Foundation.TypedEventHandler`2<Windows.Foundation.IMemoryBufferReference, Object>
struct SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable
{
    struct SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable* _this);
    SWRT_HResult (__stdcall *Invoke)(SWRT_WindowsFoundation_TypedEventHandler_WindowsFoundation_IMemoryBufferReference_IInspectable* _this, SWRT_WindowsFoundation_IMemoryBufferReference* sender, SWRT_IInspectable* args);
};

// Windows.Storage.Streams.IBuffer
struct SWRT_WindowsStorageStreams_IBuffer
{
    struct SWRT_WindowsStorageStreams_IBuffer_VirtualTable* VirtualTable;
};

struct SWRT_WindowsStorageStreams_IBuffer_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsStorageStreams_IBuffer* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsStorageStreams_IBuffer* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsStorageStreams_IBuffer* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsStorageStreams_IBuffer* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsStorageStreams_IBuffer* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsStorageStreams_IBuffer* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Capacity)(SWRT_WindowsStorageStreams_IBuffer* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *get_Length)(SWRT_WindowsStorageStreams_IBuffer* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *put_Length)(SWRT_WindowsStorageStreams_IBuffer* _this, uint32_t value);
};

// Windows.Storage.Streams.IBufferFactory
struct SWRT_WindowsStorageStreams_IBufferFactory
{
    struct SWRT_WindowsStorageStreams_IBufferFactory_VirtualTable* VirtualTable;
};

struct SWRT_WindowsStorageStreams_IBufferFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsStorageStreams_IBufferFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsStorageStreams_IBufferFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsStorageStreams_IBufferFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsStorageStreams_IBufferFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsStorageStreams_IBufferFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsStorageStreams_IBufferFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Create)(SWRT_WindowsStorageStreams_IBufferFactory* _this, uint32_t capacity, SWRT_WindowsStorageStreams_IBuffer** _return);
};

// Windows.Storage.Streams.IBufferStatics
struct SWRT_WindowsStorageStreams_IBufferStatics
{
    struct SWRT_WindowsStorageStreams_IBufferStatics_VirtualTable* VirtualTable;
};

struct SWRT_WindowsStorageStreams_IBufferStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsStorageStreams_IBufferStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsStorageStreams_IBufferStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsStorageStreams_IBufferStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsStorageStreams_IBufferStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsStorageStreams_IBufferStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsStorageStreams_IBufferStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateCopyFromMemoryBuffer)(SWRT_WindowsStorageStreams_IBufferStatics* _this, SWRT_WindowsFoundation_IMemoryBuffer* input, SWRT_WindowsStorageStreams_IBuffer** _return);
    SWRT_HResult (__stdcall *CreateMemoryBufferOverIBuffer)(SWRT_WindowsStorageStreams_IBufferStatics* _this, SWRT_WindowsStorageStreams_IBuffer* input, SWRT_WindowsFoundation_IMemoryBuffer** _return);
};
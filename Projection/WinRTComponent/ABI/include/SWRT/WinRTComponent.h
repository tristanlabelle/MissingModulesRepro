#pragma once

#include "SWRT/WindowsRuntime.h"
#include "SWRT/UWP.h"

typedef int32_t SWRT_WinRTComponent_Enum;
typedef int32_t SWRT_WinRTComponent_Flags;
typedef int32_t SWRT_WinRTComponent_MinimalEnum;
typedef int32_t SWRT_WinRTComponent_SwiftEnum;

// WinRTComponent.LeafStruct
typedef struct SWRT_WinRTComponent_LeafStruct
{
    int32_t Int32;
    SWRT_HString String;
    SWRT_WindowsFoundation_IReference* Reference;
} SWRT_WinRTComponent_LeafStruct;

// WinRTComponent.MinimalStruct
typedef struct SWRT_WinRTComponent_MinimalStruct
{
    int32_t Field;
} SWRT_WinRTComponent_MinimalStruct;

// WinRTComponent.Struct
typedef struct SWRT_WinRTComponent_Struct
{
    int32_t Int32;
    SWRT_HString String;
    SWRT_WindowsFoundation_IReference* Reference;
    SWRT_WinRTComponent_LeafStruct Nested;
} SWRT_WinRTComponent_Struct;

typedef struct SWRT_WinRTComponent_IArraysStatics SWRT_WinRTComponent_IArraysStatics;
typedef struct SWRT_WinRTComponent_IByteBuffersStatics SWRT_WinRTComponent_IByteBuffersStatics;
typedef struct SWRT_WinRTComponent_ICollectionsStatics SWRT_WinRTComponent_ICollectionsStatics;
typedef struct SWRT_WinRTComponent_IDateTimesStatics SWRT_WinRTComponent_IDateTimesStatics;
typedef struct SWRT_WinRTComponent_IErrorsStatics SWRT_WinRTComponent_IErrorsStatics;
typedef struct SWRT_WinRTComponent_IEventCounter SWRT_WinRTComponent_IEventCounter;
typedef struct SWRT_WinRTComponent_IEventSource SWRT_WinRTComponent_IEventSource;
typedef struct SWRT_WinRTComponent_IEventsStatics SWRT_WinRTComponent_IEventsStatics;
typedef struct SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics;
typedef struct SWRT_WinRTComponent_IInspectableBoxingStatics SWRT_WinRTComponent_IInspectableBoxingStatics;
typedef struct SWRT_WinRTComponent_IInt32GlobalStatics SWRT_WinRTComponent_IInt32GlobalStatics;
typedef struct SWRT_WinRTComponent_IInt32Wrapper SWRT_WinRTComponent_IInt32Wrapper;
typedef struct SWRT_WinRTComponent_IInterfaceCastingStatics SWRT_WinRTComponent_IInterfaceCastingStatics;
typedef struct SWRT_WinRTComponent_IManualAsyncOperation SWRT_WinRTComponent_IManualAsyncOperation;
typedef struct SWRT_WinRTComponent_IManualAsyncOperationFactory SWRT_WinRTComponent_IManualAsyncOperationFactory;
typedef struct SWRT_WinRTComponent_IMinimalBaseClass SWRT_WinRTComponent_IMinimalBaseClass;
typedef struct SWRT_WinRTComponent_IMinimalBaseClassFactory SWRT_WinRTComponent_IMinimalBaseClassFactory;
typedef struct SWRT_WinRTComponent_IMinimalBaseClassOverrides SWRT_WinRTComponent_IMinimalBaseClassOverrides;
typedef struct SWRT_WinRTComponent_IMinimalBaseClassStatics SWRT_WinRTComponent_IMinimalBaseClassStatics;
typedef struct SWRT_WinRTComponent_IMinimalClass SWRT_WinRTComponent_IMinimalClass;
typedef struct SWRT_WinRTComponent_IMinimalDerivedClass SWRT_WinRTComponent_IMinimalDerivedClass;
typedef struct SWRT_WinRTComponent_IMinimalDerivedClassFactory SWRT_WinRTComponent_IMinimalDerivedClassFactory;
typedef struct SWRT_WinRTComponent_IMinimalDerivedClassStatics SWRT_WinRTComponent_IMinimalDerivedClassStatics;
typedef struct SWRT_WinRTComponent_IMinimalInterface SWRT_WinRTComponent_IMinimalInterface;
typedef struct SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics;
typedef struct SWRT_WinRTComponent_INullValuesStatics SWRT_WinRTComponent_INullValuesStatics;
typedef struct SWRT_WinRTComponent_INumbersStatics SWRT_WinRTComponent_INumbersStatics;
typedef struct SWRT_WinRTComponent_IObjectReferencer SWRT_WinRTComponent_IObjectReferencer;
typedef struct SWRT_WinRTComponent_IObjectReferencerFactory SWRT_WinRTComponent_IObjectReferencerFactory;
typedef struct SWRT_WinRTComponent_IOutputArgument SWRT_WinRTComponent_IOutputArgument;
typedef struct SWRT_WinRTComponent_IOutputArgumentStatics SWRT_WinRTComponent_IOutputArgumentStatics;
typedef struct SWRT_WinRTComponent_IOverloadedSum SWRT_WinRTComponent_IOverloadedSum;
typedef struct SWRT_WinRTComponent_IOverloadedSumFactory SWRT_WinRTComponent_IOverloadedSumFactory;
typedef struct SWRT_WinRTComponent_IOverloadedSumStatics SWRT_WinRTComponent_IOverloadedSumStatics;
typedef struct SWRT_WinRTComponent_IReferenceBoxingStatics SWRT_WinRTComponent_IReferenceBoxingStatics;
typedef struct SWRT_WinRTComponent_IReturnArgument SWRT_WinRTComponent_IReturnArgument;
typedef struct SWRT_WinRTComponent_IReturnArgumentStatics SWRT_WinRTComponent_IReturnArgumentStatics;
typedef struct SWRT_WinRTComponent_IStringsStatics SWRT_WinRTComponent_IStringsStatics;
typedef struct SWRT_WinRTComponent_IStructsStatics SWRT_WinRTComponent_IStructsStatics;
typedef struct SWRT_WinRTComponent_ISwiftAttributesStatics SWRT_WinRTComponent_ISwiftAttributesStatics;
typedef struct SWRT_WinRTComponent_IWeakReferencer SWRT_WinRTComponent_IWeakReferencer;
typedef struct SWRT_WinRTComponent_IWeakReferencerFactory SWRT_WinRTComponent_IWeakReferencerFactory;
typedef struct SWRT_WinRTComponent_MinimalDelegate SWRT_WinRTComponent_MinimalDelegate;
typedef struct SWRT_WindowsFoundationCollections_IIterable_Int32 SWRT_WindowsFoundationCollections_IIterable_Int32;
typedef struct SWRT_WindowsFoundationCollections_IIterator_Int32 SWRT_WindowsFoundationCollections_IIterator_Int32;
typedef struct SWRT_WindowsFoundationCollections_IVectorView_Int32 SWRT_WindowsFoundationCollections_IVectorView_Int32;
typedef struct SWRT_WindowsFoundationCollections_IVector_Int32 SWRT_WindowsFoundationCollections_IVector_Int32;
typedef struct SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32 SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32;
typedef struct SWRT_WindowsFoundation_IAsyncOperation_Int32 SWRT_WindowsFoundation_IAsyncOperation_Int32;

// WinRTComponent.IArraysStatics
struct SWRT_WinRTComponent_IArraysStatics
{
    struct SWRT_WinRTComponent_IArraysStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IArraysStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IArraysStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IArraysStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IArraysStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IArraysStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IArraysStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IArraysStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *GetLast)(SWRT_WinRTComponent_IArraysStatics* _this, uint32_t valueLength, SWRT_HString* value, SWRT_HString* _return);
    SWRT_HResult (__stdcall *Make)(SWRT_WinRTComponent_IArraysStatics* _this, SWRT_HString a, SWRT_HString b, uint32_t* _returnLength, SWRT_HString** _return);
    SWRT_HResult (__stdcall *Output)(SWRT_WinRTComponent_IArraysStatics* _this, SWRT_HString a, SWRT_HString b, uint32_t* arrayLength, SWRT_HString** array);
    SWRT_HResult (__stdcall *SwapFirstLast)(SWRT_WinRTComponent_IArraysStatics* _this, uint32_t arrayLength, SWRT_HString* array);
};

// WinRTComponent.IByteBuffersStatics
struct SWRT_WinRTComponent_IByteBuffersStatics
{
    struct SWRT_WinRTComponent_IByteBuffersStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IByteBuffersStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IByteBuffersStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IByteBuffersStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IByteBuffersStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IByteBuffersStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IByteBuffersStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IByteBuffersStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *MemoryBufferToArray)(SWRT_WinRTComponent_IByteBuffersStatics* _this, SWRT_WindowsFoundation_IMemoryBuffer* buffer, uint32_t* _returnLength, uint8_t** _return);
    SWRT_HResult (__stdcall *StorageBufferToArray)(SWRT_WinRTComponent_IByteBuffersStatics* _this, SWRT_WindowsStorageStreams_IBuffer* buffer, uint32_t* _returnLength, uint8_t** _return);
    SWRT_HResult (__stdcall *ArrayToMemoryBuffer)(SWRT_WinRTComponent_IByteBuffersStatics* _this, uint32_t bytesLength, uint8_t* bytes, SWRT_WindowsFoundation_IMemoryBuffer** _return);
    SWRT_HResult (__stdcall *ArrayToStorageBuffer)(SWRT_WinRTComponent_IByteBuffersStatics* _this, uint32_t bytesLength, uint8_t* bytes, SWRT_WindowsStorageStreams_IBuffer** _return);
};

// WinRTComponent.ICollectionsStatics
struct SWRT_WinRTComponent_ICollectionsStatics
{
    struct SWRT_WinRTComponent_ICollectionsStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_ICollectionsStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_ICollectionsStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_ICollectionsStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_ICollectionsStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_ICollectionsStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_ICollectionsStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_ICollectionsStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateIterable)(SWRT_WinRTComponent_ICollectionsStatics* _this, uint32_t valuesLength, int32_t* values, SWRT_WindowsFoundationCollections_IIterable_Int32** _return);
    SWRT_HResult (__stdcall *CreateVector)(SWRT_WinRTComponent_ICollectionsStatics* _this, uint32_t valuesLength, int32_t* values, SWRT_WindowsFoundationCollections_IVector_Int32** _return);
    SWRT_HResult (__stdcall *IterableToArray)(SWRT_WinRTComponent_ICollectionsStatics* _this, SWRT_WindowsFoundationCollections_IIterable_Int32* iterable, uint32_t* _returnLength, int32_t** _return);
};

// WinRTComponent.IDateTimesStatics
struct SWRT_WinRTComponent_IDateTimesStatics
{
    struct SWRT_WinRTComponent_IDateTimesStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IDateTimesStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IDateTimesStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IDateTimesStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IDateTimesStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IDateTimesStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IDateTimesStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IDateTimesStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *FromSeconds)(SWRT_WinRTComponent_IDateTimesStatics* _this, int32_t seconds, SWRT_WindowsFoundation_TimeSpan* _return);
    SWRT_HResult (__stdcall *RoundToSeconds)(SWRT_WinRTComponent_IDateTimesStatics* _this, SWRT_WindowsFoundation_TimeSpan timeSpan, int32_t* _return);
    SWRT_HResult (__stdcall *FromUTCYearMonthDay)(SWRT_WinRTComponent_IDateTimesStatics* _this, int32_t year, int32_t month, int32_t day, SWRT_WindowsFoundation_DateTime* _return);
    SWRT_HResult (__stdcall *ToUTCYearMonthDay)(SWRT_WinRTComponent_IDateTimesStatics* _this, SWRT_WindowsFoundation_DateTime dateTime, int32_t* year, int32_t* month, int32_t* day);
};

// WinRTComponent.IErrorsStatics
struct SWRT_WinRTComponent_IErrorsStatics
{
    struct SWRT_WinRTComponent_IErrorsStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IErrorsStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IErrorsStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IErrorsStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IErrorsStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *FailWith)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_HResult hr, SWRT_HString message);
    SWRT_HResult (__stdcall *get_NotImplementedProperty)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_HString* _return);
    SWRT_HResult (__stdcall *put_NotImplementedProperty)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_HString value);
    SWRT_HResult (__stdcall *Call)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_WinRTComponent_MinimalDelegate* callee);
    SWRT_HResult (__stdcall *CatchHResult)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_WinRTComponent_MinimalDelegate* callee, SWRT_HResult* _return);
    SWRT_HResult (__stdcall *CatchMessage)(SWRT_WinRTComponent_IErrorsStatics* _this, SWRT_WinRTComponent_MinimalDelegate* callee, SWRT_HString* _return);
};

// WinRTComponent.IEventCounter
struct SWRT_WinRTComponent_IEventCounter
{
    struct SWRT_WinRTComponent_IEventCounter_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IEventCounter_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IEventCounter* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IEventCounter* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IEventCounter* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IEventCounter* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IEventCounter* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IEventCounter* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Count)(SWRT_WinRTComponent_IEventCounter* _this, int32_t* _return);
    SWRT_HResult (__stdcall *Detach)(SWRT_WinRTComponent_IEventCounter* _this);
};

// WinRTComponent.IEventSource
struct SWRT_WinRTComponent_IEventSource
{
    struct SWRT_WinRTComponent_IEventSource_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IEventSource_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IEventSource* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IEventSource* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IEventSource* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IEventSource* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IEventSource* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IEventSource* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *add_Event)(SWRT_WinRTComponent_IEventSource* _this, SWRT_WinRTComponent_MinimalDelegate* handler, SWRT_EventRegistrationToken* _return);
    SWRT_HResult (__stdcall *remove_Event)(SWRT_WinRTComponent_IEventSource* _this, SWRT_EventRegistrationToken token);
    SWRT_HResult (__stdcall *Fire)(SWRT_WinRTComponent_IEventSource* _this);
};

// WinRTComponent.IEventsStatics
struct SWRT_WinRTComponent_IEventsStatics
{
    struct SWRT_WinRTComponent_IEventsStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IEventsStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IEventsStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IEventsStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IEventsStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IEventsStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IEventsStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IEventsStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateSource)(SWRT_WinRTComponent_IEventsStatics* _this, SWRT_WinRTComponent_IEventSource** _return);
    SWRT_HResult (__stdcall *CreateCounter)(SWRT_WinRTComponent_IEventsStatics* _this, SWRT_WinRTComponent_IEventSource* source, SWRT_WinRTComponent_IEventCounter** _return);
};

// WinRTComponent.IForCustomActivationFactoryResolutionStatics
struct SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics
{
    struct SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Method)(SWRT_WinRTComponent_IForCustomActivationFactoryResolutionStatics* _this);
};

// WinRTComponent.IInspectableBoxingStatics
struct SWRT_WinRTComponent_IInspectableBoxingStatics
{
    struct SWRT_WinRTComponent_IInspectableBoxingStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IInspectableBoxingStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *BoxInt32)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, int32_t value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *UnboxInt32)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_IInspectable* value, int32_t* _return);
    SWRT_HResult (__stdcall *BoxString)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_HString value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *UnboxString)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_IInspectable* value, SWRT_HString* _return);
    SWRT_HResult (__stdcall *BoxMinimalEnum)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_WinRTComponent_MinimalEnum value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *UnboxMinimalEnum)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_IInspectable* value, SWRT_WinRTComponent_MinimalEnum* _return);
    SWRT_HResult (__stdcall *BoxMinimalStruct)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_WinRTComponent_MinimalStruct value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *UnboxMinimalStruct)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_IInspectable* value, SWRT_WinRTComponent_MinimalStruct* _return);
    SWRT_HResult (__stdcall *BoxMinimalDelegate)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_WinRTComponent_MinimalDelegate* value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *UnboxMinimalDelegate)(SWRT_WinRTComponent_IInspectableBoxingStatics* _this, SWRT_IInspectable* value, SWRT_WinRTComponent_MinimalDelegate** _return);
};

// WinRTComponent.IInt32GlobalStatics
struct SWRT_WinRTComponent_IInt32GlobalStatics
{
    struct SWRT_WinRTComponent_IInt32GlobalStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IInt32GlobalStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IInt32GlobalStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IInt32GlobalStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_GetSet)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, int32_t* _return);
    SWRT_HResult (__stdcall *put_GetSet)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, int32_t value);
    SWRT_HResult (__stdcall *get_GetOnly)(SWRT_WinRTComponent_IInt32GlobalStatics* _this, int32_t* _return);
};

// WinRTComponent.IInt32Wrapper
struct SWRT_WinRTComponent_IInt32Wrapper
{
    struct SWRT_WinRTComponent_IInt32Wrapper_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IInt32Wrapper_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IInt32Wrapper* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IInt32Wrapper* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IInt32Wrapper* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IInt32Wrapper* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IInt32Wrapper* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IInt32Wrapper* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_GetSet)(SWRT_WinRTComponent_IInt32Wrapper* _this, int32_t* _return);
    SWRT_HResult (__stdcall *put_GetSet)(SWRT_WinRTComponent_IInt32Wrapper* _this, int32_t value);
    SWRT_HResult (__stdcall *get_GetOnly)(SWRT_WinRTComponent_IInt32Wrapper* _this, int32_t* _return);
};

// WinRTComponent.IInterfaceCastingStatics
struct SWRT_WinRTComponent_IInterfaceCastingStatics
{
    struct SWRT_WinRTComponent_IInterfaceCastingStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IInterfaceCastingStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *AsMinimalInterface)(SWRT_WinRTComponent_IInterfaceCastingStatics* _this, SWRT_IInspectable* object, SWRT_WinRTComponent_IMinimalInterface** _return);
};

// WinRTComponent.IManualAsyncOperation
struct SWRT_WinRTComponent_IManualAsyncOperation
{
    struct SWRT_WinRTComponent_IManualAsyncOperation_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IManualAsyncOperation_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IManualAsyncOperation* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IManualAsyncOperation* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IManualAsyncOperation* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IManualAsyncOperation* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IManualAsyncOperation* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IManualAsyncOperation* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Complete)(SWRT_WinRTComponent_IManualAsyncOperation* _this, int32_t result);
    SWRT_HResult (__stdcall *CompleteWithError)(SWRT_WinRTComponent_IManualAsyncOperation* _this, SWRT_HResult errorCode);
};

// WinRTComponent.IManualAsyncOperationFactory
struct SWRT_WinRTComponent_IManualAsyncOperationFactory
{
    struct SWRT_WinRTComponent_IManualAsyncOperationFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IManualAsyncOperationFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IManualAsyncOperationFactory* _this, int32_t id, SWRT_WinRTComponent_IManualAsyncOperation** _return);
};

// WinRTComponent.IMinimalBaseClass
struct SWRT_WinRTComponent_IMinimalBaseClass
{
    struct SWRT_WinRTComponent_IMinimalBaseClass_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalBaseClass_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalBaseClass* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalBaseClass* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalBaseClass* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalBaseClass* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalBaseClass* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalBaseClass* _this, SWRT_TrustLevel* trustLevel);
};

// WinRTComponent.IMinimalBaseClassFactory
struct SWRT_WinRTComponent_IMinimalBaseClassFactory
{
    struct SWRT_WinRTComponent_IMinimalBaseClassFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalBaseClassFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IMinimalBaseClassFactory* _this, SWRT_IInspectable* baseInterface, SWRT_IInspectable** innerInterface, SWRT_WinRTComponent_IMinimalBaseClass** _return);
};

// WinRTComponent.IMinimalBaseClassOverrides
struct SWRT_WinRTComponent_IMinimalBaseClassOverrides
{
    struct SWRT_WinRTComponent_IMinimalBaseClassOverrides_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalBaseClassOverrides_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_TypeName)(SWRT_WinRTComponent_IMinimalBaseClassOverrides* _this, SWRT_HString* _return);
};

// WinRTComponent.IMinimalBaseClassStatics
struct SWRT_WinRTComponent_IMinimalBaseClassStatics
{
    struct SWRT_WinRTComponent_IMinimalBaseClassStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalBaseClassStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateBase)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_WinRTComponent_IMinimalBaseClass** _return);
    SWRT_HResult (__stdcall *CreateDerivedAsBase)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_WinRTComponent_IMinimalBaseClass** _return);
    SWRT_HResult (__stdcall *CreatePrivate)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_WinRTComponent_IMinimalBaseClass** _return);
    SWRT_HResult (__stdcall *Passthrough)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_WinRTComponent_IMinimalBaseClass* value, SWRT_WinRTComponent_IMinimalBaseClass** _return);
    SWRT_HResult (__stdcall *GetTypeName)(SWRT_WinRTComponent_IMinimalBaseClassStatics* _this, SWRT_WinRTComponent_IMinimalBaseClass* value, SWRT_HString* _return);
};

// WinRTComponent.IMinimalClass
struct SWRT_WinRTComponent_IMinimalClass
{
    struct SWRT_WinRTComponent_IMinimalClass_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalClass_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalClass* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalClass* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalClass* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalClass* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalClass* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalClass* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Method)(SWRT_WinRTComponent_IMinimalClass* _this);
};

// WinRTComponent.IMinimalDerivedClass
struct SWRT_WinRTComponent_IMinimalDerivedClass
{
    struct SWRT_WinRTComponent_IMinimalDerivedClass_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalDerivedClass_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalDerivedClass* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalDerivedClass* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalDerivedClass* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalDerivedClass* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalDerivedClass* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalDerivedClass* _this, SWRT_TrustLevel* trustLevel);
};

// WinRTComponent.IMinimalDerivedClassFactory
struct SWRT_WinRTComponent_IMinimalDerivedClassFactory
{
    struct SWRT_WinRTComponent_IMinimalDerivedClassFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalDerivedClassFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IMinimalDerivedClassFactory* _this, SWRT_IInspectable* baseInterface, SWRT_IInspectable** innerInterface, SWRT_WinRTComponent_IMinimalDerivedClass** _return);
};

// WinRTComponent.IMinimalDerivedClassStatics
struct SWRT_WinRTComponent_IMinimalDerivedClassStatics
{
    struct SWRT_WinRTComponent_IMinimalDerivedClassStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalDerivedClassStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateDerived)(SWRT_WinRTComponent_IMinimalDerivedClassStatics* _this, SWRT_WinRTComponent_IMinimalDerivedClass** _return);
};

// WinRTComponent.IMinimalInterface
struct SWRT_WinRTComponent_IMinimalInterface
{
    struct SWRT_WinRTComponent_IMinimalInterface_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalInterface_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalInterface* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalInterface* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalInterface* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalInterface* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalInterface* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalInterface* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Method)(SWRT_WinRTComponent_IMinimalInterface* _this);
};

// WinRTComponent.IMinimalInterfaceFactoryStatics
struct SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics
{
    struct SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Create)(SWRT_WinRTComponent_IMinimalInterfaceFactoryStatics* _this, SWRT_WinRTComponent_IMinimalInterface** _return);
};

// WinRTComponent.INullValuesStatics
struct SWRT_WinRTComponent_INullValuesStatics
{
    struct SWRT_WinRTComponent_INullValuesStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_INullValuesStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_INullValuesStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_INullValuesStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_INullValuesStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *IsObjectNull)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_IInspectable* value, bool* _return);
    SWRT_HResult (__stdcall *IsInterfaceNull)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_IMinimalInterface* value, bool* _return);
    SWRT_HResult (__stdcall *IsClassNull)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_IMinimalClass* value, bool* _return);
    SWRT_HResult (__stdcall *IsDelegateNull)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_MinimalDelegate* value, bool* _return);
    SWRT_HResult (__stdcall *IsReferenceNull)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WindowsFoundation_IReference* value, bool* _return);
    SWRT_HResult (__stdcall *GetNullObject)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *GetNullInterface)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_IMinimalInterface** _return);
    SWRT_HResult (__stdcall *GetNullClass)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_IMinimalClass** _return);
    SWRT_HResult (__stdcall *GetNullDelegate)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WinRTComponent_MinimalDelegate** _return);
    SWRT_HResult (__stdcall *GetNullReference)(SWRT_WinRTComponent_INullValuesStatics* _this, SWRT_WindowsFoundation_IReference** _return);
};

// WinRTComponent.INumbersStatics
struct SWRT_WinRTComponent_INumbersStatics
{
    struct SWRT_WinRTComponent_INumbersStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_INumbersStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_INumbersStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_INumbersStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_INumbersStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_INumbersStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_INumbersStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_INumbersStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Not)(SWRT_WinRTComponent_INumbersStatics* _this, bool value, bool* _return);
    SWRT_HResult (__stdcall *IncrementUInt8)(SWRT_WinRTComponent_INumbersStatics* _this, uint8_t value, uint8_t* _return);
    SWRT_HResult (__stdcall *IncrementInt16)(SWRT_WinRTComponent_INumbersStatics* _this, int16_t value, int16_t* _return);
    SWRT_HResult (__stdcall *IncrementUInt16)(SWRT_WinRTComponent_INumbersStatics* _this, uint16_t value, uint16_t* _return);
    SWRT_HResult (__stdcall *IncrementInt32)(SWRT_WinRTComponent_INumbersStatics* _this, int32_t value, int32_t* _return);
    SWRT_HResult (__stdcall *IncrementUInt32)(SWRT_WinRTComponent_INumbersStatics* _this, uint32_t value, uint32_t* _return);
    SWRT_HResult (__stdcall *IncrementInt64)(SWRT_WinRTComponent_INumbersStatics* _this, int64_t value, int64_t* _return);
    SWRT_HResult (__stdcall *IncrementUInt64)(SWRT_WinRTComponent_INumbersStatics* _this, uint64_t value, uint64_t* _return);
    SWRT_HResult (__stdcall *NegateSingle)(SWRT_WinRTComponent_INumbersStatics* _this, float value, float* _return);
    SWRT_HResult (__stdcall *NegateDouble)(SWRT_WinRTComponent_INumbersStatics* _this, double value, double* _return);
};

// WinRTComponent.IObjectReferencer
struct SWRT_WinRTComponent_IObjectReferencer
{
    struct SWRT_WinRTComponent_IObjectReferencer_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IObjectReferencer_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IObjectReferencer* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IObjectReferencer* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IObjectReferencer* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IObjectReferencer* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IObjectReferencer* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IObjectReferencer* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Target)(SWRT_WinRTComponent_IObjectReferencer* _this, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *CallAddRef)(SWRT_WinRTComponent_IObjectReferencer* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *CallRelease)(SWRT_WinRTComponent_IObjectReferencer* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *Clear)(SWRT_WinRTComponent_IObjectReferencer* _this);
};

// WinRTComponent.IObjectReferencerFactory
struct SWRT_WinRTComponent_IObjectReferencerFactory
{
    struct SWRT_WinRTComponent_IObjectReferencerFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IObjectReferencerFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IObjectReferencerFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IObjectReferencerFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IObjectReferencerFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IObjectReferencerFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IObjectReferencerFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IObjectReferencerFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IObjectReferencerFactory* _this, SWRT_IInspectable* obj, SWRT_WinRTComponent_IObjectReferencer** _return);
};

// WinRTComponent.IOutputArgument
struct SWRT_WinRTComponent_IOutputArgument
{
    struct SWRT_WinRTComponent_IOutputArgument_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IOutputArgument_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IOutputArgument* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IOutputArgument* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IOutputArgument* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Int32)(SWRT_WinRTComponent_IOutputArgument* _this, int32_t value, int32_t* result);
    SWRT_HResult (__stdcall *String)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_HString value, SWRT_HString* result);
    SWRT_HResult (__stdcall *Object)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_IInspectable* value, SWRT_IInspectable** result);
    SWRT_HResult (__stdcall *Enum)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WinRTComponent_MinimalEnum value, SWRT_WinRTComponent_MinimalEnum* result);
    SWRT_HResult (__stdcall *Struct)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WinRTComponent_MinimalStruct value, SWRT_WinRTComponent_MinimalStruct* result);
    SWRT_HResult (__stdcall *Interface)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WinRTComponent_IMinimalInterface* value, SWRT_WinRTComponent_IMinimalInterface** result);
    SWRT_HResult (__stdcall *Class)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WinRTComponent_IMinimalClass* value, SWRT_WinRTComponent_IMinimalClass** result);
    SWRT_HResult (__stdcall *Delegate)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WinRTComponent_MinimalDelegate* value, SWRT_WinRTComponent_MinimalDelegate** result);
    SWRT_HResult (__stdcall *Array)(SWRT_WinRTComponent_IOutputArgument* _this, uint32_t valueLength, SWRT_HString* value, uint32_t* resultLength, SWRT_HString** result);
    SWRT_HResult (__stdcall *Reference)(SWRT_WinRTComponent_IOutputArgument* _this, SWRT_WindowsFoundation_IReference* value, SWRT_WindowsFoundation_IReference** result);
};

// WinRTComponent.IOutputArgumentStatics
struct SWRT_WinRTComponent_IOutputArgumentStatics
{
    struct SWRT_WinRTComponent_IOutputArgumentStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IOutputArgumentStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IOutputArgumentStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IOutputArgumentStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Create)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, SWRT_WinRTComponent_IOutputArgument** _return);
    SWRT_HResult (__stdcall *CreateProxy)(SWRT_WinRTComponent_IOutputArgumentStatics* _this, SWRT_WinRTComponent_IOutputArgument* inner, SWRT_WinRTComponent_IOutputArgument** _return);
};

// WinRTComponent.IOverloadedSum
struct SWRT_WinRTComponent_IOverloadedSum
{
    struct SWRT_WinRTComponent_IOverloadedSum_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IOverloadedSum_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IOverloadedSum* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IOverloadedSum* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IOverloadedSum* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IOverloadedSum* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IOverloadedSum* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IOverloadedSum* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Result)(SWRT_WinRTComponent_IOverloadedSum* _this, int32_t* _return);
};

// WinRTComponent.IOverloadedSumFactory
struct SWRT_WinRTComponent_IOverloadedSumFactory
{
    struct SWRT_WinRTComponent_IOverloadedSumFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IOverloadedSumFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IOverloadedSumFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IOverloadedSumFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, int32_t a, SWRT_WinRTComponent_IOverloadedSum** _return);
    SWRT_HResult (__stdcall *CreateInstance2)(SWRT_WinRTComponent_IOverloadedSumFactory* _this, int32_t a, int32_t b, SWRT_WinRTComponent_IOverloadedSum** _return);
};

// WinRTComponent.IOverloadedSumStatics
struct SWRT_WinRTComponent_IOverloadedSumStatics
{
    struct SWRT_WinRTComponent_IOverloadedSumStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IOverloadedSumStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IOverloadedSumStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IOverloadedSumStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Of0)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, int32_t* _return);
    SWRT_HResult (__stdcall *Of1)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, int32_t a, int32_t* _return);
    SWRT_HResult (__stdcall *Of)(SWRT_WinRTComponent_IOverloadedSumStatics* _this, int32_t a, int32_t b, int32_t* _return);
};

// WinRTComponent.IReferenceBoxingStatics
struct SWRT_WinRTComponent_IReferenceBoxingStatics
{
    struct SWRT_WinRTComponent_IReferenceBoxingStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IReferenceBoxingStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *BoxInt32)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, int32_t value, SWRT_WindowsFoundation_IReference** _return);
    SWRT_HResult (__stdcall *UnboxInt32)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_WindowsFoundation_IReference* value, int32_t* _return);
    SWRT_HResult (__stdcall *BoxMinimalEnum)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_WinRTComponent_MinimalEnum value, SWRT_WindowsFoundation_IReference** _return);
    SWRT_HResult (__stdcall *UnboxMinimalEnum)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_WindowsFoundation_IReference* value, SWRT_WinRTComponent_MinimalEnum* _return);
    SWRT_HResult (__stdcall *BoxMinimalStruct)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_WinRTComponent_MinimalStruct value, SWRT_WindowsFoundation_IReference** _return);
    SWRT_HResult (__stdcall *UnboxMinimalStruct)(SWRT_WinRTComponent_IReferenceBoxingStatics* _this, SWRT_WindowsFoundation_IReference* value, SWRT_WinRTComponent_MinimalStruct* _return);
};

// WinRTComponent.IReturnArgument
struct SWRT_WinRTComponent_IReturnArgument
{
    struct SWRT_WinRTComponent_IReturnArgument_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IReturnArgument_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IReturnArgument* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IReturnArgument* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IReturnArgument* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Int32)(SWRT_WinRTComponent_IReturnArgument* _this, int32_t value, int32_t* _return);
    SWRT_HResult (__stdcall *String)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_HString value, SWRT_HString* _return);
    SWRT_HResult (__stdcall *Object)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_IInspectable* value, SWRT_IInspectable** _return);
    SWRT_HResult (__stdcall *Enum)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WinRTComponent_MinimalEnum value, SWRT_WinRTComponent_MinimalEnum* _return);
    SWRT_HResult (__stdcall *Struct)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WinRTComponent_MinimalStruct value, SWRT_WinRTComponent_MinimalStruct* _return);
    SWRT_HResult (__stdcall *Interface)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WinRTComponent_IMinimalInterface* value, SWRT_WinRTComponent_IMinimalInterface** _return);
    SWRT_HResult (__stdcall *Class)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WinRTComponent_IMinimalClass* value, SWRT_WinRTComponent_IMinimalClass** _return);
    SWRT_HResult (__stdcall *Delegate)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WinRTComponent_MinimalDelegate* value, SWRT_WinRTComponent_MinimalDelegate** _return);
    SWRT_HResult (__stdcall *Array)(SWRT_WinRTComponent_IReturnArgument* _this, uint32_t valueLength, SWRT_HString* value, uint32_t* _returnLength, SWRT_HString** _return);
    SWRT_HResult (__stdcall *Reference)(SWRT_WinRTComponent_IReturnArgument* _this, SWRT_WindowsFoundation_IReference* value, SWRT_WindowsFoundation_IReference** _return);
};

// WinRTComponent.IReturnArgumentStatics
struct SWRT_WinRTComponent_IReturnArgumentStatics
{
    struct SWRT_WinRTComponent_IReturnArgumentStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IReturnArgumentStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IReturnArgumentStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IReturnArgumentStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Create)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, SWRT_WinRTComponent_IReturnArgument** _return);
    SWRT_HResult (__stdcall *CreateProxy)(SWRT_WinRTComponent_IReturnArgumentStatics* _this, SWRT_WinRTComponent_IReturnArgument* inner, SWRT_WinRTComponent_IReturnArgument** _return);
};

// WinRTComponent.IStringsStatics
struct SWRT_WinRTComponent_IStringsStatics
{
    struct SWRT_WinRTComponent_IStringsStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IStringsStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IStringsStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IStringsStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IStringsStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IStringsStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IStringsStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IStringsStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Roundtrip)(SWRT_WinRTComponent_IStringsStatics* _this, SWRT_HString value, SWRT_HString* _return);
    SWRT_HResult (__stdcall *RoundtripChar)(SWRT_WinRTComponent_IStringsStatics* _this, char16_t value, char16_t* _return);
    SWRT_HResult (__stdcall *FromChars)(SWRT_WinRTComponent_IStringsStatics* _this, uint32_t charsLength, char16_t* chars, SWRT_HString* _return);
    SWRT_HResult (__stdcall *ToChars)(SWRT_WinRTComponent_IStringsStatics* _this, SWRT_HString value, uint32_t* _returnLength, char16_t** _return);
};

// WinRTComponent.IStructsStatics
struct SWRT_WinRTComponent_IStructsStatics
{
    struct SWRT_WinRTComponent_IStructsStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IStructsStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IStructsStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IStructsStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IStructsStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *Make)(SWRT_WinRTComponent_IStructsStatics* _this, int32_t int32, SWRT_HString string, SWRT_WindowsFoundation_IReference* reference, SWRT_WinRTComponent_LeafStruct nested, SWRT_WinRTComponent_Struct* _return);
    SWRT_HResult (__stdcall *GetInt32)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_WinRTComponent_Struct value, int32_t* _return);
    SWRT_HResult (__stdcall *GetString)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_WinRTComponent_Struct value, SWRT_HString* _return);
    SWRT_HResult (__stdcall *GetReference)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_WinRTComponent_Struct value, SWRT_WindowsFoundation_IReference** _return);
    SWRT_HResult (__stdcall *GetNested)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_WinRTComponent_Struct value, SWRT_WinRTComponent_LeafStruct* _return);
    SWRT_HResult (__stdcall *Output)(SWRT_WinRTComponent_IStructsStatics* _this, int32_t int32, SWRT_HString string, SWRT_WindowsFoundation_IReference* reference, SWRT_WinRTComponent_LeafStruct nested, SWRT_WinRTComponent_Struct* value);
    SWRT_HResult (__stdcall *ReturnRefConstArgument)(SWRT_WinRTComponent_IStructsStatics* _this, SWRT_WinRTComponent_Struct* value, SWRT_WinRTComponent_Struct* _return);
};

// WinRTComponent.ISwiftAttributesStatics
struct SWRT_WinRTComponent_ISwiftAttributesStatics
{
    struct SWRT_WinRTComponent_ISwiftAttributesStatics_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_ISwiftAttributesStatics_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *MainActor)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this);
    SWRT_HResult (__stdcall *AvailableFromSwift1)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this);
    SWRT_HResult (__stdcall *AvailableFromSwift1WithDiscardableResult)(SWRT_WinRTComponent_ISwiftAttributesStatics* _this, int32_t* _return);
};

// WinRTComponent.IWeakReferencer
struct SWRT_WinRTComponent_IWeakReferencer
{
    struct SWRT_WinRTComponent_IWeakReferencer_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IWeakReferencer_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IWeakReferencer* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IWeakReferencer* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IWeakReferencer* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IWeakReferencer* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IWeakReferencer* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IWeakReferencer* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Target)(SWRT_WinRTComponent_IWeakReferencer* _this, SWRT_IInspectable** _return);
};

// WinRTComponent.IWeakReferencerFactory
struct SWRT_WinRTComponent_IWeakReferencerFactory
{
    struct SWRT_WinRTComponent_IWeakReferencerFactory_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_IWeakReferencerFactory_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_IWeakReferencerFactory* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_IWeakReferencerFactory* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_IWeakReferencerFactory* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WinRTComponent_IWeakReferencerFactory* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WinRTComponent_IWeakReferencerFactory* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WinRTComponent_IWeakReferencerFactory* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *CreateInstance)(SWRT_WinRTComponent_IWeakReferencerFactory* _this, SWRT_IInspectable* target, SWRT_WinRTComponent_IWeakReferencer** _return);
};

// WinRTComponent.IMinimalDelegate
struct SWRT_WinRTComponent_MinimalDelegate
{
    struct SWRT_WinRTComponent_MinimalDelegate_VirtualTable* VirtualTable;
};

struct SWRT_WinRTComponent_MinimalDelegate_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WinRTComponent_MinimalDelegate* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WinRTComponent_MinimalDelegate* _this);
    uint32_t (__stdcall *Release)(SWRT_WinRTComponent_MinimalDelegate* _this);
    SWRT_HResult (__stdcall *Invoke)(SWRT_WinRTComponent_MinimalDelegate* _this);
};

// Windows.Foundation.Collections.IIterable`1<Int32>
struct SWRT_WindowsFoundationCollections_IIterable_Int32
{
    struct SWRT_WindowsFoundationCollections_IIterable_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundationCollections_IIterable_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *First)(SWRT_WindowsFoundationCollections_IIterable_Int32* _this, SWRT_WindowsFoundationCollections_IIterator_Int32** _return);
};

// Windows.Foundation.Collections.IIterator`1<Int32>
struct SWRT_WindowsFoundationCollections_IIterator_Int32
{
    struct SWRT_WindowsFoundationCollections_IIterator_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundationCollections_IIterator_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *get_Current)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, int32_t* _return);
    SWRT_HResult (__stdcall *get_HasCurrent)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, bool* _return);
    SWRT_HResult (__stdcall *MoveNext)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, bool* _return);
    SWRT_HResult (__stdcall *GetMany)(SWRT_WindowsFoundationCollections_IIterator_Int32* _this, uint32_t itemsLength, int32_t* items, uint32_t* _return);
};

// Windows.Foundation.Collections.IVectorView`1<Int32>
struct SWRT_WindowsFoundationCollections_IVectorView_Int32
{
    struct SWRT_WindowsFoundationCollections_IVectorView_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundationCollections_IVectorView_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *GetAt)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, uint32_t index, int32_t* _return);
    SWRT_HResult (__stdcall *get_Size)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *IndexOf)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, int32_t value, uint32_t* index, bool* _return);
    SWRT_HResult (__stdcall *GetMany)(SWRT_WindowsFoundationCollections_IVectorView_Int32* _this, uint32_t startIndex, uint32_t itemsLength, int32_t* items, uint32_t* _return);
};

// Windows.Foundation.Collections.IVector`1<Int32>
struct SWRT_WindowsFoundationCollections_IVector_Int32
{
    struct SWRT_WindowsFoundationCollections_IVector_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundationCollections_IVector_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundationCollections_IVector_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundationCollections_IVector_Int32* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *GetAt)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t index, int32_t* _return);
    SWRT_HResult (__stdcall *get_Size)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t* _return);
    SWRT_HResult (__stdcall *GetView)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, SWRT_WindowsFoundationCollections_IVectorView_Int32** _return);
    SWRT_HResult (__stdcall *IndexOf)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, int32_t value, uint32_t* index, bool* _return);
    SWRT_HResult (__stdcall *SetAt)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t index, int32_t value);
    SWRT_HResult (__stdcall *InsertAt)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t index, int32_t value);
    SWRT_HResult (__stdcall *RemoveAt)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t index);
    SWRT_HResult (__stdcall *Append)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, int32_t value);
    SWRT_HResult (__stdcall *RemoveAtEnd)(SWRT_WindowsFoundationCollections_IVector_Int32* _this);
    SWRT_HResult (__stdcall *Clear)(SWRT_WindowsFoundationCollections_IVector_Int32* _this);
    SWRT_HResult (__stdcall *GetMany)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t startIndex, uint32_t itemsLength, int32_t* items, uint32_t* _return);
    SWRT_HResult (__stdcall *ReplaceAll)(SWRT_WindowsFoundationCollections_IVector_Int32* _this, uint32_t itemsLength, int32_t* items);
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<Int32>
struct SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32
{
    struct SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32* _this);
    SWRT_HResult (__stdcall *Invoke)(SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32* _this, SWRT_WindowsFoundation_IAsyncOperation_Int32* asyncInfo, SWRT_WindowsFoundation_AsyncStatus asyncStatus);
};

// Windows.Foundation.IAsyncOperation`1<Int32>
struct SWRT_WindowsFoundation_IAsyncOperation_Int32
{
    struct SWRT_WindowsFoundation_IAsyncOperation_Int32_VirtualTable* VirtualTable;
};

struct SWRT_WindowsFoundation_IAsyncOperation_Int32_VirtualTable
{
    SWRT_HResult (__stdcall *QueryInterface)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, SWRT_Guid* riid, void** ppvObject);
    uint32_t (__stdcall *AddRef)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this);
    uint32_t (__stdcall *Release)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this);
    SWRT_HResult (__stdcall *GetIids)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, uint32_t* iidCount, SWRT_Guid** iids);
    SWRT_HResult (__stdcall *GetRuntimeClassName)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, SWRT_HString* className);
    SWRT_HResult (__stdcall *GetTrustLevel)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, SWRT_TrustLevel* trustLevel);
    SWRT_HResult (__stdcall *put_Completed)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32* handler);
    SWRT_HResult (__stdcall *get_Completed)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, SWRT_WindowsFoundation_AsyncOperationCompletedHandler_Int32** _return);
    SWRT_HResult (__stdcall *GetResults)(SWRT_WindowsFoundation_IAsyncOperation_Int32* _this, int32_t* _return);
};
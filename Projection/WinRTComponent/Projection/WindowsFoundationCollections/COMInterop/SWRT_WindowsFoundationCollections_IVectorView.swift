// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

internal func uuidof(_: SWRT_WindowsFoundationCollections_IVectorView_Int32.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x8D720CDF, 0x3934, 0x5D3F, 0x9A55, 0x40E8063B086A)
}

extension COM.COMInterop where ABIStruct == SWRT_WindowsFoundationCollections_IVectorView_Int32 {
    internal func getAt(_ index: Swift.UInt32) throws -> Swift.Int32 {
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetAt(this, index, &_result))
        return _result
    }

    internal func get_Size() throws -> Swift.UInt32 {
        var _result: Swift.UInt32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.get_Size(this, &_result))
        return _result
    }

    internal func indexOf(_ value: Swift.Int32, _ index: inout Swift.UInt32) throws -> Swift.Bool {
        var _result: Swift.Bool = false
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.IndexOf(this, value, &index, &_result))
        return _result
    }

    internal func getMany(_ startIndex: Swift.UInt32, _ items: [Swift.Int32]) throws -> Swift.UInt32 {
        var items_abi = try WindowsRuntime.ArrayBinding<WindowsRuntime.Int32Binding>.toABI(items)
        defer { WindowsRuntime.ArrayBinding<WindowsRuntime.Int32Binding>.release(&items_abi) }
        var _result: Swift.UInt32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetMany(this, startIndex, items_abi.count, items_abi.pointer, &_result))
        return _result
    }
}
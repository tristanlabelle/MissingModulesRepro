// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_IOverloadedSumStatics.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x9A227AD3, 0x4F4F, 0x5338, 0xB0B8, 0xE3CAF96F3005)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_IOverloadedSumStatics {
    public func of0() throws -> Swift.Int32 {
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Of0(this, &_result))
        return _result
    }

    public func of1(_ a: Swift.Int32) throws -> Swift.Int32 {
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Of1(this, a, &_result))
        return _result
    }

    public func of(_ a: Swift.Int32, _ b: Swift.Int32) throws -> Swift.Int32 {
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Of(this, a, b, &_result))
        return _result
    }
}
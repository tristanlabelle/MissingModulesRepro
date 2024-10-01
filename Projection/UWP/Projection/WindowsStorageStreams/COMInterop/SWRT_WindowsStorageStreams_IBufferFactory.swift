// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import UWP_ABI

public func uuidof(_: SWRT_WindowsStorageStreams_IBufferFactory.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x71AF914D, 0xC10F, 0x484B, 0xBC50, 0x14BC623B3A27)
}

extension COM.COMInterop where ABIStruct == SWRT_WindowsStorageStreams_IBufferFactory {
    public func create(_ capacity: Swift.UInt32) throws -> COM.COMReference<SWRT_WindowsStorageStreams_IBuffer> {
        var _result: Swift.UnsafeMutablePointer<SWRT_WindowsStorageStreams_IBuffer>? = nil
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Create(this, capacity, &_result))
        guard let _result else { throw COMError.pointer }
        return COM.COMReference(transferringRef: _result)
    }
}
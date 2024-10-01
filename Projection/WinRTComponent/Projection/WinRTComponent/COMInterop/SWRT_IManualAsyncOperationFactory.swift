// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_IManualAsyncOperationFactory.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x4F1558EA, 0x4B92, 0x59CC, 0x80A3, 0xEDA900329BE4)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_IManualAsyncOperationFactory {
    public func createInstance(_ id: Swift.Int32) throws -> COM.COMReference<SWRT_WinRTComponent_IManualAsyncOperation> {
        var _result: Swift.UnsafeMutablePointer<SWRT_WinRTComponent_IManualAsyncOperation>? = nil
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.CreateInstance(this, id, &_result))
        guard let _result else { throw COMError.pointer }
        return COM.COMReference(transferringRef: _result)
    }
}
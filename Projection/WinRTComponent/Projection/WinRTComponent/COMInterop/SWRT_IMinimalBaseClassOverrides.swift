// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_IMinimalBaseClassOverrides.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x6249873C, 0x1BC8, 0x557F, 0x9B5F, 0x92A839666BCA)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_IMinimalBaseClassOverrides {
    public func get_TypeName() throws -> Swift.String {
        var _result: SWRT_HString? = nil
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.get_TypeName(this, &_result))
        return WindowsRuntime.StringBinding.fromABI(consuming: &_result)
    }
}
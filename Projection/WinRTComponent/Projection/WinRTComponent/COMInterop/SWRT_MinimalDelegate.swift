// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_MinimalDelegate.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x8E563E14, 0xE978, 0x5711, 0xA237, 0x8C9E9A2E1FF9)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_MinimalDelegate {
    public func invoke() throws {
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Invoke(this))
    }
}
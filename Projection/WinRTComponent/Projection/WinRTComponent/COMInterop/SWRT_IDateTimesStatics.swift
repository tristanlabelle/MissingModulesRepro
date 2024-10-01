// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_IDateTimesStatics.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0x0E8683DA, 0x3308, 0x5B0F, 0x92A8, 0x287584C4D531)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_IDateTimesStatics {
    public func fromSeconds(_ seconds: Swift.Int32) throws -> WindowsFoundation_TimeSpan {
        var _result: SWRT_WindowsFoundation_TimeSpan = .init()
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.FromSeconds(this, seconds, &_result))
        return WindowsFoundation_TimeSpan.fromABI(_result)
    }

    public func roundToSeconds(_ timeSpan: WindowsFoundation_TimeSpan) throws -> Swift.Int32 {
        let timeSpan_abi = WindowsFoundation_TimeSpan.toABI(timeSpan)
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.RoundToSeconds(this, timeSpan_abi, &_result))
        return _result
    }

    public func fromUTCYearMonthDay(_ year: Swift.Int32, _ month: Swift.Int32, _ day: Swift.Int32) throws -> WindowsFoundation_DateTime {
        var _result: SWRT_WindowsFoundation_DateTime = .init()
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.FromUTCYearMonthDay(this, year, month, day, &_result))
        return WindowsFoundation_DateTime.fromABI(_result)
    }

    public func toUTCYearMonthDay(_ dateTime: WindowsFoundation_DateTime, _ year: inout Swift.Int32, _ month: inout Swift.Int32, _ day: inout Swift.Int32) throws {
        let dateTime_abi = WindowsFoundation_DateTime.toABI(dateTime)
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.ToUTCYearMonthDay(this, dateTime_abi, &year, &month, &day))
    }
}
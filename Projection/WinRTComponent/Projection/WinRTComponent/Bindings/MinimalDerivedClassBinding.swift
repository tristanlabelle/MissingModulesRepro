// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public class MinimalDerivedClassBinding: WindowsRuntime.ComposableClassBinding {
    public typealias SwiftObject = MinimalDerivedClass
    public typealias ABIStruct = SWRT_WinRTComponent_IMinimalDerivedClass

    public static let typeName = "WinRTComponent.MinimalDerivedClass"

    public static var interfaceID: COM.COMInterfaceID {
        uuidof(ABIStruct.self)
    }

    public static func _wrap(_ reference: consuming ABIReference) -> SwiftObject {
        MinimalDerivedClass(_wrapping: consume reference)
    }
}
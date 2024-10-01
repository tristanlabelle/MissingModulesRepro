// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import UWP_ABI

public class WindowsStorageStreams_BufferBinding: WindowsRuntime.ActivatableClassBinding {
    public typealias SwiftObject = WindowsStorageStreams_Buffer
    public typealias ABIStruct = SWRT_WindowsStorageStreams_IBuffer

    public static let typeName = "Windows.Storage.Streams.Buffer"

    public static var interfaceID: COM.COMInterfaceID {
        uuidof(ABIStruct.self)
    }

    public static func _wrap(_ reference: consuming ABIReference) -> SwiftObject {
        WindowsStorageStreams_Buffer(_wrapping: consume reference)
    }
}
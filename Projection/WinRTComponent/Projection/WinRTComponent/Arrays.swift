// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public enum Arrays {
    // MARK: WinRTComponent.IArraysStatics members

    public static func getLast(_ value: [Swift.String]) throws -> Swift.String {
        try _iarraysStatics.getLast(value)
    }

    public static func make(_ a: Swift.String, _ b: Swift.String) throws -> [Swift.String] {
        try _iarraysStatics.make(a, b)
    }

    public static func output(_ a: Swift.String, _ b: Swift.String, _ array: inout [Swift.String]) throws {
        try _iarraysStatics.output(a, b, &array)
    }

    public static func swapFirstLast(_ array: [Swift.String]) throws {
        try _iarraysStatics.swapFirstLast(array)
    }

    // MARK: Implementation details

    private static var _lazyIActivationFactory: COM.COMReference<SWRT_IActivationFactory>.Optional = .init()

    private static var _iactivationFactory: COM.COMInterop<SWRT_IActivationFactory> {
        get throws {
            try _lazyIActivationFactory.lazyInitInterop {
                try WindowsRuntime.activationFactoryResolver.resolve(runtimeClass: "WinRTComponent.Arrays")
            }
        }
    }

    private static var _lazyIArraysStatics: COM.COMReference<SWRT_WinRTComponent_IArraysStatics>.Optional = .none

    internal static var _iarraysStatics: COM.COMInterop<SWRT_WinRTComponent_IArraysStatics> {
        get throws {
            try _lazyIArraysStatics.lazyInitInterop {
                try _iactivationFactory.queryInterface(uuidof(SWRT_WinRTComponent_IArraysStatics.self)).cast()
            }
        }
    }
}
// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import WinRTComponent_ABI
import UWP

public func uuidof(_: SWRT_WinRTComponent_IStructsStatics.Type) -> COM.COMInterfaceID {
    COMInterfaceID(0xCA436028, 0x4D7D, 0x534C, 0xB772, 0xE1FA6C4101FC)
}

extension COM.COMInterop where ABIStruct == SWRT_WinRTComponent_IStructsStatics {
    public func make(_ int32: Swift.Int32, _ string: Swift.String, _ reference: Swift.Int32?, _ nested: LeafStruct) throws -> Struct {
        var string_abi = try WindowsRuntime.StringBinding.toABI(string)
        defer { WindowsRuntime.StringBinding.release(&string_abi) }
        var reference_abi = try WindowsRuntime.Int32Binding.IReferenceToOptional.toABI(reference)
        defer { WindowsRuntime.Int32Binding.IReferenceToOptional.release(&reference_abi) }
        var nested_abi = try LeafStruct.toABI(nested)
        defer { LeafStruct.release(&nested_abi) }
        var _result: SWRT_WinRTComponent_Struct = .init()
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Make(this, int32, string_abi, reference_abi, nested_abi, &_result))
        return Struct.fromABI(consuming: &_result)
    }

    public func getInt32(_ value: Struct) throws -> Swift.Int32 {
        var value_abi = try Struct.toABI(value)
        defer { Struct.release(&value_abi) }
        var _result: Swift.Int32 = 0
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetInt32(this, value_abi, &_result))
        return _result
    }

    public func getString(_ value: Struct) throws -> Swift.String {
        var value_abi = try Struct.toABI(value)
        defer { Struct.release(&value_abi) }
        var _result: SWRT_HString? = nil
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetString(this, value_abi, &_result))
        return WindowsRuntime.StringBinding.fromABI(consuming: &_result)
    }

    public func getReference(_ value: Struct) throws -> Swift.Int32? {
        var value_abi = try Struct.toABI(value)
        defer { Struct.release(&value_abi) }
        var _result: Swift.UnsafeMutablePointer<SWRT_WindowsFoundation_IReference>? = nil
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetReference(this, value_abi, &_result))
        return WindowsRuntime.Int32Binding.IReferenceToOptional.fromABI(consuming: &_result)
    }

    public func getNested(_ value: Struct) throws -> LeafStruct {
        var value_abi = try Struct.toABI(value)
        defer { Struct.release(&value_abi) }
        var _result: SWRT_WinRTComponent_LeafStruct = .init()
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.GetNested(this, value_abi, &_result))
        return LeafStruct.fromABI(consuming: &_result)
    }

    public func output(_ int32: Swift.Int32, _ string: Swift.String, _ reference: Swift.Int32?, _ nested: LeafStruct, _ value: inout Struct) throws {
        var string_abi = try WindowsRuntime.StringBinding.toABI(string)
        defer { WindowsRuntime.StringBinding.release(&string_abi) }
        var reference_abi = try WindowsRuntime.Int32Binding.IReferenceToOptional.toABI(reference)
        defer { WindowsRuntime.Int32Binding.IReferenceToOptional.release(&reference_abi) }
        var nested_abi = try LeafStruct.toABI(nested)
        defer { LeafStruct.release(&nested_abi) }
        var value_abi: SWRT_WinRTComponent_Struct = .init()
        defer { Struct.release(&value_abi) }
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.Output(this, int32, string_abi, reference_abi, nested_abi, &value_abi))
        value = Struct.fromABI(consuming: &value_abi)
    }

    public func returnRefConstArgument(_ value: Struct) throws -> Struct {
        var value_abi = try Struct.toABI(value)
        defer { Struct.release(&value_abi) }
        var _result: SWRT_WinRTComponent_Struct = .init()
        try WinRTError.fromABI(this.pointee.VirtualTable.pointee.ReturnRefConstArgument(this, &value_abi, &_result))
        return Struct.fromABI(consuming: &_result)
    }
}
// Generated by swift-winrt
// swiftlint:disable all

import WindowsRuntime
import UWP_ABI

/// Exposes an iterator that supports simple iteration over a collection of a specified type.
public typealias WindowsFoundationCollections_IIterable<T> = any WindowsFoundationCollections_IIterableProtocol<T>

/// Exposes an iterator that supports simple iteration over a collection of a specified type.
public protocol WindowsFoundationCollections_IIterableProtocol<T>: IInspectableProtocol {
    associatedtype T

    /// Returns an iterator for the items in the collection.
    /// - Returns: The iterator.
    func first() throws -> WindowsFoundationCollections_IIterator<T>
}
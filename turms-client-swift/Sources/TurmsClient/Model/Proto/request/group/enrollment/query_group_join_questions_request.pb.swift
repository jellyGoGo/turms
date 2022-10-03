// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: request/group/enrollment/query_group_join_questions_request.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
private struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
    struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
    typealias Version = _2
}

public struct QueryGroupJoinQuestionsRequest {
    // SwiftProtobuf.Message conformance is added in an extension below. See the
    // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
    // methods supported on all messages.

    public var groupID: Int64 = 0

    public var withAnswers: Bool = false

    public var lastUpdatedDate: Int64 {
        get { return _lastUpdatedDate ?? 0 }
        set { _lastUpdatedDate = newValue }
    }

    /// Returns true if `lastUpdatedDate` has been explicitly set.
    public var hasLastUpdatedDate: Bool { return _lastUpdatedDate != nil }
    /// Clears the value of `lastUpdatedDate`. Subsequent reads from it will return its default value.
    public mutating func clearLastUpdatedDate() { _lastUpdatedDate = nil }

    public var unknownFields = SwiftProtobuf.UnknownStorage()

    public init() {}

    private var _lastUpdatedDate: Int64?
}

#if swift(>=5.5) && canImport(_Concurrency)
    extension QueryGroupJoinQuestionsRequest: @unchecked Sendable {}
#endif // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

private let _protobuf_package = "im.turms.proto"

extension QueryGroupJoinQuestionsRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
    public static let protoMessageName: String = _protobuf_package + ".QueryGroupJoinQuestionsRequest"
    public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
        1: .standard(proto: "group_id"),
        2: .standard(proto: "with_answers"),
        3: .standard(proto: "last_updated_date"),
    ]

    public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
        while let fieldNumber = try decoder.nextFieldNumber() {
            // The use of inline closures is to circumvent an issue where the compiler
            // allocates stack space for every case branch when no optimizations are
            // enabled. https://github.com/apple/swift-protobuf/issues/1034
            switch fieldNumber {
            case 1: try try decoder.decodeSingularInt64Field(value: &groupID)
            case 2: try try decoder.decodeSingularBoolField(value: &withAnswers)
            case 3: try try decoder.decodeSingularInt64Field(value: &_lastUpdatedDate)
            default: break
            }
        }
    }

    public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
        // The use of inline closures is to circumvent an issue where the compiler
        // allocates stack space for every if/case branch local when no optimizations
        // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
        // https://github.com/apple/swift-protobuf/issues/1182
        if groupID != 0 {
            try visitor.visitSingularInt64Field(value: groupID, fieldNumber: 1)
        }
        if withAnswers != false {
            try visitor.visitSingularBoolField(value: withAnswers, fieldNumber: 2)
        }
        try { if let v = self._lastUpdatedDate {
            try visitor.visitSingularInt64Field(value: v, fieldNumber: 3)
        } }()
        try unknownFields.traverse(visitor: &visitor)
    }

    public static func == (lhs: QueryGroupJoinQuestionsRequest, rhs: QueryGroupJoinQuestionsRequest) -> Bool {
        if lhs.groupID != rhs.groupID { return false }
        if lhs.withAnswers != rhs.withAnswers { return false }
        if lhs._lastUpdatedDate != rhs._lastUpdatedDate { return false }
        if lhs.unknownFields != rhs.unknownFields { return false }
        return true
    }
}

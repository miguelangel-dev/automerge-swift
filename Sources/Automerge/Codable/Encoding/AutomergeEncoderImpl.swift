/// The internal implementation of AutomergeEncoder.
///
/// Instances of the class capture one of the various kinds of schema value types - single value, array, or object.
/// The instance also tracks the dynamic state associated with that value as it encodes types you provide.
final class AutomergeEncoderImpl {
    let userInfo: [CodingUserInfoKey: Any]
    let codingPath: [CodingKey]
    let document: Document
    let schemaStrategy: SchemaStrategy
    let cautiousWrite: Bool

    // indicator that the singleValue has written a value
    var singleValueWritten: Bool = false

    init(
        userInfo: [CodingUserInfoKey: Any],
        codingPath: [CodingKey],
        doc: Document,
        strategy: SchemaStrategy,
        cautiousWrite: Bool
    ) {
        self.userInfo = userInfo
        self.codingPath = codingPath
        document = doc
        schemaStrategy = strategy
        self.cautiousWrite = cautiousWrite
    }
}

// A bit of example code that someone might implement to provide Encodable conformance
// for their own type.
//
//
// extension Coordinate: Encodable {
//    func encode(to encoder: Encoder) throws {
//        var container = encoder.container(keyedBy: CodingKeys.self)
//        try container.encode(latitude, forKey: .latitude)
//        try container.encode(longitude, forKey: .longitude)
//
//        var additionalInfo = container.nestedContainer(keyedBy: AdditionalInfoKeys.self, forKey: .additionalInfo)
//        try additionalInfo.encode(elevation, forKey: .elevation)
//    }
// }

extension AutomergeEncoderImpl: Encoder {
    /// Returns a KeyedCodingContainer that a developer uses when conforming to the Encodable protocol.
    /// - Parameter _: The CodingKey type that this keyed coding container expects when encoding properties.
    ///
    /// This method provides a generic, type-erased container that conforms to KeyedEncodingContainer, allowing
    /// either a developer, or compiler synthesized code, to encode single value properties or create nested containers,
    /// such as an array (nested unkeyed container) or dictionary (nested keyed container) while serializing/encoding
    /// their type.
    func container<Key>(keyedBy _: Key.Type) -> KeyedEncodingContainer<Key> where Key: CodingKey {
        guard singleValueWritten == false else {
            preconditionFailure()
        }

        let container = AutomergeKeyedEncodingContainer<Key>(
            impl: self,
            codingPath: codingPath,
            doc: document
        )
        return KeyedEncodingContainer(container)
    }

    /// Returns an UnkeyedEncodingContainer that a developer uses when conforming to the Encodable protocol.
    ///
    /// This method provides a generic, type-erased container that conforms to UnkeyedEncodingContainer, allowing
    /// either a developer, or compiler synthesized code, to encode single value properties or create nested containers,
    /// such as an array (nested unkeyed container) or dictionary (nested keyed container) while serializing/encoding
    /// their type.
    func unkeyedContainer() -> UnkeyedEncodingContainer {
        guard singleValueWritten == false else {
            preconditionFailure()
        }

        return AutomergeUnkeyedEncodingContainer(
            impl: self,
            codingPath: codingPath,
            doc: document
        )
    }

    /// Returns a SingleValueEncodingContainer that a developer uses when conforming to the Encodable protocol.
    ///
    /// This method provides a generic, type-erased container that conforms to KeyedEncodingContainer, allowing
    /// either a developer, or compiler synthesized code, to encode single value properties or create nested containers,
    /// such as an array (nested unkeyed container) or dictionary (nested keyed container) while serializing/encoding
    /// their type.
    func singleValueContainer() -> SingleValueEncodingContainer {
        guard singleValueWritten == false else {
            preconditionFailure()
        }

        return AutomergeSingleValueEncodingContainer(
            impl: self,
            codingPath: codingPath,
            doc: document
        )
    }
}
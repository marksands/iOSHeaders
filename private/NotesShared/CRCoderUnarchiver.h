//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/CRCoder.h>

@class CRDocument, NSMutableArray, NSMutableOrderedSet, NSUUID;

@interface CRCoderUnarchiver : CRCoder
{
    NSUUID *_replica;
    CRDocument *_document;
    struct Document {
        CDUnknownFunctionPointerType *;
        basic_string_a1f69cfb;
        unsigned int [1];
        int;
        struct VectorTimestamp *;
        struct VectorTimestamp *;
        struct RepeatedPtrField<CRDT::Document_DocObject>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct RepeatedPtrField<std::__1::basic_string<char>>;
        struct VectorTimestamp *;
    } *_currentDocument;
    NSMutableArray *_allocedDocObjects;
    const struct Document_DocObject *_currentDocObjectForDecodingPtr;
    NSMutableOrderedSet *_typeSetForDecoding;
    NSMutableOrderedSet *_keySet;
    NSMutableArray *_uuidArray;
    NSMutableArray *_completionHandlers;
}

+ (id)decodedDocumentFromData:(id)arg1 replica:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMutableArray *uuidArray; // @synthesize uuidArray=_uuidArray;
@property(retain, nonatomic) NSMutableOrderedSet *keySet; // @synthesize keySet=_keySet;
@property(retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding; // @synthesize typeSetForDecoding=_typeSetForDecoding;
@property(nonatomic) const struct Document_DocObject *currentDocObjectForDecodingPtr; // @synthesize currentDocObjectForDecodingPtr=_currentDocObjectForDecodingPtr;
@property(retain, nonatomic) NSMutableArray *allocedDocObjects; // @synthesize allocedDocObjects=_allocedDocObjects;
@property(nonatomic) struct Document *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) CRDocument *document; // @synthesize document=_document;
@property(copy, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (void).cxx_destruct;
- (unsigned long long)indexForKey:(id)arg1;
- (const struct Document_DocObject *)currentDocumentObjectForDecoding;
- (void)sortCompletionHandlers;
- (void)addDecoderCompletionHandler:(CDUnknownBlockType)arg1 dependency:(id)arg2 for:(id)arg3;
- (_Bool)hasDecodableValueForKey:(id)arg1;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (unsigned int)decodeUInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (id)decodeUUIDForKey:(id)arg1;
- (id)decodeStringForKey:(id)arg1;
- (id)decodeObjectForProtobufObjectID:(const struct ObjectID *)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (const struct ObjectID *)currentObjectIDForKey:(id)arg1;
- (id)decodeDocumentFromData:(id)arg1 replica:(id)arg2;
- (id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(_Bool *)arg2;
- (_Bool)willModifySelfInInitForClass:(Class)arg1;

@end


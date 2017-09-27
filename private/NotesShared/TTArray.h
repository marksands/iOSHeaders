//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRCoding.h"
#import "CRDataType.h"
#import "TTMergeableStringDelegate.h"

@class CRDocument, NSArray, NSObject<CRUndoDelegate>, NSString, NSUUID, TTMergeableAttributedString;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType>
{
    CRDocument *_document;
    NSObject<CRUndoDelegate> *_delegate;
    TTMergeableAttributedString *_contents;
}

@property(readonly, nonatomic) TTMergeableAttributedString *contents; // @synthesize contents=_contents;
@property(nonatomic) __weak NSObject<CRUndoDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CRDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (_Bool)wantsUndoCommands;
- (void)addUndoCommand:(id)arg1;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)beginEditing;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(readonly, nonatomic) NSArray *nsArray;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSUUID *replicaUUID;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)textAttachmentAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithContents:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 stringArray:(const struct StringArray *)arg2;
- (id)initWithCRCoder:(id)arg1;
- (void)saveToArchive:(struct StringArray *)arg1;
- (id)initWithArchive:(const struct StringArray *)arg1 andReplicaID:(id)arg2;
- (id)serializeDataFromArchive:(const struct StringArray *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


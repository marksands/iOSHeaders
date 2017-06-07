//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject, TSKTransformableObject>
{
    NSObject<TSDContainerInfo> *mParentInfo;
    TSWPStorage *mContainedStorage;
    struct CGRect mFrameForPrinting;
    _Bool mShrinkTextForPrinting;
}

+ (_Bool)needsObjectUUID;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=mParentInfo;
@property(retain, nonatomic) TSWPStorage *containedStorage; // @synthesize containedStorage=mContainedStorage;
@property(nonatomic) _Bool shrinkTextForPrinting; // @synthesize shrinkTextForPrinting=mShrinkTextForPrinting;
@property(nonatomic) struct CGRect frameForPrinting; // @synthesize frameForPrinting=mFrameForPrinting;
- (id)objectUUIDPath;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (_Bool)shouldHideEmptyBullets;
- (_Bool)textIsLinked;
- (_Bool)textIsVertical;
- (_Bool)autoListTermination;
- (_Bool)autoListRecognition;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)childEnumerator;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (_Bool)isThemeContent;
- (_Bool)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 containedStorage:(id)arg2;
- (void)saveToArchive:(struct NoteArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct NoteArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end


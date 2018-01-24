//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSDContainerInfo.h"
#import "TSDSelectionStatisticsContributor.h"
#import "TSWPFlowInfo.h"
#import "TSWPStorageParent.h"

@class NSArray, NSObject<TSDContainerInfo>, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSUColor, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage *_textStorage;
    NSArray *_textboxes;
    unsigned long long _userInterfaceIdentifier;
}

+ (_Bool)needsObjectUUID;
+ (id)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (id)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (id)p_darkColorForIndex:(unsigned long long)arg1;
+ (id)p_darkColorForColor:(id)arg1;
+ (id)p_colorForIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long userInterfaceIdentifier; // @synthesize userInterfaceIdentifier=_userInterfaceIdentifier;
@property(retain, nonatomic) NSArray *textboxes; // @synthesize textboxes=_textboxes;
@property(retain, nonatomic) TSWPStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (void)pSaveToFlowInfoArchive:(struct FlowInfoArchive *)arg1 archiver:(id)arg2 textBoxes:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromFlowInfoArchive:(const struct FlowInfoArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) _Bool preventsComments;
@property(readonly, nonatomic) _Bool textIsLinked;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (_Bool)isThemeContent;
- (_Bool)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (Class)layoutClass;
- (Class)repClass;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
- (id)infoForSelectionPath:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(_Bool)arg2;
- (unsigned long long)indexOfTextBox:(id)arg1;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property(readonly, nonatomic) TSUColor *userInterfaceFillColor;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 context:(id)arg2;
- (id)extractTextStorage;
- (void)saveWithOnlyLinkedTextBoxes:(id)arg1 archiver:(id)arg2;
- (void)i_uncheckedSetTextboxes:(id)arg1;
- (id)objectUUIDPath;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly) Class superclass;

@end


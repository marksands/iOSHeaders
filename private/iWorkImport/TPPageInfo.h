//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDContainerInfo.h"

@class NSArray, NSObject<TSDContainerInfo>, NSString, TPBodyInfo, TPDocumentRoot, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;

__attribute__((visibility("hidden")))
@interface TPPageInfo : NSObject <TSDContainerInfo>
{
    unsigned long long _pageIndex;
    TPBodyInfo *_bodyInfo;
    TPDocumentRoot *_documentRoot;
    id <TPPageLayoutInfoProvider> _layoutInfoProvider;
}

+ (_Bool)isDocSetupPageIndex:(unsigned long long)arg1;
+ (_Bool)hasBodyInfo;
@property(readonly, nonatomic) __weak id <TPPageLayoutInfoProvider> layoutInfoProvider; // @synthesize layoutInfoProvider=_layoutInfoProvider;
@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(readonly, nonatomic) TPBodyInfo *bodyInfo; // @synthesize bodyInfo=_bodyInfo;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (id)infoForSelectionPath:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (Class)layoutClass;
- (_Bool)isSelectable;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (_Bool)isThemeContent;
- (Class)repClass;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)copyWithContext:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStyledInfo.h>

#import "TSDCompatibilityAwareMediaContainer.h"
#import "TSDInfoWithPathSource.h"
#import "TSDMixing.h"
#import "TSDReducibleImageContainer.h"
#import "TSKSearchable.h"

@class NSObject<TSDContainerInfo>, NSString, TSDFill, TSDInfoGeometry, TSDLineEnd, TSDPathSource, TSDShapeStyle, TSPObject<TSDOwningAttachment>;

__attribute__((visibility("hidden")))
@interface TSDShapeInfo : TSDStyledInfo <TSDReducibleImageContainer, TSDMixing, TSKSearchable, TSDInfoWithPathSource, TSDCompatibilityAwareMediaContainer>
{
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)style;
- (void).cxx_destruct;
- (_Bool)isOpenPath;
- (_Bool)isLine;
- (_Bool)shouldFlipLineEndsForStyle:(id)arg1 isStyleTailEndOnLeft:(int)arg2;
- (_Bool)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (id)objectForProperty:(int)arg1;
- (_Bool)pathIsOpen;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)datasForReplacingMediaContentsWithAssociatedHints;
- (_Bool)isValidShapeToUnarchive;
- (void)setValuesForProperties:(id)arg1;
@property(copy, nonatomic) TSDFill *fill;
@property(copy, nonatomic) TSDLineEnd *tailLineEnd;
@property(copy, nonatomic) TSDLineEnd *headLineEnd;
- (void)setStyle:(id)arg1;
- (_Bool)allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property(readonly, nonatomic) _Bool supportsShrinkTextToFit;
@property(readonly, nonatomic) _Bool supportsTextInset;
@property(readonly, nonatomic) TSDShapeStyle *shapeStyle;
- (Class)styleClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (void)p_correctNearZeroWidthLines;
- (void)p_correctLineSegmentGeometry;
- (void)saveToArchive:(struct ShapeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (int)elementKind;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(readonly) Class superclass;

@end


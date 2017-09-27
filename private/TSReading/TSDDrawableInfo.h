//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import "TSDChangeableInfo.h"
#import "TSKDocumentObject.h"
#import "TSKSearchable.h"
#import "TSKTransformableObject.h"
#import "TSSPropertySource.h"

@class NSMutableDictionary, NSObject<TSDContainerInfo>, NSString, NSURL, TSDDefaultPartitioner, TSDExteriorTextWrap, TSDInfoGeometry, TSPLazyReference, TSPObject<TSDOwningAttachment>, TSSPropertySetChangeDetails;

@interface TSDDrawableInfo : TSPObject <TSSPropertySource, TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable>
{
    TSDInfoGeometry *mGeometry;
    NSObject<TSDContainerInfo> *mParentInfo;
    TSPLazyReference *mParentInfoReference;
    _Bool mLocked;
    _Bool mAspectRatioLocked;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSPObject<TSDOwningAttachment> *mOwningAttachment;
    TSDDefaultPartitioner *mDefaultPartitioner;
    NSURL *mHyperlinkURL;
    id <TSDAnnotationHosting> mComment;
    NSString *mAccessibilityDescription;
    NSMutableDictionary *mAccessibilityDescriptions;
}

+ (_Bool)canPartition;
+ (void)setShouldPartitionByDefault:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *accessibilityDescriptions; // @synthesize accessibilityDescriptions=mAccessibilityDescriptions;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=mAccessibilityDescription;
@property(nonatomic) _Bool aspectRatioLocked; // @synthesize aspectRatioLocked=mAspectRatioLocked;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=mLocked;
@property(copy, nonatomic) NSURL *hyperlinkURL; // @synthesize hyperlinkURL=mHyperlinkURL;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @synthesize owningAttachment=mOwningAttachment;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=mParentInfo;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform)arg1 inBounds:(struct CGRect)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)containingGroup;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (id)descriptionForPasteboard;
- (_Bool)reverseChunkingIsSupported;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)animationFilters;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)canChangeWrapType;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) Class editorClass;
- (void)coalesceChanges:(id)arg1;
- (id)endCollectingChanges;
- (void)willChangeProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool supportsAttachedComments;
- (_Bool)canAnchor;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic, getter=isLockable) _Bool lockable;
- (id)presetKind;
@property(readonly, nonatomic) _Bool supportsHyperlinks;
- (id)partitioner;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic) _Bool isUserModifiable;
@property(copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
- (struct CGAffineTransform)transformInRoot;
- (struct CGAffineTransform)fullTransformInRoot;
- (struct CGAffineTransform)computeFullTransform;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool canSizeBeChangedIncrementally;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(copy, nonatomic) id <TSDAnnotationHosting> comment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (int)elementKind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


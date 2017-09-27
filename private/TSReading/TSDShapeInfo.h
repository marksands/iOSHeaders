//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDStyledInfo.h>

#import "TSDMixing.h"
#import "TSDReducableInfo.h"
#import "TSKSearchable.h"
#import "TSSThemedObject.h"

@class NSString, TSDFill, TSDLineEnd, TSDPathSource, TSDShapeStyle;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable>
{
    TSDPathSource *mPathSource;
    TSDShapeStyle *mStyle;
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
}

@property(retain, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)style;
- (id)objectForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)animationFilters;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (void)setValuesForProperties:(id)arg1;
@property(copy, nonatomic) TSDFill *fill;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) _Bool supportsShrinkTextToFit;
@property(readonly, nonatomic) _Bool supportsTextInset;
- (void)setGeometry:(id)arg1;
@property(readonly, nonatomic) TSDShapeStyle *shapeStyle;
- (Class)styleClass;
- (Class)repClass;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
@property(retain, nonatomic) TSDLineEnd *tailLineEnd;
@property(retain, nonatomic) TSDLineEnd *headLineEnd;
- (int)elementKind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


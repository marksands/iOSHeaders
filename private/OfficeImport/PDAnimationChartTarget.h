//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationChartTarget : PDAnimationShapeTarget
{
    _Bool mHasCatagoryIndex;
    int mCatagoryIndex;
    _Bool mHasSeriesIndex;
    int mSeriesIndex;
    _Bool mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (void)setChartSubElementType:(int)arg1;
- (int)chartSubElementType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBuildStep:(int)arg1;
- (int)buildStep;
- (_Bool)hasBuildStep;
- (void)setSeriesIndex:(int)arg1;
- (int)seriesIndex;
- (_Bool)hasSeriesIndex;
- (void)setCatagoryIndex:(int)arg1;
- (int)catagoryIndex;
- (_Bool)hasCatagoryIndex;
- (id)init;

@end


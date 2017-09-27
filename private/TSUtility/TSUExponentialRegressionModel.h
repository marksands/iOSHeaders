//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSUtility/TSURegressionModel.h>

@class NSMutableArray;

@interface TSUExponentialRegressionModel : TSURegressionModel
{
    double *mCoefficients;
    int mNumCoefficients;
    _Bool mAffine;
    double mIntercept;
    double mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray *mSuperscriptRangesArray;
}

- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;
- (int)numSuperscriptRanges;
- (id)getEquationStringAndBuildSuperscriptRangesArray;
- (double)estimateForX:(double *)arg1;
- (double)rSquared;
- (double)coefficientAtIndex:(int)arg1;
- (int)numCoefficients;
- (int)regressionType;
- (void)dealloc;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;
- (id)initWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 makeAffine:(_Bool)arg5 desiredIntercept:(double)arg6;

@end


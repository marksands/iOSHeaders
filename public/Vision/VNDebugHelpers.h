//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VNDebugHelpers : NSObject
{
}

+ (_Bool)doesAreaOverlapBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2 withOverlapRatioGreaterThan:(double)arg3;
+ (_Bool)doesAreaOverlapSignificantlyBetweenRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;
+ (float)computeNormalizedCosineDistanceOfFaceprint:(id)arg1 toFaceprint:(id)arg2;

@end


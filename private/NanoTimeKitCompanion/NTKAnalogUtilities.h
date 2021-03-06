//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTKAnalogUtilities : NSObject
{
}

+ (void)colorizeLabels:(id)arg1 color:(id)arg2;
+ (void)updateNodes:(id)arg1 forDevice:(id)arg2 offset:(unsigned long long)arg3 center:(struct CGPoint)arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(_Bool)arg8 round:(_Bool)arg9;
+ (void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3;
+ (void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3;
+ (id)labelsForDevice:(id)arg1 faceStyle:(long long)arg2 count:(unsigned int)arg3 start:(unsigned int)arg4 multiple:(unsigned int)arg5 repeat:(unsigned int)arg6 fontSize:(double)arg7 radius:(double)arg8 paddedWithZeroes:(_Bool)arg9;
+ (id)labelsForDevice:(id)arg1 withCount:(unsigned int)arg2 start:(unsigned int)arg3 multiple:(unsigned int)arg4 repeat:(unsigned int)arg5 font:(long long)arg6 modifier:(id)arg7 center:(struct CGPoint)arg8 radius:(double)arg9 paddedWithZeros:(_Bool)arg10 filter:(_Bool)arg11;
+ (struct CGSize)dialSizeForDevice:(id)arg1;
+ (struct CGSize)sceneSizeForDevice:(id)arg1;
+ (void)preloadTexturesForDevice:(id)arg1;
+ (_Bool)shouldPreloadTextures;
+ (id)circularMaskShader;
+ (id)artShader;

@end


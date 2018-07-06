//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUAutoCalculator.h"

@interface PIPortraitAutoCalculator : NUAutoCalculator
{
}

+ (id)portraitInfoDictionaryFromCameraMetadata:(id)arg1;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 apertureValues:(id)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 apertureValues:(id)arg4;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 apertureValues:(id)arg4;
+ (_Bool)canApplyPortraitEffectsWithMetadata:(id)arg1;
+ (id)focusRectDictionaryFromRect:(struct CGRect)arg1;
+ (id)focusRectDictionaryFromMetadata:(id)arg1;
+ (struct CGPoint)convertFacePoint:(struct CGPoint)arg1 toImagePointWithFaceRect:(struct CGRect)arg2 orientation:(long long)arg3;
+     // Error parsing type: {CGPoint=dd}32@0:8r^16Q24, name: averagePoints:pointCount:
- (void)_calculateWithImageProperties:(id)arg1 apertureValues:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)calculate:(CDUnknownBlockType)arg1;

@end


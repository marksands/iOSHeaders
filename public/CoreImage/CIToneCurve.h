//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import "_CIFilterProperties.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIVector *inputPoint2;
    CIVector *inputPoint3;
    CIVector *inputPoint4;
    CIImage *_curveImage;
}

+ (void)splineCurveTable:(double *)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint *)arg4;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(_Bool)arg2;
+ (id)customAttributes;
@property(copy, nonatomic) CIVector *inputPoint4; // @synthesize inputPoint4;
@property(copy, nonatomic) CIVector *inputPoint3; // @synthesize inputPoint3;
@property(copy, nonatomic) CIVector *inputPoint2; // @synthesize inputPoint2;
@property(copy, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(copy, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernel16;
- (void)dealloc;

@end


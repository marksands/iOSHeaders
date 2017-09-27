//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBicubicScaleTransform : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
    NSNumber *inputB;
    NSNumber *inputC;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputC; // @synthesize inputC;
@property(retain, nonatomic) NSNumber *inputB; // @synthesize inputB;
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;
- (struct vec2)_scale;

@end


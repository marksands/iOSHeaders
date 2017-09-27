//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorControls : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end


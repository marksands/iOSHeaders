//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter
{
    CIImage *inputImage;
    CIImage *inputGradientImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputGradientImage; // @synthesize inputGradientImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end


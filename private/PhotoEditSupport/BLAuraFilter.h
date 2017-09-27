//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

@interface BLAuraFilter : CIFilter
{
    _Bool _needsReprocess;
    float _lastAmount;
    float _lastSaturationHighPoint;
    long long _lastVersion;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputSaturationHighPoint;
    NSNumber *_inputVersion;
    CIFilter *_colorCubeFilter;
}

@property(retain, nonatomic) CIFilter *colorCubeFilter; // @synthesize colorCubeFilter=_colorCubeFilter;
@property(copy, nonatomic) NSNumber *inputVersion; // @synthesize inputVersion=_inputVersion;
@property(copy, nonatomic) NSNumber *inputSaturationHighPoint; // @synthesize inputSaturationHighPoint=_inputSaturationHighPoint;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDefaults;
- (id)init;

@end


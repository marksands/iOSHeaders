//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface CIPortraitToothMask : CIFilter
{
    CIImage *_inputImage;
    NSDictionary *_inputFaceLandmarks;
}

@property(retain, nonatomic) NSDictionary *inputFaceLandmarks; // @synthesize inputFaceLandmarks=_inputFaceLandmarks;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;

@end


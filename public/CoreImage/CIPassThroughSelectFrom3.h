//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPassThroughSelectFrom3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputImage1;
    CIImage *inputImage2;
    NSNumber *inputSelected;
}

@property(copy, nonatomic) NSNumber *inputSelected; // @synthesize inputSelected;
@property(retain) CIImage *inputImage2; // @synthesize inputImage2;
@property(retain) CIImage *inputImage1; // @synthesize inputImage1;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PaperWash : CIFilter
{
    CIImage *_inputImage;
}

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end


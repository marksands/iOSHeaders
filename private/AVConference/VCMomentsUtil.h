//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMomentsUtil : NSObject
{
}

+ (_Bool)pixelBufferPool:(struct __CVPixelBufferPool *)arg1 matchesWidth:(int)arg2 height:(int)arg3;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;
+ (struct OpaqueVTPixelTransferSession *)setupTransferSession:(struct OpaqueVTPixelTransferSession *)arg1;
+ (struct __CVBuffer *)resizeFrame:(struct __CVBuffer *)arg1 transferSession:(struct OpaqueVTPixelTransferSession *)arg2 bufferPool:(struct __CVPixelBufferPool *)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCVideoFrameUtil : NSObject
{
}

+ (CDStruct_1b6d18a9)CMTimeFromXPCDictionary:(id)arg1;
+ (struct __CVBuffer *)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(_Bool)arg2;
+ (id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3;

@end


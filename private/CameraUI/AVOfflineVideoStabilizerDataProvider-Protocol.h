//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOfflineVideoStabilizer, NSDictionary;

@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
- (NSDictionary *)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
- (struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
@end


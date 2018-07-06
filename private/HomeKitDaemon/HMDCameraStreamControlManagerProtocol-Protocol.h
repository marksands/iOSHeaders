//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDCameraStreamMetrics, NSDictionary, NSError, NSNumber, NSString;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
- (void)remoteSetup:(NSString *)arg1;
- (void)updateAudioVolume:(NSNumber *)arg1 callback:(void (^)(_Bool))arg2;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)stopStream:(NSError *)arg1;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)negotiateStream;
@end


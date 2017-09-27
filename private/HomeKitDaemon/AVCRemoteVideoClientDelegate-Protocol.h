//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCRemoteVideoClient, VideoAttributes;

@protocol AVCRemoteVideoClientDelegate <NSObject>

@optional
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteScreenAttributesDidChange:(VideoAttributes *)arg2;
- (void)remoteVideoServerDidDie:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClientDidReceiveLastFrame:(AVCRemoteVideoClient *)arg1;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(AVCRemoteVideoClient *)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(AVCRemoteVideoClient *)arg1;
@end


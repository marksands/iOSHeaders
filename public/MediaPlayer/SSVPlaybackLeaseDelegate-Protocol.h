//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SSVPlaybackLease, SSVPlaybackLeaseResponse;

@protocol SSVPlaybackLeaseDelegate <NSObject>

@optional
- (void)playbackLeaseAutomaticRefreshDidFinish:(SSVPlaybackLease *)arg1;
- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFailWithError:(NSError *)arg2;
- (void)playbackLease:(SSVPlaybackLease *)arg1 didEndWithReasonType:(unsigned long long)arg2;
- (void)playbackLeaseDidEnd:(SSVPlaybackLease *)arg1;
- (void)playbackLease:(SSVPlaybackLease *)arg1 automaticRefreshDidFinishWithResponse:(SSVPlaybackLeaseResponse *)arg2 error:(NSError *)arg3;
@end


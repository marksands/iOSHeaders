//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMInternalDeviceActivity, NSError;

@protocol FMDeviceActivityClientInterface <NSObject>
- (void)activityDiscoveryDidFail:(NSError *)arg1;
- (void)didDiscoverActivity:(FMInternalDeviceActivity *)arg1;
@end


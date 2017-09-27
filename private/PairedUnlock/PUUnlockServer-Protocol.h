//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol PUUnlockServer <NSObject>
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)queryRemoteDeviceState:(void (^)(PURemoteDeviceState *, NSError *))arg1;
- (void)didCompleteRemoteAction:(_Bool)arg1 error:(NSError *)arg2;
- (void)requestRemoteDeviceRemoveLockout;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(NSString *)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(NSString *)arg1;
- (void)checkIn;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUnlockClientProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id <SFAutoUnlockManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)enableBluetoothAndWiFi;
+ (_Bool)bluetoothAndWiFiEnabled;
+ (_Bool)autoUnlockEnabled:(unsigned int)arg1;
+ (_Bool)autoUnlockSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) id <SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)authPromptInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)failedUnlockWithError:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)enabledDevice:(id)arg1;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlock;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)repairCloudPairing;
@property(readonly, nonatomic) double spinnerDelay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


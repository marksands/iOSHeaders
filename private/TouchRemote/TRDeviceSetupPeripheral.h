//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TRDeviceSetupPeripheral : NSObject
{
    _Bool _performingSetup;
    _Bool _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
    id <TRDeviceSetupPeripheralDelegate> _delegate;
    CDUnknownBlockType _pendingSendDataHandler;
    NSString *_authenticatediTunesStoreID;
}

@property(copy, nonatomic) NSString *authenticatediTunesStoreID; // @synthesize authenticatediTunesStoreID=_authenticatediTunesStoreID;
@property(copy) CDUnknownBlockType pendingSendDataHandler; // @synthesize pendingSendDataHandler=_pendingSendDataHandler;
@property(nonatomic) __weak id <TRDeviceSetupPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_legacyAuthenticateWithUserAgent:(id)arg1 deviceGUID:(id)arg2 accountID:(id)arg3 password:(id)arg4 attemptCount:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_sendAction:(id)arg1 sendDataHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)_setupDidFailWithError:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_finishSetupWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_setUpWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_cancelAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_startAuthenticationWithReceivedAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_authenticateWithAction:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_legacyAuthenticateWithAction:(id)arg1 attemptCount:(unsigned long long)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)_didTapWithSendDataHandler:(CDUnknownBlockType)arg1;
- (void)_didReceiveData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)_didDisconnect;
- (void)cancelSetupForTimeout;
- (void)cancelSetupForStateChange;
- (void)cancelPreparingForSetup;
- (_Bool)performSetupAndReturnError:(id *)arg1;
- (id)init;

@end


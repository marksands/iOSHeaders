//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, NSString;

@interface SFBluetoothPairingSession : NSObject
{
    char _btAddrStr[32];
    _Bool _btConnecting;
    struct BTDeviceImpl *_btDevice;
    struct BTPairingAgentImpl *_btPairingAgent;
    _Bool _btPairingAgentStarted;
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAddedServiceCallback;
    _Bool _btSessionAttaching;
    _Bool _btStarted;
    _Bool _invalidateCalled;
    unsigned int _retryCount;
    _Bool _retryOnDetach;
    NSObject<OS_dispatch_source> *_retryTimer;
    double _startTime;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_os_transaction> *_transaction;
    struct LogCategory *_ucat;
    CDUnknownBlockType _completionHandler;
    NSString *_deviceAddress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_btDeletePairingAndRetry;
- (void)_btEnsureStopped;
- (int)_btEnsureStarted;
- (void)_completed:(int)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end


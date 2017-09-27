//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SFXPCInterface.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSXPCConnection;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _legacy;
    _Bool _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    _Bool _overrideScreenOff;
    _Bool _scanCache;
    _Bool _targetUserSession;
    unsigned int _changeFlags;
    NSSet *_deviceFilter;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    unsigned long long _discoveryFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _fastScanMode;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_purpose;
    long long _rssiThreshold;
    long long _scanRate;
    long long _scanState;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    long long _scanRateOverride;
    CDUnknownBlockType _scanStateChangedHandler;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType scanStateChangedHandler; // @synthesize scanStateChangedHandler=_scanStateChangedHandler;
@property(nonatomic) long long scanRateOverride; // @synthesize scanRateOverride=_scanRateOverride;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(readonly, nonatomic) long long scanState; // @synthesize scanState=_scanState;
@property(nonatomic) long long scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) _Bool scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) long long rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(copy, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(nonatomic) _Bool overrideScreenOff; // @synthesize overrideScreenOff=_overrideScreenOff;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(nonatomic) long long fastScanMode; // @synthesize fastScanMode=_fastScanMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned long long discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSSet *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void).cxx_destruct;
- (void)deviceDiscoveryScanStateChanged:(long long)arg1;
- (void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryLostDevice:(id)arg1;
- (void)deviceDiscoveryFoundDevice:(id)arg1;
- (void)_timeoutTimerFired;
- (void)_startTimeoutIfNeeded;
- (void)_retryConsole;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)fastScanCancel:(id)arg1;
- (void)fastScanTrigger:(id)arg1;
- (int)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


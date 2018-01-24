//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SFDevice, SFDeviceOperationHomeKitSetup, SFDeviceOperationWiFiSetup, SFSession, TROperationQueue, TRSession, UIViewController;

@interface SFDeviceRepairSession : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    int _pairVerifyState;
    int _getProblemsState;
    unsigned long long _problemFlags;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    _Bool _wifiSetupEnabled;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    int _finishState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_idsIdentifier;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    unsigned long long _triggerMs;
}

@property(nonatomic) unsigned long long triggerMs; // @synthesize triggerMs=_triggerMs;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (int)_runFinish;
- (int)_runHomeKitSetup;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runWiFiSetup;
- (int)_runGetProblems;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runPreflightWiFi;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end


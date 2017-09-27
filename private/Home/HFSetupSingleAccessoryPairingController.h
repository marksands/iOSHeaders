//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFHomeObserver.h"
#import "HFSetupPairingController.h"

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HMHome, HMSetupAccessoryDescription, NAFuture, NSDate, NSHashTable, NSSet, NSString;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController>
{
    HFSetupAccessoryResult *_setupResult;
    HFDiscoveredAccessory *_discoveredAccessoryToPair;
    id <HMSetupRemoteService> _setupRemoteService;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    unsigned long long _phase;
    NSString *_statusTitle;
    NSString *_statusDescription;
    HMHome *_home;
    NSSet *_pairedAccessories;
    NSHashTable *_pairingObservers;
    NAFuture *_pairingFuture;
    NSDate *_phaseStartDate;
}

+ (_Bool)supportsSetupPayloadRetry;
@property(retain, nonatomic) NSDate *phaseStartDate; // @synthesize phaseStartDate=_phaseStartDate;
@property(retain, nonatomic) NAFuture *pairingFuture; // @synthesize pairingFuture=_pairingFuture;
@property(retain, nonatomic) NSHashTable *pairingObservers; // @synthesize pairingObservers=_pairingObservers;
@property(retain, nonatomic) NSSet *pairedAccessories; // @synthesize pairedAccessories=_pairedAccessories;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(retain, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property(nonatomic) __weak id <HMSetupRemoteService> setupRemoteService; // @synthesize setupRemoteService=_setupRemoteService;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair; // @synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult; // @synthesize setupResult=_setupResult;
- (void).cxx_destruct;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2;
- (void)_finishPairingWithDiscoveredAccessory:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)_updateStatusTextAndNotifyDelegate:(_Bool)arg1;
- (void)_tryPairing;
- (id)cancel;
- (void)startWithHome:(id)arg1;
- (void)removePairingObserver:(id)arg1;
- (void)addPairingObserver:(id)arg1;
- (id)initWithDiscoveredAccessory:(id)arg1 setupRemoteService:(id)arg2 setupAccessoryDescription:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


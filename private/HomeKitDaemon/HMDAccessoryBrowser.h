//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HAPAccessoryServerBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HAPAccessoryServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDAirPlayBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWatchSystemStateDelegate-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserIP, HAPAccessoryServerBrowserRelay, HMDAirPlayBrowser, HMDHomeManager, HMFMessageDispatcher, HMFTimer, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDAirPlayBrowserDelegate, HMDWatchSystemStateDelegate>
{
    NSMutableSet *_unpairedHAPAccessories;
    NSMutableSet *_unassociatedAirPlayAccessories;
    _Bool _appIsInForeground;
    _Bool _activeSiriCommand;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    HMFMessageDispatcher *_messageDispatcher;
    unsigned long long _generationCounter;
    NSMutableSet *_browsingXPCConnections;
    HMDHomeManager *_homeManager;
    NSMapTable *_delegates;
    NSMutableArray *_accessoryServerBrowsers;
    HAPAccessoryServerBrowserIP *_ipAccessoryServerBrowser;
    HAPAccessoryServerBrowserBTLE *_btleAccessoryServerBrowser;
    HAPAccessoryServerBrowserRelay *_relayAccessoryServerBrowser;
    HMDAirPlayBrowser *_airPlayBrowser;
    HMFTimer *_stopReprovisioningTimer;
    NSString *_identifierOfAccessoryBeingReprovisioned;
    NSMutableSet *_identifiersOfBTLEPairedAccessories;
    NSObject<OS_dispatch_source> *_reachabilityTimerForBTLE;
    NSMutableSet *_identifiersOfPairedAccessories;
    NSMutableSet *_identifiersOfAirPlayPairedAccessories;
    NSMutableArray *_currentlyPairingAccessories;
    NSHashTable *_tombstonedHAPAccessoryServers;
    NSHashTable *_discoveringBLEAccessoryServerIdentifiers;
    NSMutableSet *_discoveredAccessoryServerIdentifiers;
}

@property(retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers; // @synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers; // @synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers;
@property(readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers; // @synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers;
@property(retain, nonatomic) NSMutableArray *currentlyPairingAccessories; // @synthesize currentlyPairingAccessories=_currentlyPairingAccessories;
@property(retain, nonatomic) NSMutableSet *identifiersOfAirPlayPairedAccessories; // @synthesize identifiersOfAirPlayPairedAccessories=_identifiersOfAirPlayPairedAccessories;
@property(retain, nonatomic) NSMutableSet *identifiersOfPairedAccessories; // @synthesize identifiersOfPairedAccessories=_identifiersOfPairedAccessories;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // @synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE;
@property(retain, nonatomic) NSMutableSet *identifiersOfBTLEPairedAccessories; // @synthesize identifiersOfBTLEPairedAccessories=_identifiersOfBTLEPairedAccessories;
@property(retain, nonatomic) NSString *identifierOfAccessoryBeingReprovisioned; // @synthesize identifierOfAccessoryBeingReprovisioned=_identifierOfAccessoryBeingReprovisioned;
@property(nonatomic) _Bool activeSiriCommand; // @synthesize activeSiriCommand=_activeSiriCommand;
@property(nonatomic) _Bool appIsInForeground; // @synthesize appIsInForeground=_appIsInForeground;
@property(retain, nonatomic) HMFTimer *stopReprovisioningTimer; // @synthesize stopReprovisioningTimer=_stopReprovisioningTimer;
@property(retain, nonatomic) HMDAirPlayBrowser *airPlayBrowser; // @synthesize airPlayBrowser=_airPlayBrowser;
@property(readonly, nonatomic) HAPAccessoryServerBrowserRelay *relayAccessoryServerBrowser; // @synthesize relayAccessoryServerBrowser=_relayAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // @synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser;
@property(retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // @synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser;
@property(retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // @synthesize accessoryServerBrowsers=_accessoryServerBrowsers;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableSet *browsingXPCConnections; // @synthesize browsingXPCConnections=_browsingXPCConnections;
@property(nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (id)dumpRegisteredPairedAccessories;
- (id)dumpUnassociatedAccessories;
- (void)browser:(id)arg1 didUpdateEndpoint:(id)arg2;
- (void)browser:(id)arg1 didRemoveAdvertisement:(id)arg2;
- (void)browser:(id)arg1 didAddAdvertisement:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)accessoryServerDidUpdateStateNumber:(id)arg1;
- (void)accessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(_Bool)arg4;
- (void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_checkDelegatesofBlockedAccessoryServer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2;
- (void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;
- (void)_notifyDelegatesToRetrieveAccessoryServers:(id)arg1;
- (void)_notifyDelegatesOfReachabilityChange:(_Bool)arg1 forBTLEAccessories:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didChangeReachability:(_Bool)arg2 forAccessoryServerWithIdentifier:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)_notifyDelegatesOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
- (void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2;
- (void)_startPairingInterruptionTimer:(id)arg1;
- (void)_stopReconfirmTimer:(id)arg1;
- (void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
- (void)_notifyDelegatesOfWACCompletionForAccessoryServerWithIdentifier:(id)arg1 error:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(_Bool)arg3 stateNumber:(id)arg4;
- (void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(_Bool)arg5;
- (void)_notifyDelegatesOfNewPairedAccessoryServer:(id)arg1 stateChanged:(_Bool)arg2 stateNumber:(id)arg3;
- (void)_resurrectAccessoryServer:(id)arg1;
- (void)_discoverAccessories:(id)arg1;
- (void)_tombstoneAccessoryServer:(id)arg1;
- (void)_notifyDelegatesOfTombstonedAccessoryServer:(id)arg1;
- (_Bool)_shouldAccessoryServerBeTombstoned:(id)arg1;
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1;
- (_Bool)_isAccessoryServerTombstoned:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2;
- (void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2;
- (void)_pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_checkDelegatesOfAccessoryWithSetupID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;
- (void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)_handleSetupCodeAvailable:(id)arg1;
- (void)_sendRemovedNewAccessoryData:(id)arg1;
- (void)_sendAddedNewAccessoryData:(id)arg1;
- (void)_sendNewAccessoryData:(id)arg1 messageName:(id)arg2;
- (void)_notifyDelegatesOfNewAccessory:(id)arg1;
- (id)_unpairedAccessoryForServer:(id)arg1;
- (id)_unpairedAccessoryWithServerIdentifier:(id)arg1;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (void)_setBTLEPowerChangeCompletionHandler;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)handleAppTermination:(id)arg1;
- (void)_cancelCurrentlyPairingAccessories:(id)arg1;
- (void)_registerForMessages;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)resurrectAccessoryServer:(id)arg1;
- (void)tombstoneAccessoryServer:(id)arg1;
- (void)discoverAccessories:(id)arg1;
- (void)_stopDiscoveringAccessoriesWithForce:(_Bool)arg1;
- (void)_startDiscoveringAccessories;
- (void)_startDiscoveringPairedAccessories;
- (void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (void)_stopReprovisioningTimerHandler;
- (_Bool)_isBrowsingAllowed;
- (void)_startOrStopAccessoryDiscovery;
- (void)_stopBtleAccessoryReachabilityProbeTimer;
- (void)_btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)handleSetupCodeAvailable:(id)arg1;
- (void)pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)discoveredAccessoryServers;
- (void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;
- (void)deregisterPairedAccessory:(id)arg1;
- (void)registerPairedAccessory:(id)arg1 btleTransport:(_Bool)arg2 airPlay:(_Bool)arg3;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (void)_removePairingInformationForUnpairedAccessory:(id)arg1;
- (void)handleRemovedUnpairedHAPAccessory:(id)arg1;
- (void)removeUnpairedHAPAccessory:(id)arg1;
- (void)addUnpairedHAPAccessory:(id)arg1;
- (void)removeUnassociatedAirPlayAccessory:(id)arg1;
- (void)addUnassociatedAirPlayAccessory:(id)arg1;
- (id)_pairingInformationForUnpairedAccessory:(id)arg1;
- (id)_unpairedAccessoryMatchingPairingInfo:(id)arg1;
- (id)unpairedAccessoryWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *unpairedHAPAccessories;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isBrowsingAllowed;
- (void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;
- (void)homeLocationChangeNotification:(id)arg1;
- (void)handleNoActiveSiriCommand:(id)arg1;
- (void)handleActiveSiriCommand:(id)arg1;
- (void)_handleActiveAppOrSiriCommand;
- (void)handleNoActiveHomeKitApp:(id)arg1;
- (void)_handleNoActiveHomeKitAppOrSiriCommand;
- (void)handleHomeKitAppInForeground:(id)arg1;
- (void)_reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)activate:(_Bool)arg1;
- (void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringPairedAccessories;
- (void)resetConfiguration;
- (void)handleRemovedAccessoryAdvertisement:(id)arg1;
- (void)handleAddedAccessoryAdvertisement:(id)arg1;
- (void)_notifyDelegatesOfReachability:(_Bool)arg1 forAccessoryWithIdentifier:(id)arg2;
- (void)_sendNewAccessoryData:(id)arg1 added:(_Bool)arg2;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleAddedAccessory:(id)arg1;
@property(readonly, copy) NSArray *unassociatedAccessories;
- (void)addUnassociatedAccessory:(id)arg1;
@property(readonly, nonatomic) NSArray *unassociatedAirPlayAccessories;
- (void)dealloc;
- (void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)configureBTLEQoSLimits:(unsigned long long)arg1;
- (void)configureAccessory:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(_Bool)arg3;
- (void)configureWithHomeManager:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


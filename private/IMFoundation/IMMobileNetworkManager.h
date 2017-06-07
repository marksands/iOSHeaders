//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/IMNetworkManager.h>

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : IMNetworkManager
{
    _Bool _registered;
    _Bool _shouldBringUpDataContext;
    _Bool _dataContextActive;
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSMutableSet *_cellAutoAssociationTokens;
    void *__suspendDormancyAssertion;
}

@property(nonatomic) void *_suspendDormancyAssertion; // @synthesize _suspendDormancyAssertion=__suspendDormancyAssertion;
@property(nonatomic) _Bool dataContextActive; // @synthesize dataContextActive=_dataContextActive;
@property(nonatomic) _Bool shouldBringUpDataContext; // @synthesize shouldBringUpDataContext=_shouldBringUpDataContext;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)setDataConnectionActive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isDataConnectionActive;
@property(readonly, nonatomic) _Bool isDataSwitchEnabled;
@property(readonly, nonatomic) _Bool hasLTEDataConnection;
@property(readonly, nonatomic) _Bool has2GDataConnection;
@property(readonly, nonatomic) _Bool dataConnectionExists;
@property(readonly, nonatomic) _Bool inValidSIMState;
- (void)showSIMUnlock;
@property(readonly, nonatomic) _Bool isSIMLocked;
@property(readonly, nonatomic) _Bool isSIMRemoved;
@property(readonly, nonatomic) _Bool requiresSIMInserted;
- (void)_makeDataConnectionAvailable:(_Bool)arg1;
- (_Bool)_isDataConnectionAvailable;
- (void)_releaseCTServerConnection;
- (void)_createCTServerConnection;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateCellular;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) _Bool autoAssociateWiFi;
@property(readonly, nonatomic) _Bool isWiFiCaptive;
@property(readonly, nonatomic) _Bool isWiFiEnabled;
@property(readonly, nonatomic) _Bool isWiFiAssociated;
@property(readonly, nonatomic) _Bool isWiFiUsable;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) _Bool willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) _Bool willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) _Bool isHostingWiFiHotSpot;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
@property(readonly, nonatomic) _Bool disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(_Bool)arg1;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_adjustCellularAutoAssociation;
@property(readonly, nonatomic) _Bool isAirplaneModeEnabled;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;

@end


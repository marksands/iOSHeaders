//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSYInitialSyncStateObserverDelegate.h"
#import "PSYSyncCoordinatorDelegate.h"
#import "PSYSyncSessionObserverDelegate.h"

@class NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator, PSYSyncSessionObserver;

@interface BLTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate>
{
    _Bool _clientSyncComplete;
    PSYSyncCoordinator *_pairedSyncCoordinator;
    PSYInitialSyncStateObserver *_pairedInitialSyncObserver;
    PSYSyncSessionObserver *_pairedSyncObserver;
}

+ (void)reportProgress:(double)arg1;
+ (void)syncDidComplete;
+ (id)syncState;
@property(nonatomic) _Bool clientSyncComplete; // @synthesize clientSyncComplete=_clientSyncComplete;
@property(retain, nonatomic) PSYSyncSessionObserver *pairedSyncObserver; // @synthesize pairedSyncObserver=_pairedSyncObserver;
@property(retain, nonatomic) PSYInitialSyncStateObserver *pairedInitialSyncObserver; // @synthesize pairedInitialSyncObserver=_pairedInitialSyncObserver;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
- (void).cxx_destruct;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (void)_reportProgress:(double)arg1;
- (void)_syncDidComplete;
- (void)_initInitialSyncStateComplete;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DNDSAssertionSyncManagerDataSource.h"
#import "DNDSAssertionSyncManagerDelegate.h"
#import "DNDSEventBehaviorResolverDataSource.h"
#import "DNDSLifetimeMonitorDataSource.h"
#import "DNDSLifetimeMonitorDelegate.h"
#import "DNDSModeAssertionProviderObserver.h"
#import "DNDSModeAssertionStateProviderDataSource.h"
#import "DNDSPairedDeviceStateMonitorDelegate.h"
#import "DNDSRemoteServiceProviderDelegate.h"
#import "DNDSScheduleManagerDataSource.h"
#import "DNDSSettingsManagerDelegate.h"
#import "DNDSSettingsSyncManagerDataSource.h"
#import "DNDSSettingsSyncManagerDelegate.h"
#import "DNDSStateProviderUpdateListener.h"

@class DNDSCalendarEventLifetimeMonitor, DNDSEventBehaviorResolver, DNDSLocalAssertionManager, DNDSModeAssertionStateProvider, DNDSPairedDeviceStateMonitor, DNDSRemoteServiceProvider, DNDSScheduleManager, DNDSSettingsManager, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface DNDSServer : NSObject <DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSModeAssertionProviderObserver, DNDSModeAssertionStateProviderDataSource, DNDSStateProviderUpdateListener, DNDSRemoteServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDSLocalAssertionManager *_localAssertionManager;
    DNDSCalendarEventLifetimeMonitor *_calendarEventLifetimeMonitor;
    NSArray *_lifetimeMonitors;
    DNDSScheduleManager *_scheduleManager;
    NSArray *_assertionTransformers;
    DNDSModeAssertionStateProvider *_stateProvider;
    DNDSEventBehaviorResolver *_eventBehaviorResolver;
    DNDSRemoteServiceProvider *_serviceProvider;
    id <DNDSAssertionSyncManager> _assertionSyncManager;
    id <DNDSSettingsSyncManager> _settingsSyncManager;
    DNDSSettingsManager *_settingsManager;
    DNDSPairedDeviceStateMonitor *_pairedDeviceStateMonitor;
    unsigned long long _lockState;
    unsigned long long _lostModeState;
}

@property unsigned long long lostModeState; // @synthesize lostModeState=_lostModeState;
@property unsigned long long lockState; // @synthesize lockState=_lockState;
- (void).cxx_destruct;
- (void)_queue_handlePairedDeviceAndSyncSettingsChange;
- (id)_effectiveLifetimeForModeAssertion:(id)arg1;
- (id)_activeModeAssertionsConsideringProviders:(id)arg1;
- (void)_queue_updateLifetimeMonitorsAndStateForReason:(unsigned long long)arg1;
- (void)_queue_resume;
- (void)pairedDeviceStateMonitor:(id)arg1 didReceiveUpdatedPairedDeviceState:(unsigned long long)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (id)lastModeAssertionsCompleteInvalidationDateForScheduleManager:(id)arg1;
- (id)scheduleSettingsForScheduleManager:(id)arg1;
- (void)syncManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)syncManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (id)scheduleSettingsForSyncManager:(id)arg1;
- (id)phoneCallBypassSettingsForSyncManager:(id)arg1;
- (void)syncManager:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3;
- (id)lastModeAssertionsUpdateDateForSyncManager:(id)arg1;
- (id)lastModeAssertionsCompleteInvalidationDateForSyncManager:(id)arg1;
- (id)activeLocalModeAssertionsForSyncManager:(id)arg1;
- (_Bool)remoteServiceProvider:(id)arg1 setScheduleSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 scheduleSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(id)arg1 setPhoneCallBypassSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 phoneCallBypassSettingsWithError:(id *)arg2;
- (_Bool)remoteServiceProvider:(id)arg1 setBehaviorSettings:(id)arg2 withError:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 behaviorSettingsWithError:(id *)arg2;
- (id)remoteServiceProvider:(id)arg1 currentStateWithError:(id *)arg2;
- (id)remoteServiceProvider:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3 error:(id *)arg4;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 error:(id *)arg4;
- (id)remoteServiceProvider:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id *)arg4;
- (id)remoteServiceProvider:(id)arg1 assertionWithClientIdentifer:(id)arg2 error:(id *)arg3;
- (id)remoteServiceProvider:(id)arg1 resolveBehaviorForEventDetails:(id)arg2 clientIdentifier:(id)arg3 date:(id)arg4 error:(id *)arg5;
- (void)stateProvider:(id)arg1 didUpdateDoNotDisturbState:(id)arg2;
- (unsigned long long)currentLostModeStateForStateProvider:(id)arg1;
- (unsigned long long)currentUILockStateForStateProvider:(id)arg1;
- (unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(id)arg1;
- (id)stateProvider:(id)arg1 activeDateIntervalForModeAssertion:(id)arg2;
- (id)stateProvider:(id)arg1 effectiveModeIdentifierForModeAssertion:(id)arg2;
- (id)stateProvider:(id)arg1 effectiveLifetimeForModeAssertion:(id)arg2;
- (id)currentlyActiveModeAssertionsForStateProvider:(id)arg1;
- (void)modeAssertionProvider:(id)arg1 didPerformInvalidations:(id)arg2;
- (void)modeAssertionProvider:(id)arg1 didTakeAssertions:(id)arg2;
- (void)lifetimeMonitor:(id)arg1 lifetimeDidExpireForAssertionUUIDs:(id)arg2;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg1;
- (id)lifetimeMonitor:(id)arg1 effectiveLifetimeForModeAssertion:(id)arg2;
- (id)allModeAssertionsForLifetimeMonitor:(id)arg1;
- (id)eventBehaviorResolver:(id)arg1 bypassSettingsForClientIdentifier:(id)arg2;
- (id)currentStateForEventBehaviorResolver:(id)arg1;
- (_Bool)_setLostModeState:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setUILockState:(unsigned long long)arg1 error:(id *)arg2;
- (void)_handleSignificantTimeChange;
- (void)resume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


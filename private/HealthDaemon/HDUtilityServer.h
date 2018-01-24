//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import "HDUtilityServerInterface.h"

@class NSString;

@interface HDUtilityServer : HDSubserver <HDUtilityServerInterface>
{
}

- (void)remote_fetchURLForAnalyticsFileWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_stopObservingDataCollectionForType:(id)arg1;
- (void)remote_observeDataCollectionForType:(id)arg1 interval:(double)arg2 inBackground:(_Bool)arg3 hasRunningWorkout:(_Bool)arg4;
- (void)remote_resetAWDTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_runAWDTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setShouldIgnoreUnlockedState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_restoreEntitlement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_dropEntitlement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)remote_saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)remote_fetchAllDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_createFakeAppleSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_fetchDiagnosticsWithKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_stopFakingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


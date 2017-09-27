//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKExtendedClientInterface.h"
#import "_HKXPCExportable.h"

@class NSObject<OS_dispatch_queue>, NSString, _HKXPCConnection;

@interface HKExtendedHealthStore : NSObject <HKExtendedClientInterface, _HKXPCExportable>
{
    CDUnknownBlockType _achievementsAddedOrRemovedHandler;
    CDUnknownBlockType _unviewedAchievementDefinitionsChangedHandler;
    _HKXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)clientRemote_achievementDefinitionUnviewedCountChanged;
- (void)clientRemote_achievementsWereAddedOrRemoved;
- (void)expressionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAchievementDefinitionAlertedStates:(_Bool)arg1 availabilityStates:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAchievementAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAchievementAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runCompanionAchievementManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAchievementWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDynamicAchievementDefinitionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)progressAchievementWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createMonthlyChallengeAchievementForMonth:(long long)arg1 year:(long long)arg2 predicateString:(id)arg3 progressExpressionString:(id)arg4 goalExpressionString:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)markAchievementAsViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAllAchievementAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAchievementsAlerted:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType unviewedAchievementDefinitionsChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType achievementsAddedOrRemovedHandler;
- (void)daemonDidStart;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


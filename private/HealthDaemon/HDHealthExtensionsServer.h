//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDiagnosticObject.h"
#import "HKExtendedServerInterface.h"
#import "_HKXPCExportable.h"

@class HDProfile, HDXPCClient, NSObject<OS_dispatch_queue>, NSString;

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface, _HKXPCExportable>
{
    _Bool _registeredForAchievementNotifications;
    _Bool _registeredForAchievementDefinitionUnviewedCountChangeNotifications;
    NSObject<OS_dispatch_queue> *_queue;
    HDXPCClient *_client;
    HDProfile *_profile;
}

+ (id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_shouldAcceptConnectionForClient:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool registeredForAchievementDefinitionUnviewedCountChangeNotifications; // @synthesize registeredForAchievementDefinitionUnviewedCountChangeNotifications=_registeredForAchievementDefinitionUnviewedCountChangeNotifications;
@property(nonatomic) _Bool registeredForAchievementNotifications; // @synthesize registeredForAchievementNotifications=_registeredForAchievementNotifications;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)remote_expressionValue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_achievementAssetAvailabilityOnPairedDeviceForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resetAchievementDefinitionAlertedStates:(_Bool)arg1 availabilityStates:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_nextScheduledAchievementDefinitionAlertTaskDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setAchievementAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_runCompanionAchievementManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_runAchievementsFixupAsDryRun:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_updateAllAchievementAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteAchievementWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addAchievement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchDynamicAchievementDefinitionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_progressAchievementWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createMonthlyChallengeAchievementForMonth:(long long)arg1 year:(long long)arg2 predicateString:(id)arg3 progressExpressionString:(id)arg4 goalExpressionString:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)remote_markAchievementAsViewed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_markAchievementsAlerted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkForUpdatedAchievementAssetsOnce;
- (void)_callClientRemoteAchievementDefinitionUnviewedCountChanged;
- (void)_achievementDefinitionAvailabilityChanged:(id)arg1;
- (void)_achievementDefinitionUnviewedCountChanged:(id)arg1;
- (void)_achievementsAddedOrRemoved:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)dealloc;
- (id)initWithClient:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


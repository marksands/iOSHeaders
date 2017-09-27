//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDiagnosticObject.h"
#import "HDHealthDaemon.h"
#import "HDXPCListenerDelegate.h"

@class HDAchievementAssetManager, HDAchievementDefinitionAlertManager, HDAchievementDoctorManager, HDAppLauncher, HDBackgroundTaskScheduler, HDCloudSyncCoordinator, HDCoachingDiagnosticManager, HDCompanionAchievementManager, HDCompanionWorkoutCreditManager, HDContentProtectionManager, HDDemoDataGenerator, HDDynamicAchievementDefinitionDataStore, HDFitnessAppBadgeManager, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDProfileManager, HDQueryManager, HDXPCListener, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, _HKBehavior;

@interface HDDaemon : NSObject <HDDiagnosticObject, HDXPCListenerDelegate, HDHealthDaemon>
{
    _HKBehavior *_behavior;
    NSString *_healthDirectoryPath;
    NSMutableSet *_endpoints;
    NSObject<OS_dispatch_queue> *_mainQueue;
    int _languageChangeNotifyToken;
    HDAchievementDefinitionAlertManager *_achievementDefinitionAlertManager;
    id <HDAchievementDefinitionAlertNotifier> _achievementDefinitionAlertNotifier;
    id <HDAchievementDefinitionAlertSuppressor> _achievementDefinitionAlertSuppressor;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    HDCloudSyncCoordinator *_cloudSyncCoordinator;
    HDDemoDataGenerator *_demoDataFactory;
    HDPluginManager *_pluginManager;
    HDProcessStateManager *_processStateManager;
    HDProfileManager *_profileManager;
    HDDynamicAchievementDefinitionDataStore *_dynamicAchievementDefinitionStore;
    HDPrimaryProfile *_primaryProfile;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    NSMutableArray *_daemonLaunchObservers;
    _Bool _daemonReady;
    int _didStart;
    NSString *_medicalIDDirectoryPath;
    HDAchievementDoctorManager *_achievementDoctorManager;
    HDAchievementAssetManager *_achievementAssetManager;
    HDCompanionAchievementManager *_companionAchievementManager;
    id <HDNanoAlertSuppressionService> _alertSuppressionService;
    HDDynamicAchievementDefinitionDataStore *_dynamicAchievementDefinitionDataStore;
    HDCoachingDiagnosticManager *_coachingDiagnosticManager;
    HDCompanionWorkoutCreditManager *_companionWorkoutCreditManager;
    HDFitnessAppBadgeManager *_fitnessAppBadgeManager;
    HDQueryManager *_queryManager;
    id <HDAchievementEvaluationDelegate> _achievementEvaluationDelegate;
    HDXPCListener *_serviceListener;
    HDAppLauncher *_appLauncher;
    id <HDDaemonTester> _daemonTester;
}

@property(nonatomic) __weak id <HDDaemonTester> daemonTester; // @synthesize daemonTester=_daemonTester;
@property(readonly, nonatomic) HDAppLauncher *appLauncher; // @synthesize appLauncher=_appLauncher;
@property(readonly, nonatomic) HDXPCListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(nonatomic) __weak id <HDAchievementEvaluationDelegate> achievementEvaluationDelegate; // @synthesize achievementEvaluationDelegate=_achievementEvaluationDelegate;
@property(readonly, nonatomic) HDQueryManager *queryManager; // @synthesize queryManager=_queryManager;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property(readonly, nonatomic) HDFitnessAppBadgeManager *fitnessAppBadgeManager; // @synthesize fitnessAppBadgeManager=_fitnessAppBadgeManager;
@property(readonly, nonatomic) HDCompanionWorkoutCreditManager *companionWorkoutCreditManager; // @synthesize companionWorkoutCreditManager=_companionWorkoutCreditManager;
@property(readonly, nonatomic) HDCoachingDiagnosticManager *coachingDiagnosticManager; // @synthesize coachingDiagnosticManager=_coachingDiagnosticManager;
@property(readonly, nonatomic) HDCloudSyncCoordinator *cloudSyncCoordinator; // @synthesize cloudSyncCoordinator=_cloudSyncCoordinator;
@property(retain, nonatomic) HDDynamicAchievementDefinitionDataStore *dynamicAchievementDefinitionDataStore; // @synthesize dynamicAchievementDefinitionDataStore=_dynamicAchievementDefinitionDataStore;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService=_alertSuppressionService;
@property(retain, nonatomic) HDCompanionAchievementManager *companionAchievementManager; // @synthesize companionAchievementManager=_companionAchievementManager;
@property(retain, nonatomic) HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager; // @synthesize achievementDefinitionAlertManager=_achievementDefinitionAlertManager;
@property(retain, nonatomic) HDAchievementAssetManager *achievementAssetManager; // @synthesize achievementAssetManager=_achievementAssetManager;
@property(retain, nonatomic) HDAchievementDoctorManager *achievementDoctorManager; // @synthesize achievementDoctorManager=_achievementDoctorManager;
@property(readonly, copy) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
- (void).cxx_destruct;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (void)unitTest_didCreateProfile:(id)arg1;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)_newProfileManager;
- (id)_newPluginManager;
- (id)_newCompanionWorkoutCreditManager;
- (id)_newBackgroundTaskScheduler;
- (id)_newProcessStateManager;
- (id)_newPrimaryProfile;
- (id)_newCloudSyncCoordinator;
- (id)_newContentProtectionManager;
- (id)_newMainQueue;
- (id)_newBehavior;
- (id)diagnosticDescription;
@property(readonly, nonatomic) HDProfileManager *profileManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly, nonatomic) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
- (id)mainQueue;
@property(readonly, copy) NSURL *healthDirectoryURL;
@property(readonly, copy) NSString *healthDirectoryPath;
@property(readonly) _HKBehavior *behavior;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_resetPrivacySettings;
- (void)_updateCurrentDeviceName;
- (void)_registerForDeviceNameChanges;
- (id)healthDirectorySizeInBytes;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)_notifyDaemonLaunchObservers;
- (void)registerForDaemonReady:(id)arg1;
- (void)_handleSigterm;
- (void)_terminationCleanup;
- (void)_periodicUpdates;
- (_Bool)_motionTrackingAvailable;
- (void)_setUpPedometerLaunchEventHandler;
- (void)_setupMemoryWarningHandler;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpNotifydEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_setUpSignalHandlers;
- (_Bool)_shouldInitializeDaemon;
- (void)exitClean:(_Bool)arg1 reason:(id)arg2;
- (void)_localeOrLanguageChanged:(id)arg1;
- (void)terminateClean:(_Bool)arg1 reason:(id)arg2;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)invalidateAndWait;
- (void)dealloc;
- (void)start;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (id)init;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (id)nanoPairedDeviceRegistry;
- (id)healthLiteUserDefaultsDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


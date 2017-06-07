//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemon-Protocol.h>

@class HDAchievementDefinitionAlertManager, HDBackgroundTaskScheduler, HDMockPrimaryProfile, HDPluginManager, HDPrimaryProfile, NSString, _HKBehavior;
@protocol HDNanoAlertSuppressionService;

@interface HDMockDaemon : NSObject <HDHealthDaemon>
{
    HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager;
    HDBackgroundTaskScheduler *backgroundTaskScheduler;
    HDMockPrimaryProfile *mockPrimaryProfile;
    HDPrimaryProfile *primaryProfile;
    HDPluginManager *pluginManager;
    id <HDNanoAlertSuppressionService> alertSuppressionService;
}

@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService;
@property(readonly) HDPluginManager *pluginManager; // @synthesize pluginManager;
@property(readonly, nonatomic) HDMockPrimaryProfile *mockPrimaryProfile; // @synthesize mockPrimaryProfile;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler; // @synthesize backgroundTaskScheduler;
@property(retain, nonatomic) HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager; // @synthesize achievementDefinitionAlertManager;
- (void).cxx_destruct;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)registerForDaemonReady:(id)arg1;
@property(readonly, nonatomic) _HKBehavior *behavior;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


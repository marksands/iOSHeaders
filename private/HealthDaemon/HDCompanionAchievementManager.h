//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAchievementEvaluationDelegate-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDAchievementDataStoreV2, HDAchievementDetective, HDCompanionDailyGoalCompletionManager, HDKeyValueDomain, HDPeriodicActivity, HDProfile, NSCalendar, NSDate, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HDCompanionAchievementManager : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDAchievementEvaluationDelegate, HDHealthDaemonReadyObserver>
{
    int _fitnessWeekRedefined;
    _Bool _waitingToRun;
    _Bool _deleteAchievementsNeedsRetry;
    HDProfile *_profile;
    HDPeriodicActivity *_scheduler;
    NSCalendar *_calendar;
    HDAchievementDataStoreV2 *_achievementStore;
    HDCompanionDailyGoalCompletionManager *_dailyGoalCompletionManager;
    HDAchievementDetective *_detective;
    HDAchievementDetective *_progressDetective;
    HDKeyValueDomain *_defaultsDomain;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRunDate;
    NSNumber *_waitingToRunBackingNumber;
}

@property(nonatomic) _Bool deleteAchievementsNeedsRetry; // @synthesize deleteAchievementsNeedsRetry=_deleteAchievementsNeedsRetry;
@property(retain, nonatomic) NSNumber *waitingToRunBackingNumber; // @synthesize waitingToRunBackingNumber=_waitingToRunBackingNumber;
@property(nonatomic, getter=isWaitingToRun) _Bool waitingToRun; // @synthesize waitingToRun=_waitingToRun;
@property(retain, nonatomic) NSDate *lastRunDate; // @synthesize lastRunDate=_lastRunDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDKeyValueDomain *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property(retain, nonatomic) HDAchievementDetective *progressDetective; // @synthesize progressDetective=_progressDetective;
@property(retain, nonatomic) HDAchievementDetective *detective; // @synthesize detective=_detective;
@property(retain, nonatomic) HDCompanionDailyGoalCompletionManager *dailyGoalCompletionManager; // @synthesize dailyGoalCompletionManager=_dailyGoalCompletionManager;
@property(retain, nonatomic) HDAchievementDataStoreV2 *achievementStore; // @synthesize achievementStore=_achievementStore;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) HDPeriodicActivity *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)createEvaluatedAchievementWithDefinition:(id)arg1;
- (id)evaluateAchievementExpression:(id)arg1;
- (void)_queue_deleteAllAchievements;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_applicationsInstalled:(id)arg1;
- (id)diagnosticDescription;
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (_Bool)_queue_performDetectiveRun;
- (void)requestRun;
- (id)runImmediately;
- (void)daemonReady:(id)arg1;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGQueryPredictions, SGServiceContext, SGSqlEntityStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, SGXPCActivityManagerProtocol;

@interface SGDManagerForCTS : NSObject
{
    SGSqlEntityStore *_harvestStore;
    SGQueryPredictions *_queryPredictions;
    id <SGXPCActivityManagerProtocol> _xpcActivityManager;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    struct SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
    SGServiceContext *_context;
    struct _opaque_pthread_mutex_t _geocodeLock;
    NSObject<OS_dispatch_queue> *_frontfillQueue;
    NSObject<OS_dispatch_semaphore> *_frontfillSemaphoreForTesting;
    NSObject<OS_dispatch_source> *_adjustActivitySource;
    double _lastFrontfillFinishTime;
}

+ (id)defaultInstance;
+ (id)sharedSingletonInstance;
- (void).cxx_destruct;
- (void)waitUntilFrontfillFinishedForTesting;
- (void)resumeFrontfillForTesting;
- (void)suspendFrontfillForTesting;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)setQueryPredictionsForTesting:(id)arg1;
- (void)waitForXpcActivityQueue;
- (void)dealloc;
- (void)processPendingGeocodes;
- (void)attemptFrontfillHarvestUnderXpcTransaction:(id)arg1;
- (_Bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (_Bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (_Bool)processSearchableItemForTesting:(id)arg1;
- (_Bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 dissectionQueue:(id)arg3 storeQueue:(id)arg4;
- (void)drainDefaultQueueCompletely;
- (void)drainDefaultQueueCompletelyRunningOptionalDissectors:(_Bool)arg1;
- (_Bool)drainHarvestQueue:(id)arg1 runningOptionalDissectors:(_Bool)arg2 highPriorityOnly:(_Bool)arg3 continuingWhile:(CDUnknownBlockType)arg4;
- (void)_doAdjustCriteriaForCTS;
- (void)adjustCriteriaForCTS;
- (void)_performPMLTrainingActivity:(id)arg1;
- (void)_registerFroPMLTrainingActivity;
- (void)_performSendRTCActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_performVacuumActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_registerForCTSTrimActivity;
- (void)_performHarvestActivity:(id)arg1;
- (void)_registerForCTSHarvestActivity;
- (void)registerForCTS;
- (id)initWithHarvestStore:(id)arg1 queryPredictions:(id)arg2 xpcActivityManager:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "FCOperationCanceling.h"
#import "FCOperationIdentifying.h"
#import "FCOperationPrioritizing.h"

@class FCOnce, NFMutexLock, NSMutableArray, NSObject<OS_dispatch_group>, NSString;

@interface FCOperation : NSOperation <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing>
{
    _Bool _executing;
    _Bool _finished;
    _Bool _childOperationsCancelled;
    long long _relativePriority;
    unsigned long long _retryCount;
    double _timeoutDuration;
    NSString *_operationID;
    double _operationStartTime;
    double _operationEndTime;
    CDUnknownBlockType _timedOutTest;
    NSMutableArray *_childOperations;
    NFMutexLock *_childOperationsLock;
    FCOnce *_startOnce;
    NSObject<OS_dispatch_group> *_finishedGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup; // @synthesize finishedGroup=_finishedGroup;
@property(retain, nonatomic) FCOnce *startOnce; // @synthesize startOnce=_startOnce;
@property(retain, nonatomic) NFMutexLock *childOperationsLock; // @synthesize childOperationsLock=_childOperationsLock;
@property(nonatomic) _Bool childOperationsCancelled; // @synthesize childOperationsCancelled=_childOperationsCancelled;
@property(retain, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property(copy, nonatomic) CDUnknownBlockType timedOutTest; // @synthesize timedOutTest=_timedOutTest;
@property(nonatomic) double operationEndTime; // @synthesize operationEndTime=_operationEndTime;
@property(nonatomic) double operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(readonly, copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
- (void).cxx_destruct;
- (id)longOperationDescription;
- (id)shortOperationDescription;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)arg1;
@property(readonly, nonatomic) _Bool hasOperationStarted;
@property(readonly, nonatomic) FCOperation *proxyOperation;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)waitUntilFinishedWithTimeout:(double)arg1;
- (_Bool)_shouldThrottleOperationWithRetryAfter:(double *)arg1;
- (id)_userDefaultsKeyForThrottleEndDate;
- (_Bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;
- (id)throttleGroup;
- (void)resetForRetry;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)cancelChildOperations;
- (void)_associateChildOperation:(id)arg1;
- (void)associateChildOperations:(id)arg1;
- (void)associateChildOperation:(id)arg1;
- (void)finishFromEarlyCancellation;
- (void)operationDidFinishWithError:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_handleRetryFromError:(id)arg1 signal:(id)arg2;
- (void)_handleThrottlingFromError:(id)arg1 delay:(double)arg2;
- (void)_finishedPerformingOperationWithError:(id)arg1;
- (void)finishedPerformingOperationWithError:(id)arg1;
- (void)performOperation;
- (_Bool)_startIfNeeded;
- (void)start;
- (void)startIfNeeded;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (void)setQualityOfService:(long long)arg1;
- (void)cancel;
- (_Bool)isAsynchronous;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


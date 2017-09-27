//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CKOperationConfiguration, CKOperationGroup, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, CKPlaceholderOperation, CKTimeLogger, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_activity>, NSObject<OS_os_transaction>, NSObject<OS_voucher>, NSString;

@interface CKOperation : NSOperation
{
    NSObject<OS_os_transaction> *_isExecuting;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    _Bool _isOutstandingOperation;
    _Bool _isFinished;
    _Bool _clouddConnectionInterrupted;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKOperationConfiguration *_resolvedConfiguration;
    CKOperationConfiguration *_configuration;
    CKOperationGroup *_group;
    NSString *_operationID;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    long long _usesBackgroundSessionOverride;
    NSError *_cancelError;
    NSMutableArray *_savedRequestUUIDs;
    NSMutableDictionary *_savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary *_savedW3CNavigationTimingByRequestUUID;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKTimeLogger *_timeLogger;
    CKOperationMetrics *_metrics;
    CDUnknownBlockType _requestCompletedBlock;
    NSString *_deviceIdentifier;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property(retain, nonatomic) id clientVoucher; // @synthesize clientVoucher=_clientVoucher;
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property(retain, nonatomic) CKOperationMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool clouddConnectionInterrupted; // @synthesize clouddConnectionInterrupted=_clouddConnectionInterrupted;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain) CKPlaceholderOperation *placeholderOperation; // @synthesize placeholderOperation=_placeholderOperation;
@property(retain, nonatomic) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID; // @synthesize savedW3CNavigationTimingByRequestUUID=_savedW3CNavigationTimingByRequestUUID;
@property(retain, nonatomic) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID; // @synthesize savedResponseHTTPHeadersByRequestUUID=_savedResponseHTTPHeadersByRequestUUID;
@property(retain, nonatomic) NSMutableArray *savedRequestUUIDs; // @synthesize savedRequestUUIDs=_savedRequestUUIDs;
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(nonatomic) _Bool isOutstandingOperation; // @synthesize isOutstandingOperation=_isOutstandingOperation;
@property(nonatomic) long long usesBackgroundSessionOverride; // @synthesize usesBackgroundSessionOverride=_usesBackgroundSessionOverride;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock; // @synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock;
@property(copy, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) CKOperationGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) CKOperationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *w3cNavigationTimingByRequestUUID;
@property(readonly, nonatomic) NSDictionary *responseHTTPHeadersByRequestUUID;
@property(readonly, nonatomic) NSArray *requestUUIDs;
@property(retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property(nonatomic) _Bool allowsBackgroundNetworking;
@property(nonatomic) _Bool preferAnonymousRequests;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (void)setLongLived:(_Bool)arg1;
- (_Bool)isLongLived;
- (void)setAllowsCellularAccess:(_Bool)arg1;
- (_Bool)allowsCellularAccess;
- (void)setContainer:(id)arg1;
- (id)container;
- (_Bool)_wantsFlowControl;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
@property(readonly, nonatomic) CKOperationConfiguration *resolvedConfiguration; // @synthesize resolvedConfiguration=_resolvedConfiguration;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
@property(nonatomic) _Bool usesBackgroundSession;
- (id)daemon;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)processOperationResult:(id)arg1;
@property(nonatomic) _Bool isExecuting;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (id)_findBestThrottleError:(id)arg1;
- (void)_installTimeoutSource;
- (void)_uninstallTimeoutSource;
- (void)cancel;
- (void)cancelWithUnderlyingError:(id)arg1;
@property(readonly, nonatomic) CKOperationInfo *operationInfo;
- (Class)operationClass;
- (Class)operationInfoClass;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (_Bool)isConcurrent;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)performCKOperation;
- (void)start;
- (void)_start;
- (id)activityCreate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)dealloc;
- (id)init;

@end


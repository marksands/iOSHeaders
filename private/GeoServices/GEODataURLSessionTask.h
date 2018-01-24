//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSessionTask.h"
#import "GEODataSessionUpdatableTask.h"
#import "GEOStateCapturing.h"

@class GEOClientMetrics, GEODataRequest, GEODataURLSessionTaskQueue, NSData, NSError, NSHTTPURLResponse, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSObject<OS_voucher>, NSString, NSURL, NSURLRequest, NSURLSessionDataTask, NSURLSessionTaskMetrics;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionTask : NSObject <GEOStateCapturing, GEODataSessionTask, GEODataSessionUpdatableTask>
{
    id <GEODataSessionTaskDelegate> _delegate;
    GEODataRequest *_request;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSURLSessionDataTask *_backingTask;
    NSError *_nonBackingTaskError;
    NSData *_cachedData;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    GEODataURLSessionTaskQueue *_taskQueue;
    double _startTime;
    double _endTime;
    int _requestKind;
    unsigned int _taskIdentifier;
    unsigned long long _stateCaptureHandle;
    float _priority;
    unsigned int _sessionIdentifier;
    _Bool _backingTaskNeedsResume;
    _Bool _finished;
    unsigned int _qos;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_voucher> *_voucher;
    id <NSObject> _parsedResponse;
}

@property(nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) GEODataURLSessionTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) NSURLSessionDataTask *backingTask; // @synthesize backingTask=_backingTask;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics; // @synthesize urlTaskMetrics=_urlTaskMetrics;
@property(readonly, nonatomic) unsigned int taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, nonatomic) __weak id <GEODataSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int requestKind; // @synthesize requestKind=_requestKind;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property(readonly) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEORequestCounterTicket> requestCounterTicket;
- (void)notifyDelegateWithSession:(id)arg1;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly) _Bool failedDueToCancel;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property(readonly, nonatomic) NSURLRequest *originalURLRequest;
- (void)setParsedResponse:(id)arg1;
@property(readonly, nonatomic) id <NSObject> parsedResponse;
@property(retain, nonatomic) NSError *error;
@property(readonly, nonatomic) NSHTTPURLResponse *response;
@property(readonly, nonatomic) NSData *receivedData;
@property(readonly, nonatomic) _Bool protocolBufferHasPreamble;
@property float priority;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)_prepareForRestart;
@property(readonly, nonatomic, getter=isTileRequest) _Bool tileRequest;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(int)arg4;
- (id)init;
- (_Bool)validateContentLengthWithError:(id *)arg1;
- (_Bool)validateNonEmptyResponseWithError:(id *)arg1;
- (_Bool)validateTileResponseWithError:(id *)arg1;
- (id)captureStateWithHints:(struct os_state_hints_s *)arg1;
- (void)didCollectMetrics:(id)arg1;
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createURLRequest;
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;
@property(readonly, nonatomic) float _priority;
- (void)startDequeuedFromQueue:(id)arg1;
- (_Bool)didValidateEntityTagForData:(id *)arg1 entityTag:(id *)arg2;
@property(readonly) double elapsedTime;
@property(readonly, nonatomic) NSURL *originalRequestURL;
@property(readonly, nonatomic) long long HTTPStatusCode;
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, nonatomic) NSString *contentLengthString;
@property(readonly, nonatomic) NSString *entityTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


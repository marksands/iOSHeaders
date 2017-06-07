//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSProgressReporting-Protocol.h>

@class ICRequestContext, NSDictionary, NSError, NSMutableArray, NSMutableData, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTask;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICURLRequest : NSObject <NSProgressReporting>
{
    NSURLRequest *_urlRequest;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    _Bool _prioritize;
    _Bool _cancelOnHTTPErrors;
    _Bool _extendedCertificateValidationRequired;
    _Bool _shouldRetry;
    NSProgress *_progress;
    unsigned long long _maxRetryCount;
    ICRequestContext *_requestContext;
    unsigned long long _retryCount;
    unsigned long long _redirectCount;
    double _retryDelay;
    long long _requestState;
    NSURLSessionTask *_task;
    long long _type;
    NSObject<OS_dispatch_semaphore> *_waitSemaphore;
    NSURLRequest *_currentURLRequest;
    NSURLResponse *_urlResponse;
    NSMutableData *_responseData;
    NSURL *_responseDataURL;
    NSError *_error;
    NSDictionary *_avDownloadOptions;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSDictionary *avDownloadOptions; // @synthesize avDownloadOptions=_avDownloadOptions;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *responseDataURL; // @synthesize responseDataURL=_responseDataURL;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(retain, nonatomic) NSURLRequest *currentURLRequest; // @synthesize currentURLRequest=_currentURLRequest;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitSemaphore; // @synthesize waitSemaphore=_waitSemaphore;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic, getter=isExtendedCertificateValidationRequired) _Bool extendedCertificateValidationRequired; // @synthesize extendedCertificateValidationRequired=_extendedCertificateValidationRequired;
@property(nonatomic) long long requestState; // @synthesize requestState=_requestState;
@property(nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy, nonatomic) ICRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool cancelOnHTTPErrors; // @synthesize cancelOnHTTPErrors=_cancelOnHTTPErrors;
@property(nonatomic) _Bool prioritize; // @synthesize prioritize=_prioritize;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateState:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


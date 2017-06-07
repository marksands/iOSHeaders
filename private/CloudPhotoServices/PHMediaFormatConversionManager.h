//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL, PHMediaFormatConversionJob;
@protocol OS_dispatch_queue, PHMediaFormatConversionImplementation;

@interface PHMediaFormatConversionManager : NSObject
{
    CDUnknownBlockType _transferBehaviorUserPreferenceOverride;
    NSURL *_directoryForTemporaryFiles;
    unsigned long long _state;
    NSObject<PHMediaFormatConversionImplementation> *_conversionImplementation;
    NSMutableArray *_queuedJobs;
    PHMediaFormatConversionJob *_currentlyProcessingJob;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *preflightQueue; // @synthesize preflightQueue=_preflightQueue;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain) PHMediaFormatConversionJob *currentlyProcessingJob; // @synthesize currentlyProcessingJob=_currentlyProcessingJob;
@property(retain) NSMutableArray *queuedJobs; // @synthesize queuedJobs=_queuedJobs;
@property(retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation; // @synthesize conversionImplementation=_conversionImplementation;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancellationRequestedForJob:(id)arg1;
- (id)jobForConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)rootAncestorRequestForRequest:(id)arg1;
- (void)preflightAllRelatedRequestsForCurrentJob;
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg1;
- (void)performConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processQueuedJobs;
- (void)setTransferBehaviorUserPreferenceOverride:(CDUnknownBlockType)arg1;
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)arg1;
- (void)preflightConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightConversionRequest:(id)arg1;
- (void)enqueueConversionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupConversionImplementation;
- (id)init;

@end


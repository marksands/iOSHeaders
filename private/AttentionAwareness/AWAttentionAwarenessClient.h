//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWFrameworkClient-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWClientPollWaiter, AWSchedulerManager, NSString;
@protocol AWRemoteClient, AWScheduler, OS_dispatch_queue;

@interface AWAttentionAwarenessClient : NSObject <AWFrameworkClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWSchedulerManager *_schedulerManager;
    id <AWScheduler> _scheduler;
    AWClientPollWaiter *_pollWaiter;
    id <AWRemoteClient> _remoteClient;
    unsigned long long _suspensionCount;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _clientBlock;
    AWAttentionAwarenessConfiguration *_configuration;
}

+ (void)initialize;
@property(copy, nonatomic) AWAttentionAwarenessConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)invalidateWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (id)reconnect;
- (_Bool)cancelPollForAttentionWithError:(id *)arg1;
- (_Bool)pollForAttentionWithTimeout:(double)arg1 event:(id *)arg2 error:(id *)arg3;
- (void)setEventHandlerWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)resetAttentionLostTimeoutWithError:(id *)arg1;
@property(readonly, retain, nonatomic) AWAttentionEvent *lastEvent;
- (_Bool)invokeRequiringClient:(_Bool)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;
- (void)notifyEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


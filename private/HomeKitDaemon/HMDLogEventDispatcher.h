//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLogEventDispatcher : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMapTable *_logEventObserversByEventType;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(readonly, nonatomic) NSMapTable *logEventObserversByEventType; // @synthesize logEventObserversByEventType=_logEventObserversByEventType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;
- (void)submitLogEvent:(id)arg1;
- (void)removeObserver:(id)arg1 forEventType:(id)arg2;
- (void)addObserver:(id)arg1 forEventTypes:(id)arg2;
- (void)addObserver:(id)arg1 forEventType:(id)arg2;
- (id)init;

@end


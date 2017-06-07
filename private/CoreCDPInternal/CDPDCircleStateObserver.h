//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDXPCEventListener-Protocol.h>

@class NSMutableArray, NSString;
@protocol CDPDCircleProxy, OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener>
{
    int _circleChangeToken;
    _Bool _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    id <CDPDCircleProxy> _circleProxy;
    NSMutableArray *_circleObservers;
}

- (void).cxx_destruct;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (void)registerListener:(id)arg1;
- (void)stopObservingCircleStatusChange;
- (void)observeChangeToState:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)observeCircleStateWithChangeHandler:(CDUnknownBlockType)arg1;
- (const char *)_notificationName;
- (void)dealloc;
- (id)initWithProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


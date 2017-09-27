//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUNotifyObserver.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TUNotifyObserver : NSObject <TUNotifyObserver>
{
    int _token;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_notificationName;
}

@property(nonatomic) int token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_endObserving;
- (void)endObserving;
- (void)beginObserving;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic, getter=isObserving) _Bool observing;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


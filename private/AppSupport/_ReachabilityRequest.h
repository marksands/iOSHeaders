//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject
{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    _Bool _isReachable;
    _Bool _receivedAtLeastOneCallback;
}

@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (_Bool)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHostname:(id)arg1;

@end


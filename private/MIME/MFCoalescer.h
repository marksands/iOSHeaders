//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MFCoalescer : NSObject
{
    CDUnknownBlockType _coalescerAction;
    struct os_unfair_lock_s _lock;
    id _coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}

- (void)_handleCoalesceEvent;
- (void)coalesceValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoalescingAction:(CDUnknownBlockType)arg1;

@end


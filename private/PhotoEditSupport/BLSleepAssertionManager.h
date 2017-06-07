//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface BLSleepAssertionManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *m_assertionSemaphore;
    long long m_assertionCount;
    _Bool m_waiting;
    struct os_unfair_lock_s m_assertionLock;
    long long m_idleCount;
    struct os_unfair_lock_s m_idleLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)releaseIdleAssertion;
- (void)takeIdleAssertion;
- (void)waitForOutstandingSleepAssertions;
- (void)releaseSleepAssertion;
- (void)takeSleepAssertion;
- (id)_init;

@end


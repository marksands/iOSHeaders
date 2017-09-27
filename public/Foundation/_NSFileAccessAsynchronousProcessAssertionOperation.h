//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertionOperation : NSOperation
{
    int _pid;
    NSString *_name;
    BKSProcessAssertion *_assertion;
    struct os_unfair_lock_s _stateLock;
    int _state;
    _Bool _finishedBeforeExecuted;
}

- (void)finish;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)main;
- (void)dealloc;
- (id)initWithPID:(int)arg1 name:(id)arg2;

@end


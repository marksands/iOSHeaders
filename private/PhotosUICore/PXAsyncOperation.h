//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSLock;

@interface PXAsyncOperation : NSOperation
{
    NSLock *_stateLock;
    int _operationState;
}

- (void).cxx_destruct;
- (void)px_finishIfPossible;
- (void)px_start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)start;
- (_Bool)isAsynchronous;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject
{
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    // Error parsing type: AB, name: _deferRequested
}

- (void).cxx_destruct;
- (void)markFinished;
- (void)requestDefer;
- (_Bool)shouldDefer;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRunLoop, NSString;

@interface ARRunLoop : NSObject
{
    NSString *_name;
    NSRunLoop *_runloop;
    NSMutableArray *_earlyRunloopBlocks;
    struct os_unfair_lock_s _lock;
    _Bool _started;
    _Bool _cancelled;
}

@property _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (void)runOnRunLoop:(CDUnknownBlockType)arg1;
- (void)_startThread;
- (void)start;
- (id)initWithName:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    CDUnknownBlockType _block;
    float _delay;
    _Bool _executionPending;
}

- (void).cxx_destruct;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (void)updateTags:(id)arg1 withContext:(id)arg2;
- (void)updateTags:(id)arg1;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2 delay:(float)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;

@end


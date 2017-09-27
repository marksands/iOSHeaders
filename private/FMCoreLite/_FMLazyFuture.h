//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FMCoreLite/FMFuture.h>

@class NSObject<OS_dispatch_queue>;

@interface _FMLazyFuture : FMFuture
{
    _Bool _started;
    CDUnknownBlockType _block;
    id <FMScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) id <FMScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)_runIfNecessary;
- (id)initWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUPriority, NURenderContext;
@protocol OS_dispatch_queue;

@interface NURenderClient : NSObject
{
    _Bool _shouldCoalesceUpdates;
    NSString *_name;
    NUPriority *_priority;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NURenderContext *_renderContext;
    CDUnknownBlockType _genericCompletionBlock;
}

@property(copy) CDUnknownBlockType genericCompletionBlock; // @synthesize genericCompletionBlock=_genericCompletionBlock;
@property(retain, nonatomic) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(readonly) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain) NUPriority *priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool shouldCoalesceUpdates; // @synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)submitGenericRequest:(id)arg1;
- (void)submitGenericRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (id)initWithName:(id)arg1;

@end


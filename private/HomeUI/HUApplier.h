//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HUApplier : NSObject
{
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
    unsigned long long _state;
    double _progress;
}

+ (void)unregisterStandaloneApplier:(id)arg1;
+ (void)registerStandaloneApplier:(id)arg1;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)complete:(_Bool)arg1;
- (_Bool)_hasCompleted;
- (_Bool)cancel;
- (void)updateProgress:(double)arg1;
- (_Bool)start;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addApplierBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
- (id)init;

@end


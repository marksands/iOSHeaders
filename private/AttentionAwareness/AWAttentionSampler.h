//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
    _Bool _sampledStateValid;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastNegativeDetectTime;
}

@property(nonatomic) unsigned long long lastNegativeDetectTime; // @synthesize lastNegativeDetectTime=_lastNegativeDetectTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) _Bool sampledStateValid; // @synthesize sampledStateValid=_sampledStateValid;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
- (void).cxx_destruct;
- (id)initWithMask:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool sampledState;
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2;
- (void)finishDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (void)startDeadlineComputation;
- (id)init;

@end


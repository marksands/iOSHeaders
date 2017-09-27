//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFObservable.h>

@class MFCancelationToken;

__attribute__((visibility("hidden")))
@interface _MFGeneratorObservable : MFObservable
{
    id <MFScheduler> _scheduler;
    MFCancelationToken *_cancelable;
    id _state;
    CDUnknownBlockType _condition;
    CDUnknownBlockType _nextStateForState;
    CDUnknownBlockType _resultFromState;
    CDUnknownBlockType _delayForState;
}

- (void)_updateState;
- (_Bool)_isFinished;
- (void)_scheduleNextResultForObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
- (void)dealloc;

@end


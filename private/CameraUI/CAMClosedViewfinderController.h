//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CAMClosedViewfinderController : NSObject
{
    id <CAMClosedViewfinderControllerDelegate> _delegate;
    NSMutableSet *__reasonsForClosingViewfinder;
    double __referenceTime;
    long long __referenceTimeEvent;
}

@property(nonatomic, setter=_setReferenceTimeEvent:) long long _referenceTimeEvent; // @synthesize _referenceTimeEvent=__referenceTimeEvent;
@property(nonatomic, setter=_setReferenceTime:) double _referenceTime; // @synthesize _referenceTime=__referenceTime;
@property(readonly, nonatomic) NSMutableSet *_reasonsForClosingViewfinder; // @synthesize _reasonsForClosingViewfinder=__reasonsForClosingViewfinder;
@property(nonatomic) __weak id <CAMClosedViewfinderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_descriptionStringForReferenceTimeEvent:(long long)arg1;
- (id)descriptionForTimeBetweenReferenceAndNow;
- (void)_logWarningIfViewfinderStillClosed;
- (void)_cancelDelayedLoggingForClosedViewfinder;
- (void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)arg1;
- (void)_updateReferenceTimeToNowForEvent:(long long)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (void)cancelDelayedRemovalOfReason:(long long)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1 afterDelay:(double)arg2;
- (void)_performDelayedRemovalOfReason:(id)arg1;
- (_Bool)hasClosedViewfinderReason:(long long)arg1;
- (void)removeClosedViewfinderReason:(long long)arg1;
- (void)addClosedViewfinderReason:(long long)arg1;
@property(readonly, nonatomic, getter=isViewfinderClosed) _Bool viewfinderClosed;
- (void)dealloc;
- (id)init;

@end


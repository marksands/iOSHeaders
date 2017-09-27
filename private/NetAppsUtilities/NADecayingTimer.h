//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer;

@interface NADecayingTimer : NSObject
{
    NSDate *_referenceDate;
    unsigned long long _minimumUnit;
    CDUnknownBlockType _block;
    NSTimer *_timer;
}

+ (id)scheduledTimerWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) unsigned long long minimumUnit; // @synthesize minimumUnit=_minimumUnit;
@property(readonly, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (void).cxx_destruct;
- (unsigned long long)_mostSignificantUnitForDateComponents:(id)arg1;
- (void)_timerEvent;
- (void)_scheduleNextTimer;
- (id)_nextFireDate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReferenceDate:(id)arg1 minimumUnit:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;

@end


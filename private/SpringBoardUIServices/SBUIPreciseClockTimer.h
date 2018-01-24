//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBUIPreciseClockTimer : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)now;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end


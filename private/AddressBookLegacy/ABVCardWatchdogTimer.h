//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface ABVCardWatchdogTimer : NSObject
{
    _Bool _valid;
    unsigned long long _ticks;
    id <ABVCardTimeProvider> _timeProvider;
    NSDate *_startTime;
}

+ (_Bool)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)arg1;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) id <ABVCardTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(nonatomic) unsigned long long ticks; // @synthesize ticks=_ticks;
- (_Bool)isValid;
- (void)checkValidity;
- (_Bool)isStarted;
- (void)start;
- (void)dealloc;
- (id)initWithTimeProvider:(id)arg1;

@end


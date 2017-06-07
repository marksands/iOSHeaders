//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <BaseBoardUI/BSUIDateLabel-Protocol.h>

@class NSDate, NSString, NSTimer;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    _Bool _allDay;
    _Bool _isTimestamp;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    _Bool _effectiveAllDay;
    _Bool _isCoalescingUpdates;
    _Bool _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
    id <BSUIDateLabelDelegate> _delegate;
    long long _labelType;
}

+ (id)_currentCalendar;
@property(readonly, retain, nonatomic) NSDate *timeZoneRelativeStartDate; // @synthesize timeZoneRelativeStartDate=_timeZoneRelativeStartDate;
@property(nonatomic) _Bool isTimestamp; // @synthesize isTimestamp=_isTimestamp;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(nonatomic) __weak id <BSUIDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
- (void).cxx_destruct;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)update;
- (void)_forceUpdate;
- (void)updateTextIfNecessary;
- (void)_updateTimerFired:(id)arg1;
- (void)updateTextIfNecessary:(_Bool)arg1;
- (id)constructLabelString;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(_Bool)arg3 sameDayDates:(_Bool)arg4 eventOngoing:(_Bool)arg5 withCurrentDate:(id)arg6 forStartLabel:(_Bool)arg7;
- (_Bool)isEffectiveAllDay;
- (_Bool)isDateWithinEffectiveAllDayRange:(id)arg1;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_updateEffectiveAllDayTimes;
- (void)_resetEffectiveAllDayState:(_Bool)arg1;
- (void)_resetModelProperties;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)_configureTimer;
- (void)_invalidateTimer;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


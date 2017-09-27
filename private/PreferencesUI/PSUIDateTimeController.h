//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "PSUIDateTimePickerCellDelegate.h"

@class NSIndexPath, NSTimer, PSSpecifier, PSWallClockMinuteTimer;

@interface PSUIDateTimeController : PSListController <PSUIDateTimePickerCellDelegate>
{
    NSIndexPath *_setDateAndTimeIndexPath;
    NSTimer *_timer;
    _Bool _localeForces24HourTime;
    struct __CFDateFormatter *_dateFormatter;
    struct __CFDateFormatter *_timeFormatter;
    PSSpecifier *_timeZoneSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_currentTimeSpecifier;
    PSWallClockMinuteTimer *_minuteTimer;
}

@property(retain, nonatomic) PSWallClockMinuteTimer *minuteTimer; // @synthesize minuteTimer=_minuteTimer;
@property(retain) PSSpecifier *currentTimeSpecifier; // @synthesize currentTimeSpecifier=_currentTimeSpecifier;
@property(retain) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property(retain) PSSpecifier *timeZoneSpecifier; // @synthesize timeZoneSpecifier=_timeZoneSpecifier;
- (void).cxx_destruct;
- (id)currentDateString;
- (id)currentTimeString;
- (void)_createDateTimeFormatters;
- (void)_updateCurrentTime;
- (void)setTimeZoneValue:(id)arg1 specifier:(id)arg2;
- (id)timeZoneValue:(id)arg1;
- (void)set24HourTime:(id)arg1 specifier:(id)arg2;
- (id)is24HourTime:(id)arg1;
- (void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2;
- (id)useAutomaticTime:(id)arg1;
- (id)valueForTime:(id)arg1;
- (_Bool)shouldDisplayTimezoneSpinner;
- (void)localeChanged:(id)arg1;
- (void)significantTimeChange:(id)arg1;
- (void)newCarrierNotification;
- (void)datePickerChanged:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)makeCurrentTimeSpecifier;
- (id)makeTimePickerSpecifier;
- (void)reloadTimezone;
- (void)setAutomaticTimeFooter;
- (id)specifiers;
- (id)init;
- (void)dealloc;
- (void)_setSpecifier:(id)arg1 valueEnabled:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "PSUIDateTimePickerCellDelegate.h"

@class CBClient, NSDateFormatter, PSSpecifier;

@interface PSUIColorScheduleController : PSListController <PSUIDateTimePickerCellDelegate>
{
    CBClient *_brightnessClient;
    PSSpecifier *_radioGroup;
    PSSpecifier *_sunsetToSunriseRadioSpecifier;
    PSSpecifier *_scheduleRadioSpecifier;
    PSSpecifier *_timeGroup;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    NSDateFormatter *_timeFormatter;
    _Bool _showingScheduleSpecifiers;
}

- (void).cxx_destruct;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleBlueLightStatusChanged:(CDStruct_f4084295 *)arg1;
- (int)blueLightMode;
- (id)endTime;
- (id)startTime;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (void)showScheduleSpecifiers:(_Bool)arg1 animated:(_Bool)arg2;
- (id)specifiers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


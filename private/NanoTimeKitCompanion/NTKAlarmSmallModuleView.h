//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

#import "NTKAlarmComplicationDisplay.h"

@class NSDate, NSString, NTKColoringLabel, NTKDigitalTimeLabel, NTKStackedImagesComplicationImageView;

@interface NTKAlarmSmallModuleView : NTKComplicationModuleView <NTKAlarmComplicationDisplay>
{
    NTKStackedImagesComplicationImageView *_alarmGlyph;
    NTKDigitalTimeLabel *_timeLabel;
    NTKColoringLabel *_messageLabel;
    NSDate *_alarmDate;
    _Bool _snoozing;
}

- (void).cxx_destruct;
- (void)_updateTime;
- (void)setStateSnoozingWithDuration:(double)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateNoAlarms;
- (void)setStateAllAlarmsOff;
- (id)_alarmInactiveImageProviderXL:(_Bool)arg1;
- (void)_layoutContentView;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end


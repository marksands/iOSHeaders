//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class CLKComplicationTemplate;

@interface NTKCompanionComplicationDataSource : NTKComplicationDataSource
{
    CLKComplicationTemplate *_complicationTemplate;
}

+ (_Bool)acceptsClassicComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)arg1;
- (id)_siriTemplate;
- (id)_newsTemplate;
- (id)_messagesTemplate;
- (id)_stocksTemplate;
- (id)_breathingTemplate;
- (id)_reminderTemplate;
- (id)_workoutTemplate;
- (id)_nowPlayingTemplate;
- (id)_podcastTemplate;
- (id)_radioTemplate;
- (id)_musicTemplate;
- (id)_city;
- (id)_worldClockTemplate;
- (id)_alarmTemplate;
- (id)_stopwatchTemplate;
- (id)_timerTemplate;
- (id)_moonPhaseTemplate;
- (id)_nextEventTemplate;
- (id)_wellnessTemplate;
- (id)_sunriseTemplate;
- (id)_heartrateTemplate;
- (id)_batteryTemplate;
- (id)_dateTemplate;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)_createConditionsUtilitarianSmallFlatTemplate;
- (id)_createConditionsUtilitarianSmallTemplate;
- (id)_createConditionsModularSmallTemplate;
- (id)_createConditionsExtraLargeTemplate;
- (id)_createConditionsCircularSmallTemplate;
- (id)_createConditionsCircularMediumTemplate;
- (id)_weatherConditionsTemplate;
- (id)_createUtilitarianSmallTemplate;
- (id)_createUtilitarianLargeTemplate;
- (id)_createModularSmallTemplate;
- (id)_createModularLargeTemplate;
- (id)_createExtraLargeTemplate;
- (id)_createCircularSmallTemplate;
- (id)_createCircularMediumTemplate;
- (id)_weatherTemplate;

@end


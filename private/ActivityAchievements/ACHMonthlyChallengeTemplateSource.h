//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACHTemplateSource.h"

@class ACHMonthlyChallengeDataSource, ACHMonthlyChallengeTemplateDataProvider, ACHSyncingMonthlyChallengeTemplateCache, NSCalendar, NSDate, NSObject<ACHTemplateSourceDelegate>, NSString;

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource>
{
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    _Bool _isAppleWatch;
    NSCalendar *_currentCalendar;
    NSDate *_currentDate;
    ACHMonthlyChallengeDataSource *_dataSource;
    ACHMonthlyChallengeTemplateDataProvider *_templateDataProvider;
    ACHSyncingMonthlyChallengeTemplateCache *_templateCache;
}

@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache; // @synthesize templateCache=_templateCache;
@property(retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider; // @synthesize templateDataProvider=_templateDataProvider;
@property(retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
- (void).cxx_destruct;
- (void)setCurrentCalendarOverride:(id)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (_Bool)_monthlyChallengeIsRingBased:(unsigned long long)arg1;
- (double)_roundedGoalValue:(double)arg1 monthlyChallengeType:(unsigned long long)arg2;
- (double)_goalValueForCurrentMonthForType:(unsigned long long)arg1;
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)arg1;
- (unsigned long long)_numberOfDaysInMonthForDate:(id)arg1;
- (id)_dateComponentIntervalForTwoMonthsAgo;
- (id)_dateComponentIntervalForLastMonth;
- (id)_dateComponentIntervalForCurrentMonth;
- (_Bool)_isInFirstWeekOfCurrentMonth:(id)arg1;
- (unsigned long long)_getRandomMonthlyChallengeType;
- (id)_availableMonthlyChallengeTypes;
- (_Bool)isMonthlyChallengeOfTypeAvailable:(unsigned long long)arg1;
- (_Bool)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)arg1;
- (id)customPlaceholderValuesForTemplate:(id)arg1;
- (id)_monthStringFromTemplateName:(id)arg1;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)arg1 dateCompoonentInterval:(id)arg2 goalValue:(double)arg3;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)sourceShouldRunForDate:(id)arg1;
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithDataSource:(id)arg1 dataProvider:(id)arg2 templateCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


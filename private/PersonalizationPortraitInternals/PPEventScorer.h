//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAEmailAddressSet, NSDictionary, NSSet;

@interface PPEventScorer : NSObject
{
    NSDictionary *_pastEventTitlesAndParticipants;
    double _earliestStartTime;
    _Bool _shouldConsiderAlarms;
    EAEmailAddressSet *_emailVIPEmailAddresses;
    NSSet *_favoritesEmailAddresses;
    int _rankingOptions;
}

+ (void)clearAssetCache;
+ (id)extraordinaryThresholdConfig;
+ (void)setLocationsOfInterestLocations:(id)arg1 withReferenceDate:(id)arg2;
+ (id)cacheKeyforCoreRoutineCacheForStartDate:(id)arg1 endDate:(id)arg2;
+ (id)participantsInEvent:(id)arg1;
+ (id)emailAddressFromEKAttendee:(id)arg1;
+ (id)enrichDictionary:(id)arg1 withEvent:(id)arg2;
+ (_Bool)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2;
- (void).cxx_destruct;
- (id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)arg1;
- (id)emailVIPEmailAddresses;
- (void)setFavoritesEmailAddresses:(id)arg1;
- (void)setEmailVIPEmailAddresses:(id)arg1;
- (id)favoriteEmailAddresses;
- (id)scoreURL:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreNotes:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreParticipantsInEmailVIPAndFavorites:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreCoreRoutine:(id)arg1 usingDate:(id)arg2 withFeatureSchema:(id)arg3;
- (id)scoreAttachments:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreTravelTimeSet:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreAlarmIsSet:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreParticipantsInPast:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreAvailabilityStatus:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreSelfAttendeeRole:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreUnusualStartTime:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreTitle:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreCalendar:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreContentModifications:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreDuration:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreParticipantStatusAndCount:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreSuggestionsInfo:(id)arg1 withFeatureSchema:(id)arg2;
- (id)scoreRecurrenceRules:(id)arg1 withFeatureSchema:(id)arg2;
- (_Bool)isHomeCalendar:(id)arg1;
- (_Bool)isWorkCalendar:(id)arg1;
- (id)scoreEvent:(id)arg1 usingDate:(id)arg2;
- (id)init;
- (id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(_Bool)arg3 withOptions:(int)arg4;

@end


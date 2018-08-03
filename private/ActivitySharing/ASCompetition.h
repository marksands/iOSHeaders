//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSDateComponents, NSUUID;

@interface ASCompetition : NSObject <NSCopying>
{
    NSUUID *_UUID;
    long long _currentCacheIndex;
    long long _lastPushedCacheIndex;
    NSArray *_scores;
    NSArray *_opponentScores;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_durationDateComponents;
    NSArray *_preferredVictoryBadgeStyles;
    unsigned long long _maximumNumberOfPointsPerDay;
    NSDate *_currentDateOverride;
}

+ (id)competitionWithCodableCompetition:(id)arg1;
+ (id)codableDatabaseCompetitionsFromCompetitions:(id)arg1 withFriendWithUUID:(id)arg2 withType:(long long)arg3;
@property(retain, nonatomic) NSDate *currentDateOverride; // @synthesize currentDateOverride=_currentDateOverride;
@property(nonatomic) unsigned long long maximumNumberOfPointsPerDay; // @synthesize maximumNumberOfPointsPerDay=_maximumNumberOfPointsPerDay;
@property(retain, nonatomic) NSArray *preferredVictoryBadgeStyles; // @synthesize preferredVictoryBadgeStyles=_preferredVictoryBadgeStyles;
@property(retain, nonatomic) NSDateComponents *durationDateComponents; // @synthesize durationDateComponents=_durationDateComponents;
@property(retain, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
@property(retain, nonatomic) NSArray *opponentScores; // @synthesize opponentScores=_opponentScores;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(nonatomic) long long lastPushedCacheIndex; // @synthesize lastPushedCacheIndex=_lastPushedCacheIndex;
@property(nonatomic) long long currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)_scoresForParticipant:(long long)arg1;
- (id)currentDate;
- (_Bool)isEqualToCompetition:(id)arg1;
@property(readonly, nonatomic) _Bool hasPushedFinalScore;
@property(readonly, nonatomic) _Bool hasCalculatedFinalScore;
- (_Bool)isParticipantWinning:(long long)arg1;
- (id)daysWonByParticipant:(long long)arg1;
- (unsigned long long)dailyScoreForParticipant:(long long)arg1 onDate:(id)arg2;
@property(readonly, nonatomic) _Bool isScoreTied;
@property(readonly, nonatomic) unsigned long long opponentDailyAverageScore;
@property(readonly, nonatomic) unsigned long long opponentTotalScore;
@property(readonly, nonatomic) unsigned long long myDailyAverageScore;
@property(readonly, nonatomic) unsigned long long myTotalScore;
@property(readonly, nonatomic) long long stage;
@property(readonly, nonatomic) unsigned long long numberOfDaysRemaining;
@property(readonly, nonatomic) long long endDateCacheIndex;
@property(readonly, nonatomic) _Bool isLastDayOfCompetition;
@property(readonly, nonatomic) _Bool isFirstDayOfCompetition;
@property(readonly, nonatomic) NSDate *lastDayOfCompetition;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) unsigned int victoryBadgeStyle;
@property(readonly, nonatomic) _Bool isDailyScoreCapped;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)codableCompetition;

@end


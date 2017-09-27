//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSNumber, NSString;

@interface SASportsTeam : SASportsEntity
{
}

+ (id)teamWithDictionary:(id)arg1 context:(id)arg2;
+ (id)team;
@property(copy, nonatomic) NSString *wins;
@property(copy, nonatomic) NSString *winPercentage;
@property(copy, nonatomic) NSString *venueName;
@property(copy, nonatomic) NSString *venueLocation;
@property(copy, nonatomic) NSString *ties;
@property(copy, nonatomic) NSString *streakType;
@property(copy, nonatomic) NSString *streakNumber;
@property(copy, nonatomic) NSArray *statistics;
@property(copy, nonatomic) NSNumber *secondaryColor;
@property(copy, nonatomic) NSArray *rankings;
@property(copy, nonatomic) NSString *qualificationPositionSummary;
@property(copy, nonatomic) NSString *qualificationPosition;
@property(copy, nonatomic) NSNumber *primaryColor;
@property(copy, nonatomic) NSString *pointsFor;
@property(copy, nonatomic) NSString *pointsAgainst;
@property(copy, nonatomic) NSString *points;
@property(copy, nonatomic) NSString *overtimeLosses;
@property(copy, nonatomic) NSArray *news;
@property(copy, nonatomic) NSString *netRunRate;
@property(copy, nonatomic) NSString *monogram;
@property(copy, nonatomic) NSString *losses;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *homeWins;
@property(copy, nonatomic) NSString *homeTies;
@property(copy, nonatomic) NSString *homePoints;
@property(copy, nonatomic) NSString *homeOvertimeLosses;
@property(copy, nonatomic) NSString *homeLosses;
@property(copy, nonatomic) NSString *groupPositionDescription;
@property(copy, nonatomic) NSNumber *groupPosition;
@property(copy, nonatomic) NSString *groupName;
@property(copy, nonatomic) NSString *gamesPlayed;
@property(copy, nonatomic) NSString *gamesBehind;
@property(copy, nonatomic) NSNumber *conferencePosition;
@property(copy, nonatomic) NSNumber *clinchedQualificationPosition;
@property(copy, nonatomic) NSString *awayWins;
@property(copy, nonatomic) NSString *awayTies;
@property(copy, nonatomic) NSString *awayPoints;
@property(copy, nonatomic) NSString *awayOvertimeLosses;
@property(copy, nonatomic) NSString *awayLosses;
@property(copy, nonatomic) NSArray *athletes;
@property(nonatomic) _Bool alwaysUseAthleteFullName;
@property(copy, nonatomic) NSString *abbreviatedName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


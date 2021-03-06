//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDateComponents, NSDictionary, NSString;

@interface STAllowance : NSObject <NSCopying>
{
    unsigned long long _allowanceType;
    NSString *_identifier;
    NSDateComponents *_time;
    NSDictionary *_timeByDay;
    NSArray *_budgetedIdentifiers;
    unsigned long long _behaviorOption;
    NSArray *_iCloudPredicateUserDSIDs;
}

+ (unsigned long long)allowanceTypeForUsageItemType:(unsigned long long)arg1;
+ (id)usageLimitTypeForAllowanceType:(unsigned long long)arg1;
+ (unsigned long long)allowanceTypeForUsageLimitType:(id)arg1;
+ (double)timeIntervalForAllowanceDateComponents:(id)arg1;
+ (id)dateComponentsForDuration:(double)arg1;
+ (id)displayNameForAllowance:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *iCloudPredicateUserDSIDs; // @synthesize iCloudPredicateUserDSIDs=_iCloudPredicateUserDSIDs;
@property(nonatomic) unsigned long long behaviorOption; // @synthesize behaviorOption=_behaviorOption;
@property(copy, nonatomic) NSArray *budgetedIdentifiers; // @synthesize budgetedIdentifiers=_budgetedIdentifiers;
@property(copy, nonatomic) NSDictionary *timeByDay; // @synthesize timeByDay=_timeByDay;
@property(copy, nonatomic) NSDateComponents *time; // @synthesize time=_time;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long allowanceType; // @synthesize allowanceType=_allowanceType;
- (void).cxx_destruct;
- (id)defaultTimeByDay;
- (id)defaultBudgetTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double timeToday;
- (void)_stAllowanceInitByParsingFamilyBudgetAllPredicate:(id)arg1;
- (void)_stAllowanceInitByParsingPersonalBudgetPredicate:(id)arg1;
- (id)initWithBudget:(id)arg1;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

@end


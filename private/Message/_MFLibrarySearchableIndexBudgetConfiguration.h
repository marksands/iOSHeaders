//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MFLibrarySearchableIndexBudgetConfiguration : NSObject
{
    long long _budgetPeriodInSeconds;
    long long _budgetInSeconds;
    long long _budgetResumeOverageCount;
}

@property(readonly, nonatomic) long long budgetResumeOverageCount; // @synthesize budgetResumeOverageCount=_budgetResumeOverageCount;
@property(readonly, nonatomic) long long budgetInSeconds; // @synthesize budgetInSeconds=_budgetInSeconds;
@property(readonly, nonatomic) long long budgetPeriodInSeconds; // @synthesize budgetPeriodInSeconds=_budgetPeriodInSeconds;
@property(readonly, nonatomic) long long xpcGracePeriod;
- (id)init;

@end


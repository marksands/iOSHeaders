//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDActivitySummaryBuilder;

@interface ACHActivitySummaryUtility : NSObject
{
    HDActivitySummaryBuilder *_summaryBuilder;
}

@property(retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder; // @synthesize summaryBuilder=_summaryBuilder;
- (void).cxx_destruct;
- (id)newEmptyActivitySummaryWithIndex:(long long)arg1 calorieGoal:(id)arg2;
- (void)enumerateActivitySummariesForDateComponentInterval:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 shouldIncludePrivateProperties:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class _CDContact, _CDInteraction, _CDInteractionRank;

@protocol _CDInteractionRanking
@property(nonatomic) unsigned long long rankAggregationMethod;
- (double)rankContact:(_CDContact *)arg1;
- (_Bool)canRankContacts;
- (_Bool)contactIsAllowed:(_CDContact *)arg1;
- (_CDInteractionRank *)rankInteraction:(_CDInteraction *)arg1;
@end


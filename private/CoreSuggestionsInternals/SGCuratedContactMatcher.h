//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGCuratedContactMatcher : NSObject
{
}

+ (id)curatedContactsFromContactStore:(id)arg1 matchingPseudoContact:(id)arg2 error:(id *)arg3;
+ (id)realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 error:(id *)arg3;
+ (id)_realtimeContactWithContactStore:(id)arg1 forPseudoContact:(id)arg2 normalizedName:(id)arg3 error:(id *)arg4;
+ (id)_realtimeContactFromPseudoContact:(id)arg1 andFeatures:(CDStruct_df2c591a *)arg2 assimilatingMatchingCuratedContacts:(id)arg3;
+ (id)_findContactsMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(CDStruct_df2c591a *)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5;
+ (id)_filterCandidates:(id)arg1 similarToName:(id)arg2 exceedingThreshold:(double)arg3;
+ (id)_filterCandidates:(id)arg1 withUniqueDetailMatchesToContact:(id)arg2 andFeatures:(CDStruct_df2c591a *)arg3;
+ (id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)arg1 withName:(id)arg2 andFeatures:(CDStruct_df2c591a *)arg3 fromContactStore:(id)arg4 withKeysToFetch:(id)arg5;
+ (id)_getPeopleWithNameToken:(id)arg1 fromContactStore:(id)arg2 withKeysToFetch:(id)arg3 ifMatchingPredicate:(CDUnknownBlockType)arg4;
+ (_Bool)_isMeContact:(id)arg1 withContactStore:(id)arg2;
+ (void)clearMeContactCache;
+ (id)fetchMeContactFromContactStore:(id)arg1;

@end


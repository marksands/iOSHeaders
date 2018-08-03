//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXPeopleUtilities : NSObject
{
}

+ (id)alertControllerForResettingPeopleWithCompletion:(CDUnknownBlockType)arg1;
+ (id)alertControllerForRemovingNumberOfPeople:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)_setDaysDictionary:(id)arg1;
+ (id)_daysDictionary;
+ (_Bool)_hasRecentlyHandledBootstrapForPerson:(id)arg1;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1;
+ (id)modelObjectsFromPersonItemArray:(id)arg1;
+ (CDUnknownBlockType)_manualOrderComparator;
+ (CDUnknownBlockType)_otherPeopleComparator;
+ (CDUnknownBlockType)comparatorForFetchType:(unsigned long long)arg1;
+ (_Bool)facesSyncFeatureEnabled;
+ (_Bool)isPersonHiddenFromPeopleHome:(id)arg1;
+ (id)assetCollectionListFetchResultForPerson:(id)arg1;
+ (void)markHandledBootstrapForPerson:(id)arg1;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 force:(_Bool)arg3 delegate:(id)arg4;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 delegate:(id)arg3;
+ (_Bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2;
+ (id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2;
+ (_Bool)shouldShowBootstrapForPerson:(id)arg1;
+ (id)createDetailsForPerson:(id)arg1;
+ (id)bootstrapContextForPersonSuggestion:(id)arg1 type:(unsigned long long)arg2;
+ (id)identifiersForPeople:(id)arg1;
+ (void)mergePersons:(id)arg1 withPerson:(id)arg2;
+ (id)_peopleHomeFetchResultForPersonType:(long long)arg1;
+ (_Bool)changePeople:(id)arg1 toPersonType:(long long)arg2 error:(id *)arg3;
+ (id)changePerson:(id)arg1 toPersonType:(long long)arg2;
+ (id)personWithLocalIdentifier:(id)arg1;
+ (id)peopleWithPersonUris:(id)arg1;
+ (id)personWithPersonUri:(id)arg1;
+ (id)sharedContactStore;

@end


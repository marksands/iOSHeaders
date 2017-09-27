//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGSearchableItemHelper : NSObject
{
}

+ (id)deserializeAttributesAndBody:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (_Bool)searchableItemIsEligibleForHarvesting:(id)arg1 isReimported:(_Bool)arg2;
+ (_Bool)searchableItemIsWhitelistedNonMessage:(id)arg1;
+ (_Bool)searchableItemIsTooBig:(id)arg1;
+ (_Bool)searchableItemIsInTrash:(id)arg1;
+ (_Bool)searchableItemIsInSent:(id)arg1;
+ (_Bool)searchableItemIsInDrafts:(id)arg1;
+ (_Bool)searchableItemIsSPAM:(id)arg1;
+ (_Bool)searchableItemIsValid:(id)arg1;
+ (_Bool)searchableItemIsRecent:(id)arg1;
+ (_Bool)searchableItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (_Bool)searchableItemIsEmpty:(id)arg1;
+ (_Bool)searchableItemIsFromSupportedAccount:(id)arg1;
+ (_Bool)searchableItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)searchableItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)searchableItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)searchableItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (id)messageIdHeaderValues:(id)arg1;
+ (_Bool)searchableItemIsRecent:(id)arg1 emailHeaders:(id)arg2;

@end


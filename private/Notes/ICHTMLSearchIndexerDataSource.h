//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource
{
}

- (void)contextWillSave:(id)arg1;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)indexableObjectIDsMatchingPredicate:(id)arg1;
- (id)allIndexableObjectIDs;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;

@end


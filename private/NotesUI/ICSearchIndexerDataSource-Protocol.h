//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class CSSearchableItem, NSArray, NSError, NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;
@protocol ICSearchIndexable;

@protocol ICSearchIndexerDataSource <NSObject>
- (_Bool)isObservingChanges;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)searchIndexerDidFinishReindexingWithError:(NSError *)arg1;
- (void)searchIndexerWillBeginReindexing;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(NSArray *)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (id <ICSearchIndexable>)objectForSearchableItemIdentifier:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (id <ICSearchIndexable>)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)searchableItemsForObjectIDs:(NSArray *)arg1;
- (NSArray *)allIndexableObjectIDs;
- (NSArray *)searchableItemIdentifiersToBeDeleted;
- (NSArray *)objectIDsNeedingIndexing;
- (NSArray *)indexableObjectIDsWithIdentifiers:(NSArray *)arg1;
- (_Bool)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSString *)dataSourceIdentifier;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICLegacyContext-Protocol.h>

@class AccountUtilities, CPExclusiveLock, NSManagedObjectContext, NSMutableDictionary, NSNumber, NoteAccountObject, NoteStoreObject;

@interface NoteContext : NSObject <ICLegacyContext>
{
    NSManagedObjectContext *_managedObjectContext;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned long long _notificationCount;
    _Bool _logChanges;
    _Bool _indexInBatches;
    _Bool _hasPriorityInSaveConflicts;
    _Bool _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
    _Bool _isMainContext;
    _Bool _usePrivateQueue;
}

+ (id)searchIndexerDataSource;
+ (id)newManagedObjectContext;
+ (id)persistentStoreCoordinator;
+ (id)managedObjectModel;
+ (id)urlForPersistentStore;
+ (id)pathForIndex;
+ (id)pathForPersistentStore;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2 context:(id)arg3 fetchLimit:(unsigned long long)arg4;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2 context:(id)arg3;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)newlyAddedAttachmentInContext:(id)arg1;
+ (id)newFetchRequestForNotes;
+ (id)visibleNotesPredicate;
+ (void)removeConflictingSqliteAndIdxFiles;
+ (void)removeSqliteAndIdxFiles;
+ (id)storeOptions;
+ (id)generateGUID;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (void)clearTestsNotesRootPath;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (_Bool)databaseIsCorrupt:(id)arg1;
+ (_Bool)shouldLogIndexing;
+ (id)newLegacyContext;
@property(nonatomic) _Bool usePrivateQueue; // @synthesize usePrivateQueue=_usePrivateQueue;
@property(nonatomic) _Bool isMainContext; // @synthesize isMainContext=_isMainContext;
@property(retain, nonatomic) AccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
- (void).cxx_destruct;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)cleanUpLocks;
- (void)trackChanges:(id)arg1;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (void)resetNotificationCount;
- (void)receiveDarwinNotificationWithChangeLogging:(_Bool)arg1;
- (_Bool)shouldObserveDarwinNotifications;
@property(readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
- (void)setHasPriorityInSaveConflicts:(_Bool)arg1;
- (id)nextIndex;
- (id)getNextIdObject;
- (void)handleMigration;
- (id)propertyValueForKey:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (_Bool)hasMultipleEnabledStores;
- (_Bool)shouldDisableLocalStore;
- (_Bool)deleteStore:(id)arg1;
- (_Bool)deleteAccount:(id)arg1;
- (_Bool)forceDeleteAccount:(id)arg1;
- (id)localAccount;
- (id)localStore;
- (id)defaultStoreForNewNote;
- (id)accountForAccountId:(id)arg1;
- (id)newlyAddedAccount;
- (id)allAccountsAsFaults:(_Bool)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allAccounts;
- (unsigned long long)countOfStores;
- (id)faultedInStoresForAccounts:(id)arg1;
- (id)allStores;
- (id)newlyAddedStore;
- (id)collectionForInfo:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)noteForObjectID:(id)arg1;
- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfNotesInCollection:(id)arg1;
- (id)allNotesInCollection:(id)arg1;
- (unsigned long long)countOfNotes;
- (id)allNotes;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(_Bool)arg2;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned long long)countOfVisibleNotes;
- (id)allVisibleNotes;
- (_Bool)saveSilently:(id *)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)saveOutsideApp:(id *)arg1;
- (void)invalidate;
- (void)enableChangeLogging:(_Bool)arg1;
- (void)deleteChanges:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (void)deleteNote:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (id)newlyAddedAttachment;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedNote;
- (void)batchFaultNotes:(id)arg1;
- (void)sortNotes:(id)arg1;
- (void)clearCaches;
- (id)newFetchRequestForNotes;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(_Bool)arg3;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)liveNotesNeedingBodiesPredicate;
- (id)visibleNotesPredicate;
- (void)dealloc;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(_Bool)arg2 isMainContext:(_Bool)arg3 usePrivateQueue:(_Bool)arg4;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(_Bool)arg2;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initWithPrivateQueue;
- (id)initForMigrator;
- (id)initForMainContext;
- (id)init;
- (void)tearDownCoreDataStack;
- (_Bool)setUpCoreDataStack;
- (void)setUpUniqueObjects;
- (void)forceSetUpUniqueObjects;
- (_Bool)setUpLastIndexTid;
- (_Bool)setUpLocalAccountAndStore;
- (void)_createLocalAccount:(id *)arg1 andStore:(id *)arg2;
- (void)reset;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
- (id)allVisibleNotesForAccountWithObjectID:(id)arg1;
- (_Bool)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDContentProtectionObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDatabase.h"
#import "HDSQLiteDatabaseDelegate.h"
#import "HDSQLiteDatabasePoolDelegate.h"

@class HDContentProtectionManager, HDDatabaseJournal, HDProfile, HDSQLiteDatabasePool, HKObserverSet, NSConditionLock, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface HDDatabase : NSObject <HDSQLiteDatabasePoolDelegate, HDContentProtectionObserver, HDDiagnosticObject, HDHealthDatabase, HDSQLiteDatabaseDelegate>
{
    shared_ptr_88ae0538 _highFrequencyDataStore;
    _Bool _shouldNotifyFirstUnlockObservers;
    _Bool _isObservingContentProtection;
    _Bool _checkpointRequired;
    _Bool _hasScheduledCheckpoint;
    _Bool _integrityCheckInProgress;
    _Bool _didRunPostMigrationUpdates;
    int _invalidated;
    HDDatabaseJournal *_journal;
    HDDatabaseJournal *_cloudSyncJournal;
    HDProfile *_profile;
    double _offsetTimeInterval;
    NSString *_profileDirectoryPath;
    HDContentProtectionManager *_contentProtectionManager;
    NSString *_threadLocalActiveConnectionKey;
    NSString *_threadLocalSecondaryJournalKey;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    NSMutableArray *_firstUnlockBlocks;
    long long _protectedDataState;
    long long _observedContentProtectionState;
    HKObserverSet *_protectedDataObservers;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    unsigned long long _pendingJournalMerges;
    NSObject<OS_dispatch_queue> *_secondaryJournalMergeQueue;
    NSObject<OS_dispatch_queue> *_hfdQueue;
    NSMutableDictionary *_extendedTransactions;
    HDSQLiteDatabasePool *_databasePool;
}

+ (void)didPassIntegrityCheck;
+ (void)reportIntegrityCheckFailure;
+ (void)didEncounterUncorruptedDatabaseWithName:(id)arg1;
+ (void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1;
+ (id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1;
+ (id)allCurrentAndFutureEntityClasses;
+ (void)loadEntityClasses;
@property(readonly, nonatomic) HDSQLiteDatabasePool *databasePool; // @synthesize databasePool=_databasePool;
@property(nonatomic) _Bool didRunPostMigrationUpdates; // @synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates;
@property(retain, nonatomic) NSMutableDictionary *extendedTransactions; // @synthesize extendedTransactions=_extendedTransactions;
@property(nonatomic) _Bool integrityCheckInProgress; // @synthesize integrityCheckInProgress=_integrityCheckInProgress;
@property(nonatomic) _Bool hasScheduledCheckpoint; // @synthesize hasScheduledCheckpoint=_hasScheduledCheckpoint;
@property(nonatomic) _Bool checkpointRequired; // @synthesize checkpointRequired=_checkpointRequired;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hfdQueue; // @synthesize hfdQueue=_hfdQueue;
@property(nonatomic) int invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *secondaryJournalMergeQueue; // @synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue;
@property(nonatomic) unsigned long long pendingJournalMerges; // @synthesize pendingJournalMerges=_pendingJournalMerges;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *journalGroup; // @synthesize journalGroup=_journalGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property(retain, nonatomic) HKObserverSet *protectedDataObservers; // @synthesize protectedDataObservers=_protectedDataObservers;
@property(nonatomic) _Bool isObservingContentProtection; // @synthesize isObservingContentProtection=_isObservingContentProtection;
@property(nonatomic) _Bool shouldNotifyFirstUnlockObservers; // @synthesize shouldNotifyFirstUnlockObservers=_shouldNotifyFirstUnlockObservers;
@property(nonatomic) long long observedContentProtectionState; // @synthesize observedContentProtectionState=_observedContentProtectionState;
@property(nonatomic) long long protectedDataState; // @synthesize protectedDataState=_protectedDataState;
@property(retain, nonatomic) NSMutableArray *firstUnlockBlocks; // @synthesize firstUnlockBlocks=_firstUnlockBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *protectedDataQueue; // @synthesize protectedDataQueue=_protectedDataQueue;
@property(retain, nonatomic) NSOperationQueue *asynchronousOperationQueue; // @synthesize asynchronousOperationQueue=_asynchronousOperationQueue;
@property(retain, nonatomic) NSHashTable *migratedDatabases; // @synthesize migratedDatabases=_migratedDatabases;
@property(retain, nonatomic) NSMutableSet *activeDatabases; // @synthesize activeDatabases=_activeDatabases;
@property(retain, nonatomic) NSConditionLock *activeDatabasesLock; // @synthesize activeDatabasesLock=_activeDatabasesLock;
@property(retain, nonatomic) NSLock *schemaMigrationLock; // @synthesize schemaMigrationLock=_schemaMigrationLock;
@property(copy, nonatomic) NSString *threadLocalSecondaryJournalKey; // @synthesize threadLocalSecondaryJournalKey=_threadLocalSecondaryJournalKey;
@property(copy, nonatomic) NSString *threadLocalActiveConnectionKey; // @synthesize threadLocalActiveConnectionKey=_threadLocalActiveConnectionKey;
@property(retain, nonatomic) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property(copy, nonatomic) NSString *profileDirectoryPath; // @synthesize profileDirectoryPath=_profileDirectoryPath;
@property(nonatomic) double offsetTimeInterval; // @synthesize offsetTimeInterval=_offsetTimeInterval;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal; // @synthesize cloudSyncJournal=_cloudSyncJournal;
@property(readonly, nonatomic) HDDatabaseJournal *journal; // @synthesize journal=_journal;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2;
- (void)invalidateAndWait;
- (id)virtualFilesystemModuleForDatabase:(id)arg1;
- (id)diagnosticDescription;
- (_Bool)accessHighFrequencyDataStoreWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)highFrequencyDataStoreURL;
- (shared_ptr_88ae0538)_highFrequencyDataStoreWithError:(id *)arg1;
- (_Bool)discardHighFrequencyDataStoreWithError:(id *)arg1;
- (void)_mergeSecondaryJournals;
- (_Bool)_journalQueue_performJournalMergeAndCleanup;
- (id)_currentDatabaseJournal;
- (id)_secondaryJournal:(long long)arg1;
- (_Bool)performWithSecondaryJournal:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)addJournalEntries:(id)arg1 error:(id *)arg2;
- (_Bool)addJournalEntry:(id)arg1 error:(id *)arg2;
- (void)removeProtectedDataObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)_protectedDatabaseDidBecomeAvailable;
@property(readonly, nonatomic, getter=isProtectedDataAvailable) _Bool protectedDataAvailable;
@property(readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) _Bool dataProtectedByFirstUnlockAvailable;
- (long long)_protectedDataState;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)beginObservingContentProtection;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id *)arg2;
- (_Bool)_isDatabaseValidWithError:(id *)arg1;
- (id)_readerDatabaseWithError:(id *)arg1;
- (id)_highPriorityReaderDatabaseWithError:(id *)arg1;
- (id)_writerDatabaseWithError:(id *)arg1;
- (long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id *)arg2;
- (_Bool)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_newDatabaseConnectionWithError:(id *)arg1;
- (id)_createDatabaseConnectionWithURL:(id)arg1;
- (id)_createDatabaseConnection;
- (id)protectedDatabaseURL;
- (id)mainDatabaseURL;
- (void)_enableIncrementalAutoVacuumForDatabaseAtURL:(id)arg1;
- (_Bool)performMigrationForOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)databaseSizeInBytesExcludingHFD;
- (id)HFDSizeInBytes;
- (id)dumpSchemaAndReturnError:(id *)arg1;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (id)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)performJournalMergeWithOptions:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performAsynchronously:(CDUnknownBlockType)arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(CDUnknownBlockType)arg1;
- (_Bool)performTransactionWithOptions:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (id)_databaseForOptions:(unsigned long long)arg1 outerDatabase:(id)arg2 error:(id *)arg3;
- (_Bool)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_canAttachProtectedDatabaseWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)_reportDatabaseSizes;
- (id)_URLForWALForDatabaseAtURL:(id)arg1;
- (long long)_fileSizeForURL:(id)arg1 error:(id *)arg2;
- (void)_setActiveDatabase:(id)arg1;
- (id)_activeDatabase;
- (id)_cloudSyncJournalDirectoryPath;
- (id)_journalDirectoryPath;
- (id)initWithProfile:(id)arg1;
- (id)allEntityClassesWithProtectionClass:(long long)arg1;
- (id)allEntityClasses;
- (_Bool)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_migrateDatabase:(id)arg1 fromUserVersion:(long long)arg2 protectedDatabase:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 error:(id *)arg3;
- (long long)currentSchemaVersionForProtectedDatabase:(_Bool)arg1;
- (id)_databaseNameForProtectedDatabase:(_Bool)arg1;
- (long long)_createEntitiesInDatabase:(id)arg1 protectedEntities:(_Bool)arg2 error:(id *)arg3;
- (long long)_migrateOrCreateSchemaWithDatabase:(id)arg1 protectedDatabase:(_Bool)arg2 error:(id *)arg3;
- (long long)migrateOrCreateSchemaInDatabase:(id)arg1 protectedDatabaseAvailable:(_Bool)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


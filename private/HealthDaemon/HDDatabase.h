//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDAssertionObserver.h"
#import "HDContentProtectionObserver.h"
#import "HDDiagnosticObject.h"
#import "HDHealthDatabase.h"
#import "HDSQLiteDatabaseDelegate.h"
#import "HDSQLiteDatabasePoolDelegate.h"
#import "HDSQLiteDatabaseProvider.h"

@class HDAssertionManager, HDContentProtectionManager, HDDatabaseJournal, HDProfile, HKObserverSet, NSConditionLock, NSDate, NSDictionary, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDHealthDatabase>
{
    // Error parsing type: AB, name: _invalidated
    NSObject<OS_dispatch_queue> *_hfdQueue;
    shared_ptr_88ae0538 _highFrequencyDataStore;
    NSLock *_writeLock;
    NSObject<OS_dispatch_queue> *_protectedDataQueue;
    HKObserverSet *_protectedDataObservers;
    long long _protectedDataState;
    long long _observedContentProtectionState;
    _Bool _isObservingContentProtection;
    NSMutableArray *_firstUnlockBlocks;
    _Bool _shouldNotifyFirstUnlockObservers;
    NSDate *_protectedDataFlushDeadlineDate;
    NSObject<OS_dispatch_source> *_protectedDataFlushDeadlineTimer;
    _Bool _hasFlushedProtectedData;
    _Bool _didRunPostMigrationUpdates;
    HDDatabaseJournal *_journal;
    HDDatabaseJournal *_cloudSyncJournal;
    HDProfile *_profile;
    NSString *_profileDirectoryPath;
    NSString *_threadLocalTransactionKey;
    NSString *_threadLocalTransactionContextKey;
    NSString *_threadLocalIgnoreTransactionContextKey;
    HDContentProtectionManager *_contentProtectionManager;
    HDAssertionManager *_assertionManager;
    NSLock *_schemaMigrationLock;
    NSConditionLock *_activeDatabasesLock;
    NSMutableSet *_activeDatabases;
    NSHashTable *_migratedDatabases;
    NSOperationQueue *_asynchronousOperationQueue;
    NSObject<OS_dispatch_queue> *_journalQueue;
    NSObject<OS_dispatch_group> *_journalGroup;
    unsigned long long _pendingJournalMerges;
    NSObject<OS_dispatch_queue> *_secondaryJournalMergeQueue;
    NSMutableDictionary *_extendedTransactions;
    NSDictionary *_databasePoolForType;
    double _offsetTimeInterval;
    double _protectedDataFlushInterval;
    CDUnknownBlockType _unitTest_didWaitForJournalMergeHandler;
}

+ (void)didPassIntegrityCheck;
+ (void)reportIntegrityCheckFailure;
+ (void)didEncounterUncorruptedDatabaseWithName:(id)arg1;
+ (void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1;
+ (id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1;
+ (id)allCurrentAndFutureEntityClasses;
+ (void)loadEntityClasses;
@property(copy, nonatomic) CDUnknownBlockType unitTest_didWaitForJournalMergeHandler; // @synthesize unitTest_didWaitForJournalMergeHandler=_unitTest_didWaitForJournalMergeHandler;
@property(nonatomic) _Bool didRunPostMigrationUpdates; // @synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates;
@property(nonatomic) double protectedDataFlushInterval; // @synthesize protectedDataFlushInterval=_protectedDataFlushInterval;
@property(nonatomic) double offsetTimeInterval; // @synthesize offsetTimeInterval=_offsetTimeInterval;
@property(retain, nonatomic) NSDictionary *databasePoolForType; // @synthesize databasePoolForType=_databasePoolForType;
@property(retain, nonatomic) NSMutableDictionary *extendedTransactions; // @synthesize extendedTransactions=_extendedTransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *secondaryJournalMergeQueue; // @synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue;
@property(nonatomic) unsigned long long pendingJournalMerges; // @synthesize pendingJournalMerges=_pendingJournalMerges;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *journalGroup; // @synthesize journalGroup=_journalGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // @synthesize journalQueue=_journalQueue;
@property(retain, nonatomic) NSOperationQueue *asynchronousOperationQueue; // @synthesize asynchronousOperationQueue=_asynchronousOperationQueue;
@property(retain, nonatomic) NSHashTable *migratedDatabases; // @synthesize migratedDatabases=_migratedDatabases;
@property(retain, nonatomic) NSMutableSet *activeDatabases; // @synthesize activeDatabases=_activeDatabases;
@property(retain, nonatomic) NSConditionLock *activeDatabasesLock; // @synthesize activeDatabasesLock=_activeDatabasesLock;
@property(retain, nonatomic) NSLock *schemaMigrationLock; // @synthesize schemaMigrationLock=_schemaMigrationLock;
@property(retain, nonatomic) HDAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(retain, nonatomic) HDContentProtectionManager *contentProtectionManager; // @synthesize contentProtectionManager=_contentProtectionManager;
@property(readonly, copy, nonatomic) NSString *threadLocalIgnoreTransactionContextKey; // @synthesize threadLocalIgnoreTransactionContextKey=_threadLocalIgnoreTransactionContextKey;
@property(readonly, copy, nonatomic) NSString *threadLocalTransactionContextKey; // @synthesize threadLocalTransactionContextKey=_threadLocalTransactionContextKey;
@property(readonly, copy, nonatomic) NSString *threadLocalTransactionKey; // @synthesize threadLocalTransactionKey=_threadLocalTransactionKey;
@property(readonly, copy, nonatomic) NSString *profileDirectoryPath; // @synthesize profileDirectoryPath=_profileDirectoryPath;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDDatabaseJournal *cloudSyncJournal; // @synthesize cloudSyncJournal=_cloudSyncJournal;
@property(readonly, nonatomic) HDDatabaseJournal *journal; // @synthesize journal=_journal;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)unitTest_currentTransaction;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(_Bool)arg2;
- (void)invalidateAndWait;
@property(readonly) _Bool invalidated;
- (id)virtualFilesystemModuleForDatabase:(id)arg1;
- (id)diagnosticDescription;
- (_Bool)accessHighFrequencyDataStoreWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)highFrequencyDataStoreURL;
- (shared_ptr_88ae0538)_highFrequencyDataStoreWithError:(id *)arg1;
- (_Bool)discardHighFrequencyDataStoreWithError:(id *)arg1;
- (void)_mergeSecondaryJournals;
- (_Bool)_journalQueue_performJournalMergeAndCleanup;
- (id)_currentDatabaseJournal;
- (_Bool)_waitForMergesWithCurrentJournal:(id)arg1 error:(id *)arg2;
- (id)_journalForType:(long long)arg1;
- (_Bool)addJournalEntries:(id)arg1 error:(id *)arg2;
- (_Bool)addJournalEntry:(id)arg1 error:(id *)arg2;
- (_Bool)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
- (void)_protectedDataQueue_flushProtectedDataIfNecessary;
- (void)_protectedDataQueue_cancelProtectedDataFlushTimer;
- (_Bool)_allowProtectedDataAccessWhileLockedWithTransactionContext:(id)arg1;
- (id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id *)arg3;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(_Bool)arg2 timeout:(double)arg3 error:(id *)arg4;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (void)removeProtectedDataObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1 queue:(id)arg2;
- (void)addProtectedDataObserver:(id)arg1;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
@property(readonly, nonatomic, getter=isProtectedDataAvailable) _Bool protectedDataAvailable;
@property(readonly, nonatomic, getter=isDataProtectedByFirstUnlockAvailable) _Bool dataProtectedByFirstUnlockAvailable;
- (long long)_protectedDataState;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)beginObservingContentProtection;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id *)arg2;
- (void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(_Bool)arg3;
- (void)checkInDatabase:(id)arg1 type:(long long)arg2;
- (id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)databaseTransaction:(id)arg1 checkOutDatabaseWithType:(long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)_enableSecureDeleteForDatabase:(id)arg1 error:(id *)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (_Bool)_isDatabaseValidWithError:(id *)arg1;
- (long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id *)arg2;
- (_Bool)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transactionContext:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)performMigrationWithTransactionContext:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_newDatabaseConnectionWithError:(id *)arg1;
- (id)_createDatabaseConnectionWithURL:(id)arg1;
- (id)_createDatabaseConnection;
- (id)protectedDatabaseURL;
- (id)mainDatabaseURL;
- (id)databaseSizeInBytesExcludingHFD;
- (id)HFDSizeInBytes;
- (id)dumpSchemaAndReturnError:(id *)arg1;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (id)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)performWithJournalType:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)performAsynchronously:(CDUnknownBlockType)arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(CDUnknownBlockType)arg1;
- (_Bool)performWithTransactionContext:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)performTransactionWithOptions:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (_Bool)performTransactionWithContext:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4 inaccessibilityHandler:(CDUnknownBlockType)arg5;
- (_Bool)performTransactionWithOptions:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (id)databasePoolForDatabaseType:(long long)arg1;
- (_Bool)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)_canAttachProtectedDatabaseForTransaction:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)_reportDatabaseSizes;
- (id)_URLForWALForDatabaseAtURL:(id)arg1;
- (long long)_fileSizeForURL:(id)arg1 error:(id *)arg2;
- (id)_threadLocalTransactionContext;
- (id)_threadLocalTransaction;
- (id)_cloudSyncJournalDirectoryPath;
- (id)_journalDirectoryPath;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)allEntityClassesWithProtectionClass:(long long)arg1;
- (id)allEntityClasses;
- (_Bool)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id *)arg3;
- (_Bool)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id *)arg2;
- (long long)_migrateWithMigrationTransaction:(id)arg1 fromUserVersion:(long long)arg2 error:(id *)arg3;
- (_Bool)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id *)arg4;
- (void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4;
- (_Bool)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id *)arg4;
- (_Bool)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id *)arg4;
- (_Bool)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id *)arg4;
- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (void)_enableIncrementalAutovacuumIfNeededForTransaction:(id)arg1;
- (long long)_createEntitiesWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (long long)_migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (long long)_verifyDatabaseIdentifiersAreValidWithMigrationTransaction:(id)arg1 error:(id *)arg2;
- (long long)migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


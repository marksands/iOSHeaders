//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCloudKitMirroringDelegate, NSFileManager, NSManagedObjectModel, NSMutableDictionary, NSString, NSURL, _DKDataProtectionStateMonitor;
@protocol OS_dispatch_queue, _DKCoreDataStorageDelegate;

@interface _DKCoreDataStorage : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_paths;
    NSMutableDictionary *_syncPaths;
    NSMutableDictionary *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    NSObject<OS_dispatch_queue> *_queueMOC;
    NSObject<OS_dispatch_queue> *_queuePSC;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    NSFileManager *_fm;
    NSCloudKitMirroringDelegate *_mirroringDelegate;
    _Bool _readOnly;
    _Bool _localOnly;
    NSString *_directory;
    NSURL *_modelURL;
    NSString *_databaseName;
    id <_DKCoreDataStorageDelegate> _delegate;
    NSString *_containerIdentifier;
}

+ (unsigned long long)anonymizeObjectStringsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 salt:(id)arg8;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)arg1 withSalt:(id)arg2;
+ (id)anonymizeString:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)updateObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 batchFetchLimit:(unsigned long long)arg5 totalFetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 updateBlock:(CDUnknownBlockType)arg8;
+ (_Bool)forceCopyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)arg1;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)arg1 context:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 sortDescriptors:(id)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 includePendingChanges:(_Bool)arg8;
+ (unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 includeSubentities:(_Bool)arg4 includePendingChanges:(_Bool)arg5;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 includeSubentities:(_Bool)arg7 includePendingChanges:(_Bool)arg8;
+ (unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchLimit:(unsigned long long)arg5 includeSubentities:(_Bool)arg6 includePendingChanges:(_Bool)arg7;
@property(readonly) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly) NSCloudKitMirroringDelegate *mirroringDelegate; // @synthesize mirroringDelegate=_mirroringDelegate;
@property __weak id <_DKCoreDataStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(readonly) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(readonly) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(readonly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly) NSString *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
- (id)copyStorageFor:(id)arg1 toDirectory:(id)arg2;
- (id)syncDatabasePathFor:(id)arg1;
- (id)databasePathFor:(id)arg1;
- (_Bool)deleteStorageFor:(id)arg1;
- (_Bool)_deleteDatabaseFiles:(id)arg1;
- (_Bool)confirmDatabaseConnectionFor:(id)arg1;
- (id)managedObjectContextFor:(id)arg1;
- (void)handleDatabaseErrors:(id)arg1 forProtectionClass:(id)arg2;
- (id)persistentStoreCoordinatorFor:(id)arg1;
- (_Bool)_addStoresToCoordinator:(id)arg1 protectionClass:(id)arg2 error:(id *)arg3;
- (id)_descriptionForStoreWithURL:(id)arg1 protectionClass:(id)arg2 sync:(_Bool)arg3;
- (id)_defaultOptionsForStoreWithProtectionClass:(id)arg1;
- (_Bool)didAutoMigratePersistentStore:(id)arg1 toManagedObjectModel:(id)arg2 havingVersion:(unsigned long long)arg3 error:(id *)arg4;
- (id)autoMigratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id *)arg4;
- (_Bool)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 startVersion:(unsigned long long)arg4 endVersion:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)migratePersistentStoreAtURL:(id)arg1 toManagedObjectModel:(id)arg2 protectionClass:(id)arg3 error:(id *)arg4;
- (id)managedObjectModelForVersion:(unsigned long long)arg1;
- (id)managedObjectModelURLForVersion:(unsigned long long)arg1;
- (unsigned long long)managedObjectModelVersionCompatibleWithPersistentStoreAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)isManagedObjectModel:(id)arg1 compatibleWithPersistentStoreAtURL:(id)arg2 error:(id *)arg3;
- (void)setManagedObjectModel:(id)arg1;
- (id)managedObjectModel;
- (void)closeStorageForProtectionClass:(id)arg1;
- (void)removePersistentStoreCoordinatorFor:(id)arg1;
- (void)removePersistentStoresInCoordinator:(id)arg1;
- (void)invalidateManagedObjectContextAndPersistentStoreCoordinatorFor:(id)arg1;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(_Bool)arg2;
- (id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(_Bool)arg4 localOnly:(_Bool)arg5;
- (id)init;

@end


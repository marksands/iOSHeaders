//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSString;

@interface ACDDatabase : NSObject
{
    NSString *_path;
    NSManagedObjectContext *_context;
    NSManagedObjectModel *_model;
    NSPersistentStore *_store;
    id _contextDidSaveNotificationObserver;
}

+ (void)_resetPeristentStoreCoordinator;
+ (id)_optionsForOpeningPersistentStore;
+ (_Bool)_isUnrecoverableDatabaseError:(id)arg1;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (_Bool)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)_managedObjectModel;
+ (struct __CFString *)_copyRootPath;
+ (id)defaultPath;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (_Bool)_databaseFileExists;
- (id)_store;
- (void)_setupManagedObjectContext;
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;
- (_Bool)saveWithError:(id *)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
@property(nonatomic) long long keychainVersion;
@property(nonatomic) long long version; // @dynamic version;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @dynamic managedObjectContext;
- (void)dealloc;
- (id)initWithTimeMachineHomeFolderPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithDefaultPath;

@end


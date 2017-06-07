//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCommandQueueDelegate-Protocol.h>

@class FCAsyncSerialQueue, FCCKRecordZone, FCCloudContext, FCCommandQueue, FCKeyValueStore, FCPushNotificationCenter, NSDate, NSHashTable, NSString;

@interface FCPrivateZoneController : NSObject <FCCommandQueueDelegate>
{
    _Bool _dirty;
    _Bool _waitingForFirstSync;
    _Bool _preparedForUse;
    _Bool _syncingEnabled;
    FCCKRecordZone *_recordZone;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    unsigned long long _dirtyCount;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
    FCCloudContext *_context;
    NSHashTable *_observers;
    FCKeyValueStore *_localStore;
}

+ (_Bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)internalLocalStoreKeys;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)localStoreMigrator;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)recordIDsToSync;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) FCAsyncSerialQueue *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) unsigned long long dirtyCount; // @synthesize dirtyCount=_dirtyCount;
@property(nonatomic, getter=hasBeenPreparedForUse) _Bool preparedForUse; // @synthesize preparedForUse=_preparedForUse;
@property(retain, nonatomic) FCCommandQueue *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(copy, nonatomic) NSString *storeDirectory; // @synthesize storeDirectory=_storeDirectory;
@property(retain, nonatomic) FCPushNotificationCenter *pushNotificationCenter; // @synthesize pushNotificationCenter=_pushNotificationCenter;
@property(getter=isWaitingForFirstSync) _Bool waitingForFirstSync; // @synthesize waitingForFirstSync=_waitingForFirstSync;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) FCCKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
- (void).cxx_destruct;
- (void)_serialSyncWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_qualityOfServiceForNextSync;
- (void)_markAsClean;
- (void)_markAsDirty;
- (long long)commandQueue:(id)arg1 qualityOfServiceForCommand:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)manualDirty;
@property(retain, nonatomic) NSDate *lastSyncDate;
- (void)forceSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_syncWithCondition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (id)init;
- (void)prepareForUse;
- (void)mergeLocalStoreWithCloud;
- (void)createLocalStore;
- (void)disableSyncing;
- (void)enableSyncing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


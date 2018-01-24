//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import "FCOperationThrottlerDelegate.h"
#import "FCReadingListContentControllerObserving.h"

@class FCCloudContext, FCMTWriterMutexLock, FCReadingListContentController, NSArray, NSMutableDictionary, NSString;

@interface FCReadingList : FCPrivateDataController <FCReadingListContentControllerObserving, FCOperationThrottlerDelegate>
{
    NSMutableDictionary *_entriesByArticleID;
    FCReadingListContentController *_readingListContentController;
    FCCloudContext *_cloudContext;
    NSArray *_allSortedEntriesInReadingList;
    id <FCOperationThrottler> _articleIDsAvailableForOfflineReadingUpdateThrottler;
    FCMTWriterMutexLock *_itemsLock;
}

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (id)desiredKeys;
@property(retain, nonatomic) FCMTWriterMutexLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property(retain, nonatomic) id <FCOperationThrottler> articleIDsAvailableForOfflineReadingUpdateThrottler; // @synthesize articleIDsAvailableForOfflineReadingUpdateThrottler=_articleIDsAvailableForOfflineReadingUpdateThrottler;
@property(retain, nonatomic) NSArray *allSortedEntriesInReadingList; // @synthesize allSortedEntriesInReadingList=_allSortedEntriesInReadingList;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) FCReadingListContentController *readingListContentController; // @synthesize readingListContentController=_readingListContentController;
@property(retain, nonatomic) NSMutableDictionary *entriesByArticleID; // @synthesize entriesByArticleID=_entriesByArticleID;
- (void).cxx_destruct;
- (void)_invalidateAllSortedEntriesInReadingList;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)isArticleAvailableForOfflineReading:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithAppConfiguration:(id)arg1;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)allNonConsumedArticleIDsInReadingListForOfflineReading;
- (id)allNonConsumedArticleIDsInReadingList;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)allSortedArticleIDsInReadingList;
- (id)dateArticleWasAdded:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3;
- (void)addArticleToReadingList:(id)arg1;
- (_Bool)isArticleOnReadingList:(id)arg1;
- (_Bool)shouldHideHeadline:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


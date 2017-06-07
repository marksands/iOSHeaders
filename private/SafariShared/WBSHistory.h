//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryStoreDelegate-Protocol.h>

@class NSArray, NSCountedSet, NSData, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, WBSHistoryStore;

@interface WBSHistory : NSObject <WBSHistoryStoreDelegate>
{
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    NSMutableDictionary *_entriesByURLString;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    double _historyAgeLimit;
    _Bool _hasStartedLoadingHistory;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    id <WBSHistoryStore> _historyStore;
}

+ (void)clearExistingSharedHistory;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)historyDatabaseURL;
+ (id)historyPropertyListURL;
+ (id)existingSharedHistory;
@property(nonatomic) double historyAgeLimit; // @synthesize historyAgeLimit=_historyAgeLimit;
- (void).cxx_destruct;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)historyStore;
- (void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
- (void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (void)_dispatchHistoryVisitAdded:(id)arg1;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (void)_dispatchHistoryItemDidChange:(id)arg1;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performBlockAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)waitUntilHistoryHasLoaded;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)_startLoading;
- (void)_loadHistory;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (void)close;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)performMaintenance;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearHistory;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)removeAttributes:(unsigned long long)arg1 fromVisit:(id)arg2;
- (void)addAttributes:(unsigned long long)arg1 toVisit:(id)arg2;
- (void)_setAttributes:(unsigned long long)arg1 forVisit:(id)arg2;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (_Bool)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(_Bool)arg4 wasFailure:(_Bool)arg5 increaseVisitCount:(_Bool)arg6 origin:(long long)arg7 attributes:(unsigned long long)arg8;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(_Bool)arg4 wasFailure:(_Bool)arg5 increaseVisitCount:(_Bool)arg6 origin:(long long)arg7;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(_Bool)arg3 wasFailure:(_Bool)arg4 increaseVisitCount:(_Bool)arg5;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (void)replayAndAddTombstone:(id)arg1;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool pushNotificationsAreInitialized;
@property(nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property(copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property(copy, nonatomic) NSData *fetchThrottlerData;
@property(copy, nonatomic) NSData *pushThrottlerData;
- (void)setServerChangeTokenData:(id)arg1;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateItemsAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property(readonly, nonatomic) unsigned long long numberOfHistoryItems;
@property(readonly, nonatomic) _Bool hasAnyHistoryItems;
@property(readonly, nonatomic) NSArray *allItems;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (_Bool)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (id)_removeItemForURLString:(id)arg1;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(_Bool)arg2;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (id)itemForURL:(id)arg1;
- (void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (void)removeItemsInResponseToUserAction:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


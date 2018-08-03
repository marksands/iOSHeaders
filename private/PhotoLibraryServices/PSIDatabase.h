//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSIGroupCacheDelegate.h"
#import "PSIQueryDelegate.h"
#import "PSITableDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableString, NSObject<OS_dispatch_queue>, NSString, PSIIntArray, PSIStatement, PSITokenizer, PSITripTable, PSIWordEmbeddingTable;

@interface PSIDatabase : NSObject <PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate>
{
    struct sqlite3 *_inqDatabase;
    _Bool _databaseIsValid;
    NSDictionary *_inqPreparedStatements;
    PSIIntArray *_matchingIds;
    PSIWordEmbeddingTable *_inqWordEmbeddingTable;
    PSITripTable *_inqTripTable;
    PSIStatement *_assetUUIDByAssetIdWithAssetIdsStatement;
    PSIStatement *_collectionResultByCollectionIdWithCollectionIdsStatement;
    PSIStatement *_inqAssetIdsByGroupIdForAssetIdsStatement;
    PSIStatement *_inqCollectionIdsByGroupIdForCollectionIdsStatement;
    PSIStatement *_inqNumberOfAssetsMatchingGroupWithIdStatement;
    PSIStatement *_inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement *_inqNumberOfCollectionsMatchingGroupWithIdStatement;
    PSIStatement *_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;
    PSIStatement *_inqIdsOfAllGroupsStatement;
    PSIStatement *_inqIdsOfAllGroupsMatchedByAssetsStatement;
    PSIStatement *_inqIdsOfAllGroupsMatchedByCollectionsStatement;
    PSIStatement *_inqRemoveUnmatchedGroupsFromGroupsStatement;
    PSIStatement *_inqIdsOfAllGroupsInPrefixStatement;
    PSIStatement *_inqRemoveGroupsFromPrefixStatement;
    PSIStatement *_inqRemoveUnmatchedGroupsFromPrefixStatement;
    PSIStatement *_inqIdsOfAllGroupsInLookupStatement;
    PSIStatement *_inqRemoveGroupsFromLookupStatement;
    PSIStatement *_inqRemoveUnmatchedGroupsFromLookupStatement;
    struct __CFDictionary *_inqGroupObjectsById;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
    NSDictionary *_inqSearchMetadata;
    long long _options;
    PSITokenizer *_tokenizer;
    NSMutableString *_tokenizerOutputString;
    NSMutableArray *_tokenizerOutputTokens;
    NSMutableArray *_tokenizerOutputNormalizedTokens;
    CDStruct_627e0f85 _tokenizerOutputRanges[8];
    NSString *_path;
}

+ (id)searchDatabaseLog;
+ (struct sqlite3 *)_openDatabaseAtPath:(id)arg1 options:(long long)arg2;
+ (_Bool)integrityCheckDatabase:(struct sqlite3 *)arg1;
+ (void)_dropDatabase:(struct sqlite3 *)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)_inqPerformBatch:(CDUnknownBlockType)arg1;
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 withStatementBlock:(CDUnknownBlockType)arg2;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 allowError:(int)arg2 withStatementBlock:(CDUnknownBlockType)arg3;
- (struct sqlite3_stmt *)_inqPrepareStatement:(const char *)arg1;
- (id)wordEmbeddingVersion;
- (id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg1;
- (struct __CFSet *)_inqNewGroupIdsForCollectionIds:(struct __CFSet *)arg1;
- (struct __CFSet *)_inqNewGroupIdsForCollectionId:(unsigned long long)arg1;
- (id)_inqAssetIdsByGroupIdForAssetIds:(id)arg1;
- (struct __CFSet *)_inqNewGroupIdsForAssetIds:(struct __CFSet *)arg1;
- (struct __CFSet *)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;
- (struct __CFArray *)_inqNewCollectionIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
- (struct __CFArray *)_inqNewCollectionIdsWithDateFilter:(id)arg1;
- (struct __CFArray *)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
- (struct __CFArray *)_inqNewAssetIdsWithDateFilter:(id)arg1;
- (struct __CFSet *)_inqNewGroupIdsWithOwningGroupIds:(struct __CFSet *)arg1;
- (struct __CFSet *)_inqNewSurvivingGroupIdsForDeleteOperationWithMatchingGroupIds:(struct __CFSet *)arg1;
- (id)_inqGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 matchingPredicateBlock:(CDUnknownBlockType)arg4;
- (id)_inqGroupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
- (void)_inqUpdateGCTableWithGroupId:(unsigned long long)arg1 collectionId:(unsigned long long)arg2;
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;
- (void)_inqAddToSearchTableWithGroupId:(unsigned long long)arg1 text:(id)arg2 category:(short)arg3 textIsSearchable:(_Bool)arg4;
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 identifier:(id)arg4 insertIfNeeded:(_Bool)arg5 tokenOutput:(const struct tokenOutput_t *)arg6 shouldUpdateOwningGroupId:(_Bool)arg7 didUpdateGroup:(out _Bool *)arg8;
- (unsigned long long)_inqCollectionIdWithCollection:(id)arg1;
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1;
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;
- (unsigned long long)_inqAssetIdWithAsset:(id)arg1;
- (unsigned long long)_inqAssetIdForUUID:(id)arg1;
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;
- (void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg1;
- (void)_inqRemoveUnusedGroups;
- (void)_inqRemoveUUID:(id)arg1 objectType:(unsigned long long)arg2 isInBatch:(_Bool)arg3;
- (void)_inqInsertToSearchTablesWithGroupId:(unsigned long long)arg1 text:(id)arg2 identifier:(id)arg3 category:(short)arg4;
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 shouldUpdateOwningGroupId:(_Bool)arg5 didUpdateGroup:(out _Bool *)arg6;
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;
- (void)_inqGetTokensFromString:(id)arg1 forIndexing:(_Bool)arg2 useWildcard:(_Bool)arg3 tokenOutput:(struct tokenOutput_t *)arg4;
- (void)_prepareTokenOutput:(struct tokenOutput_t *)arg1 forIndexing:(_Bool)arg2;
- (void)_inqRecycleGroups;
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(_Bool *)arg2;
- (_Bool)assetExistsWithUUID:(id)arg1;
- (id)dumpLookupStrings;
- (id)dumpPrefixStrings;
- (id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg1;
- (unsigned long long)_inqNumberOfCollectionsMatchingGroupWithId:(unsigned long long)arg1;
- (id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg1;
- (unsigned long long)_inqNumberOfAssetsMatchingGroupWithId:(unsigned long long)arg1;
- (void)_processNextKeywordSuggestionsForQuery:(id)arg1 groupResults:(id)arg2 allowIdentifiers:(_Bool)arg3;
- (id)tripResultByTripIdWithTripIds:(id)arg1;
- (id)collectionResultByCollectionIdWithCollectionIds:(id)arg1;
- (id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg1;
- (id)assetUUIDByAssetIdWithAssetIds:(id)arg1;
- (id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg1;
- (id)_inqGroupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3;
- (struct __CFSet *)_inqNewGroupIdsWithCategories:(id)arg1;
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 textIsSearchable:(_Bool)arg2;
- (id)_inqGroupResultWithDateFilter:(id)arg1;
- (id)_inqContentStringForGroupId:(unsigned long long)arg1;
- (id)_inqCollectionResultsForCollectionIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;
- (id)_inqAssetUUIDsForAssetIds:(struct __CFSet *)arg1;
- (id)_inqAssetUUIDsForAssetIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2 creationDateSorted:(_Bool)arg3;
- (id)_inqOwningContentStringForGroupResult:(id)arg1;
- (id)newQueryWithSearchText:(id)arg1 queryTokens:(id)arg2 useWildcardSearchText:(_Bool)arg3;
- (id)newQueryWithSearchText:(id)arg1 identifiers:(id)arg2 useWildcardSearchText:(_Bool)arg3;
- (id)newQueryWithSearchText:(id)arg1 representedObjects:(id)arg2 useWildcardSearchText:(_Bool)arg3;
- (id)newQueryWithSearchText:(id)arg1;
- (id)allAssetUUIDsForGroupsWithCategories:(id)arg1;
- (id)allCollectionUUIDsWithCollectionType:(unsigned long long)arg1;
- (id)allTripUUIDs;
- (void)removeAllTripsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeUUIDs:(id)arg1 objectType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTripsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTripWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCollectionsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCollectionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAssetWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTrips:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addTrip:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addCollections:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addCollection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addAssets:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dropDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSearchMetadata:(id)arg1;
- (void)_inSearchQueueAsync:(CDUnknownBlockType)arg1;
- (void)_inqSync:(CDUnknownBlockType)arg1;
- (void)_inqAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 options:(long long)arg2 searchMetadata:(id)arg3;
- (long long)lastInsertedRowID;
- (void)unbindMatchingIds;
- (void)bindMatchingIds:(const long long *)arg1 numberOfMatchingIds:(unsigned long long)arg2;
- (void)bindMatchingIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;
- (void)bindMatchingIds:(struct __CFSet *)arg1;
- (void)unprepareMatchingIds;
- (void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
- (void)executeStatement:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;
- (void)executeStatement:(id)arg1;
- (void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;
- (void)executeStatementFromString:(id)arg1;
- (id)statementFromString:(id)arg1;
- (void)fetchAssetUUIDsForAssetIDs:(struct __CFArray *)arg1 creationDateSorted:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)group:(id)arg1 fetchOwningContentString:(_Bool)arg2 assetIdRange:(struct _NSRange)arg3 collectionIdRange:(struct _NSRange)arg4 tripIdRange:(struct _NSRange)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)suggestionWhitelistedScenes;
- (id)meNodeIdentifier;
- (id)wordEmbeddingMatchesForToken:(id)arg1;
- (id)groupResultWithDateFilter:(id)arg1;
- (id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
- (const struct __CFSet *)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;
- (id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;
@property(readonly) PSITokenizer *tokenizer;
- (unsigned long long)updateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;
- (id)groupIdsInLookupTable;
- (id)groupIdsInPrefixTable;
- (id)allGroupIds;
- (void)linkTripWithId:(long long)arg1 toGroupWithId:(long long)arg2;
- (void)linkCollectionWithId:(long long)arg1 toGroupWithId:(long long)arg2;
- (void)linkAssetWithId:(long long)arg1 toGroupWithId:(long long)arg2;
- (void)removeUnusedGroups;
- (long long)insertGroup:(id)arg1;
- (long long)insertTrip:(id)arg1;
- (long long)insertCollection:(id)arg1;
- (long long)insertAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


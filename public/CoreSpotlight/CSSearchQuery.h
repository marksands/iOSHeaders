//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDSearchQueryResultProcessor.h"

@class CSSearchQueryContext, NSArray, NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor>
{
    _Bool _started;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _fetchesURLs;
    _Bool _gatherEnded;
    unsigned long long _foundItemCount;
    _Bool _privateIndex;
    CDUnknownBlockType _foundItemsHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_resolvedFetchAttributes;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queryString;
    CSSearchQueryContext *_queryContext;
    NSMapTable *_liveIndexBundleIDToIndexItemIDMap;
    NSMapTable *_liveIndexBundleIDToBundleString;
    CDUnknownBlockType _gatherEndedHandler;
    CDUnknownBlockType _changedItemsHandler;
    CDUnknownBlockType _removedItemsHandler;
    CDUnknownBlockType _foundAttributesHandler;
    CDUnknownBlockType _changedAttributesHandler;
    CDUnknownBlockType _countChangedHandler;
    CDUnknownBlockType _resolvedAttributeNamesHandler;
    NSString *_privateBundleID;
}

+ (void)userEngagedWithUniqueIdentifier:(id)arg1 bundleId:(id)arg2 forUserQuery:(id)arg3 interactionType:(int)arg4;
+ (id)_makeQueryErrorWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)_makeUniqueFetchAttributesWithAttributes:(id)arg1;
+ (id)_requiredAttributeSet;
+ (id)_requiredAttributes;
+ (id)_attributesForURLs;
@property(retain, nonatomic) NSString *privateBundleID; // @synthesize privateBundleID=_privateBundleID;
@property(nonatomic) _Bool privateIndex; // @synthesize privateIndex=_privateIndex;
@property(copy) CDUnknownBlockType resolvedAttributeNamesHandler; // @synthesize resolvedAttributeNamesHandler=_resolvedAttributeNamesHandler;
@property(copy) CDUnknownBlockType countChangedHandler; // @synthesize countChangedHandler=_countChangedHandler;
@property(copy) CDUnknownBlockType changedAttributesHandler; // @synthesize changedAttributesHandler=_changedAttributesHandler;
@property(copy) CDUnknownBlockType foundAttributesHandler; // @synthesize foundAttributesHandler=_foundAttributesHandler;
@property(copy) CDUnknownBlockType removedItemsHandler; // @synthesize removedItemsHandler=_removedItemsHandler;
@property(copy) CDUnknownBlockType changedItemsHandler; // @synthesize changedItemsHandler=_changedItemsHandler;
@property(copy) CDUnknownBlockType gatherEndedHandler; // @synthesize gatherEndedHandler=_gatherEndedHandler;
@property(retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString; // @synthesize liveIndexBundleIDToBundleString=_liveIndexBundleIDToBundleString;
@property(retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap; // @synthesize liveIndexBundleIDToIndexItemIDMap=_liveIndexBundleIDToIndexItemIDMap;
@property(retain, nonatomic) CSSearchQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSArray *resolvedFetchAttributes; // @synthesize resolvedFetchAttributes=_resolvedFetchAttributes;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
- (void).cxx_destruct;
- (void)didFinishWithError:(id)arg1;
- (void)didReturnResults:(long long)arg1 resultsData:(id)arg2 oidData:(id)arg3 protectionClass:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)processLiveResultsData:(id)arg1 oidData:(id)arg2 protectionClass:(id)arg3 isTopHitQuery:(_Bool)arg4;
- (void)processResultsData:(id)arg1 protectionClass:(id)arg2 isTopHitQuery:(_Bool)arg3;
- (id)processResultFromPlist:(id)arg1 protectionClass:(id)arg2 isTopHitQuery:(_Bool)arg3;
- (void)processResultFromPlist:(id)arg1 atIndex:(unsigned long long)arg2 protectionClass:(id)arg3 oids:(long long *)arg4 oidCount:(unsigned int)arg5 items:(id)arg6 isTopHitQuery:(_Bool)arg7;
- (id)createCSSearchableItemWithOID:(long long)arg1 values:(id *)arg2 valueCount:(unsigned long long)arg3 protectionClass:(id)arg4 isTopHitQuery:(_Bool)arg5;
- (void)updateLiveOID:(long long)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (_Bool)removeLiveOID:(long long)arg1 outBundleID:(id *)arg2 outIdentifier:(id *)arg3;
- (void)processRemoveResultsData:(id)arg1 protectionClass:(id)arg2;
- (void)processAttributesData:(id)arg1 update:(_Bool)arg2 protectionClass:(id)arg3;
- (void)didResolveFriendlyAttributeNames:(id)arg1;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;
@property(readonly) unsigned long long foundItemCount;
- (void)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
- (void)start;
- (void)_finishWithError:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)connection;
- (_Bool)attribute;
- (_Bool)counting;
- (_Bool)live;
- (_Bool)grouped;
- (_Bool)internal;
- (id)options;
@property(readonly, nonatomic) NSArray *fetchAttributes;
- (void)setBundleIDs:(id)arg1;
- (id)bundleIDs;
@property(copy) NSArray *protectionClasses;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)initWithQueryString:(id)arg1 attributes:(id)arg2;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)init;

@end


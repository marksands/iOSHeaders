//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCOperationThrottlerDelegate.h"

@class NSEntityDescription, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSPersistentStore, NSString, NSURL;

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate>
{
    unsigned short _version;
    int _nextFeedLookupID;
    NSURL *_parentDirectoryURL;
    long long _usage;
    long long _endpoint;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSEntityDescription *_feedEntity;
    NSEntityDescription *_feedSegmentEntity;
    NSEntityDescription *_feedItemIndexEntity;
    NSEntityDescription *_feedItemEntity;
    NSMutableDictionary *_cachedFeedsByID;
    NSMutableSet *_modifiedFeedIDs;
    id <FCOperationThrottler> _saveThrottler;
}

+ (unsigned short)currentFeedDatabaseVersion;
+ (id)temporaryFeedDatabase;
+ (void)initialize;
@property(retain, nonatomic) id <FCOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain, nonatomic) NSMutableSet *modifiedFeedIDs; // @synthesize modifiedFeedIDs=_modifiedFeedIDs;
@property(nonatomic) int nextFeedLookupID; // @synthesize nextFeedLookupID=_nextFeedLookupID;
@property(retain, nonatomic) NSMutableDictionary *cachedFeedsByID; // @synthesize cachedFeedsByID=_cachedFeedsByID;
@property(retain, nonatomic) NSEntityDescription *feedItemEntity; // @synthesize feedItemEntity=_feedItemEntity;
@property(retain, nonatomic) NSEntityDescription *feedItemIndexEntity; // @synthesize feedItemIndexEntity=_feedItemIndexEntity;
@property(retain, nonatomic) NSEntityDescription *feedSegmentEntity; // @synthesize feedSegmentEntity=_feedSegmentEntity;
@property(retain, nonatomic) NSEntityDescription *feedEntity; // @synthesize feedEntity=_feedEntity;
@property(retain, nonatomic) NSPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue; // @synthesize initQueue=_initQueue;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(readonly, nonatomic) long long endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long usage; // @synthesize usage=_usage;
@property(readonly, copy, nonatomic) NSURL *parentDirectoryURL; // @synthesize parentDirectoryURL=_parentDirectoryURL;
- (void).cxx_destruct;
- (void)d_sanityCheckFeed:(id)arg1;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned long long)arg3;
- (id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3;
- (id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2;
- (id)_feedsForLookups:(id)arg1;
- (void)_initMOC;
- (void)_performWithMOCAndWait:(CDUnknownBlockType)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(_Bool)arg6 extent:(unsigned long long)arg7 reachedEnd:(_Bool)arg8;
- (id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned long long)arg2;
- (id)performDatabaseLookups:(id)arg1;
- (void)teardown;
- (id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


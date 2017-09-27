//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCKeyedOperationQueueDelegate.h"
#import "FCNetworkReachabilityObserving.h"
#import "FCOperationThrottlerDelegate.h"

@class FCCloudContext, FCKeyedOperationQueue, FCThreadSafeMutableSet, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, NSSet, NSString;

@interface FCReadingListContentController : NSObject <FCKeyedOperationQueueDelegate, FCOperationThrottlerDelegate, FCNetworkReachabilityObserving>
{
    _Bool _hasBeenEnabled;
    id <FCReadingListContentControllerObserving> observer;
    NSArray *_articleIDsAvailableForOfflineReading;
    NSArray *_articleIDsOfInterest;
    NSDictionary *_holdInterestTokensByArticleID;
    FCKeyedOperationQueue *_articleContentDownloadKeyQueue;
    id <FCOperationThrottler> _updateHoldInterestTokensThrottler;
    NSObject<OS_dispatch_queue> *_updateHoldInterestTokensQueue;
    NSMutableDictionary *_outstandingOperationsByArticleID;
    FCCloudContext *_context;
    NSObject<OS_dispatch_group> *_articleContentDownloadGroup;
    NSMutableSet *_fetchResults;
    NSOperationQueue *_operationSerialQueue;
    FCThreadSafeMutableSet *_readingListAvailableForOfflineReading;
}

@property(retain, nonatomic) FCThreadSafeMutableSet *readingListAvailableForOfflineReading; // @synthesize readingListAvailableForOfflineReading=_readingListAvailableForOfflineReading;
@property(retain, nonatomic) NSOperationQueue *operationSerialQueue; // @synthesize operationSerialQueue=_operationSerialQueue;
@property(nonatomic) _Bool hasBeenEnabled; // @synthesize hasBeenEnabled=_hasBeenEnabled;
@property(retain, nonatomic) NSMutableSet *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *articleContentDownloadGroup; // @synthesize articleContentDownloadGroup=_articleContentDownloadGroup;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableDictionary *outstandingOperationsByArticleID; // @synthesize outstandingOperationsByArticleID=_outstandingOperationsByArticleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateHoldInterestTokensQueue; // @synthesize updateHoldInterestTokensQueue=_updateHoldInterestTokensQueue;
@property(retain, nonatomic) id <FCOperationThrottler> updateHoldInterestTokensThrottler; // @synthesize updateHoldInterestTokensThrottler=_updateHoldInterestTokensThrottler;
@property(retain, nonatomic) FCKeyedOperationQueue *articleContentDownloadKeyQueue; // @synthesize articleContentDownloadKeyQueue=_articleContentDownloadKeyQueue;
@property(copy, nonatomic) NSDictionary *holdInterestTokensByArticleID; // @synthesize holdInterestTokensByArticleID=_holdInterestTokensByArticleID;
@property(copy, nonatomic) NSArray *articleIDsOfInterest; // @synthesize articleIDsOfInterest=_articleIDsOfInterest;
@property(copy, nonatomic) NSArray *articleIDsAvailableForOfflineReading; // @synthesize articleIDsAvailableForOfflineReading=_articleIDsAvailableForOfflineReading;
@property(nonatomic) __weak id <FCReadingListContentControllerObserving> observer; // @synthesize observer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *readingListForOfflineReading;
- (void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateInterestsIfNeeded;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)expressInterestInOfflineArticlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)isArticleAvailableForOfflineReading:(id)arg1;
- (void)enableDownloadingForOfflineReading;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


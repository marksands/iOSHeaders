//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCBreakingNewsOperation, FCCoverArticlesOperation, FCEditorialOperation, FCMutexLock, FCMyArticlesOperation, FCTopStoriesOperation, FCTrendingOperation, NSArray, NSDictionary, NSError, NSHashTable, NSOperationQueue;
@protocol FCChannelProviding;

@interface FCForYouCatchUpOperation : FCOperation
{
    FCMyArticlesOperation *_myArticlesOperation;
    FCBreakingNewsOperation *_breakingNewsOperation;
    FCTopStoriesOperation *_topStoriesOperation;
    FCTrendingOperation *_trendingOperation;
    FCCoverArticlesOperation *_coverArticlesOperation;
    FCEditorialOperation *_editorialOperation;
    NSOperationQueue *_operationQueue;
    NSHashTable *_conditionWaiters;
    FCMutexLock *_conditionWaitersLock;
}

+ (id)temporaryBackgroundCatchUpOperationForEdition:(id)arg1 context:(id)arg2;
+ (id)sharedCatchUpOperationForEdition:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) FCMutexLock *conditionWaitersLock; // @synthesize conditionWaitersLock=_conditionWaitersLock;
@property(retain, nonatomic) NSHashTable *conditionWaiters; // @synthesize conditionWaiters=_conditionWaiters;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FCEditorialOperation *editorialOperation; // @synthesize editorialOperation=_editorialOperation;
@property(retain, nonatomic) FCCoverArticlesOperation *coverArticlesOperation; // @synthesize coverArticlesOperation=_coverArticlesOperation;
@property(retain, nonatomic) FCTrendingOperation *trendingOperation; // @synthesize trendingOperation=_trendingOperation;
@property(retain, nonatomic) FCTopStoriesOperation *topStoriesOperation; // @synthesize topStoriesOperation=_topStoriesOperation;
@property(retain, nonatomic) FCBreakingNewsOperation *breakingNewsOperation; // @synthesize breakingNewsOperation=_breakingNewsOperation;
@property(retain, nonatomic) FCMyArticlesOperation *myArticlesOperation; // @synthesize myArticlesOperation=_myArticlesOperation;
- (void).cxx_destruct;
- (void)_serviceConditionWaiters;
- (void)_addConditionWaiter:(id)arg1;
@property(readonly, copy) NSDictionary *feedContextByFeedID;
- (id)catchUpErrorForContentTypes:(long long)arg1;
@property(readonly, copy, nonatomic) NSError *catchUpError;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *nonEditorialFeedItems;
- (id)allNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)allFeedItemsAfterTransformation:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *supplementalCoverArticleHeadlines;
@property(readonly, copy, nonatomic) NSArray *coverArticleHeadlines;
@property(readonly, copy, nonatomic) NSArray *trendingHeadlines;
@property(readonly, copy, nonatomic) NSDictionary *topStoriesMetadataByArticleID;
@property(readonly, copy, nonatomic) NSArray *optionalTopStoriesHeadlines;
@property(readonly, copy, nonatomic) NSArray *mandatoryTopStoriesHeadlines;
@property(readonly, copy, nonatomic) id <FCChannelProviding> topStoriesChannel;
@property(readonly, copy, nonatomic) NSArray *breakingNewsHeadlines;
- (_Bool)satisfiesCondition:(id)arg1;
- (void)waitForCondition:(id)arg1 withTimeout:(double)arg2;
- (void)waitForCondition:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithContext:(id)arg1 dateRange:(id)arg2 background:(_Bool)arg3;

@end


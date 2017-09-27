//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUActivityProvider.h"

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@interface NUArticleActivityManager : NSObject <NUActivityProvider>
{
    id <FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandler> _URLHandler;
}

@property(readonly, nonatomic) id <NUURLHandler> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (_Bool)channelMutedForHeadline:(id)arg1;
- (_Bool)articleSavedForHeadline:(id)arg1;
- (_Bool)articleDislikedForHeadline:(id)arg1;
- (_Bool)articleLikedForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (CDUnknownBlockType)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)supportedActivities;
- (id)activities;
- (id)activityItemSources;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


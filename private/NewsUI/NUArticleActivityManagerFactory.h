//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUArticleActivityFactory.h"

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;

@interface NUArticleActivityManagerFactory : NSObject <NUArticleActivityFactory>
{
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id <NUURLHandling> _URLHandler;
    id <NUArticleActivityOptionsProvider> _optionsProvider;
}

@property(readonly, nonatomic) id <NUArticleActivityOptionsProvider> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
- (void).cxx_destruct;
- (id)activityProviderForHeadline:(id)arg1 reportConcernViewPresenter:(id)arg2 URLModifier:(id)arg3;
- (id)initWithReadingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 optionsProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


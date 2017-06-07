//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCArticleList, FCCloudContext, NSArray, NSDate, NSError;
@protocol FCChannelProviding;

@interface FCTopStoriesCatchUpOperation : FCOperation
{
    FCCloudContext *_context;
    NSDate *_date;
    id <FCChannelProviding> _topStoriesChannel;
    NSArray *_headlines;
    FCArticleList *_articleList;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
}

@property(copy) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) FCArticleList *articleList; // @synthesize articleList=_articleList;
@property(copy) NSArray *headlines; // @synthesize headlines=_headlines;
@property(copy) id <FCChannelProviding> topStoriesChannel; // @synthesize topStoriesChannel=_topStoriesChannel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

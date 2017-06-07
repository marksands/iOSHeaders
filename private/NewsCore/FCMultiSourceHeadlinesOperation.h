//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSSet;
@protocol FCContentContext;

@interface FCMultiSourceHeadlinesOperation : FCOperation
{
    id <FCContentContext> _context;
    NSArray *_articleListIDs;
    NSSet *_articleIDs;
    double _maximumCachedAgeForArticleList;
    NSArray *_networkEvents;
    CDUnknownBlockType _headlinesCompletionHandler;
    NSDictionary *_resultArticleListHeadlinesByArticleListID;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultArticleIDHeadlinesByArticleID;
}

@property(retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID; // @synthesize resultArticleIDHeadlinesByArticleID=_resultArticleIDHeadlinesByArticleID;
@property(retain, nonatomic) NSDictionary *resultArticleListsByID; // @synthesize resultArticleListsByID=_resultArticleListsByID;
@property(retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID; // @synthesize resultArticleListHeadlinesByArticleListID=_resultArticleListHeadlinesByArticleListID;
@property(copy, nonatomic) CDUnknownBlockType headlinesCompletionHandler; // @synthesize headlinesCompletionHandler=_headlinesCompletionHandler;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(nonatomic) double maximumCachedAgeForArticleList; // @synthesize maximumCachedAgeForArticleList=_maximumCachedAgeForArticleList;
@property(copy, nonatomic) NSSet *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSArray *articleListIDs; // @synthesize articleListIDs=_articleListIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

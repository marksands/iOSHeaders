//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSString;

@interface FCTagHeadlinesOperation : FCOperation
{
    FCCloudContext *_context;
    NSString *_tagID;
    unsigned long long _maxHeadlinesCount;
    CDUnknownBlockType _fetchCompletionHandler;
    NSArray *_resultHeadlines;
}

@property(copy) NSArray *resultHeadlines; // @synthesize resultHeadlines=_resultHeadlines;
@property(copy) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(nonatomic) unsigned long long maxHeadlinesCount; // @synthesize maxHeadlinesCount=_maxHeadlinesCount;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end


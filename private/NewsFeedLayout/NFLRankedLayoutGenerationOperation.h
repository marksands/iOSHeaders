//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NFLFeedSettings, NFLRankedLayoutRequest;

@interface NFLRankedLayoutGenerationOperation : NSOperation
{
    CDUnknownBlockType _rankedLayoutGenerationCompletion;
    NFLRankedLayoutRequest *_request;
    NFLFeedSettings *_feedSettings;
}

@property(retain, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy) NFLRankedLayoutRequest *request; // @synthesize request=_request;
@property(copy) CDUnknownBlockType rankedLayoutGenerationCompletion; // @synthesize rankedLayoutGenerationCompletion=_rankedLayoutGenerationCompletion;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (id)initWithRequest:(id)arg1 feedSettings:(id)arg2;
- (id)init;

@end


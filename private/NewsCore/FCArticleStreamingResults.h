//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCStreamingResults.h>

@class FCArticleSearchOperationFeedbackResult;

@interface FCArticleStreamingResults : FCStreamingResults
{
    FCArticleSearchOperationFeedbackResult *_feedbackResult;
}

@property(retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult; // @synthesize feedbackResult=_feedbackResult;
- (void).cxx_destruct;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end


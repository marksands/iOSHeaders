//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedTransforming.h"

@class NSString;

@interface NTSectionFeedFilterTransformation : NSObject <FCFeedTransforming>
{
    id <FCFeedTransforming> _underlyingTransformation;
}

@property(retain, nonatomic) id <FCFeedTransforming> underlyingTransformation; // @synthesize underlyingTransformation=_underlyingTransformation;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 readArticlesFilterMethod:(int)arg4 recentlyReadHistoryItems:(id)arg5 seenArticlesFilterMethod:(int)arg6 minimumTimeSinceFirstSeenToFilter:(double)arg7 recentlySeenHistoryItems:(id)arg8 supplementalFeedFilterOptions:(long long)arg9 otherArticleIDs:(id)arg10 otherClusterIDs:(id)arg11 filterDate:(id)arg12;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

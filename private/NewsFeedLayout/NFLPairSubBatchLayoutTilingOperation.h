//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation
{
    _Bool _preferImageOnSidePairs;
}

+ (unsigned long long)tileInfosUsedCount;
@property(nonatomic) _Bool preferImageOnSidePairs; // @synthesize preferImageOnSidePairs=_preferImageOnSidePairs;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id)rankedLayoutRequests;
- (_Bool)isReliable;

@end


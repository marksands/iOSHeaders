//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (GKAdditions)
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;
+ (id)_gkUUIDString;
- (id)_gkArrayByTokenizingString;
- (id)_gkStringByEscapingHTMLEntities;
- (id)_gkStringByUnescapingFromURLQuery;
- (id)_gkLocaleSensitiveUppercaseString;
- (id)_gkStringByQuotingWithFormat:(id)arg1;
- (id)_gkTruncationSymbolWithFormat:(id)arg1;
- (id)_gkStringByAddingBidiEmbeddingMarkers;
- (_Bool)_gkIsMixedDirection;
- (_Bool)_gkIsNaturallyRTL;
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;
@end


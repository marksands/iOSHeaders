//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDMagicMoveTextureZOrderer : NSObject
{
    NSArray *_zOrderMatches;
    NSArray *_outgoingTexturesInZOrder;
    NSArray *_incomingTexturesInZOrder;
    double *_percentTexturesTimes;
    NSArray *_percentTextures;
    unsigned long long _zOrderIntersectionsCount;
}

@property(readonly, nonatomic) unsigned long long zOrderIntersectionsCount; // @synthesize zOrderIntersectionsCount=_zOrderIntersectionsCount;
@property(readonly, nonatomic) NSArray *flattenableAnimationMatches;
- (void)p_addFlattenableAnimationMatches:(id)arg1 toArray:(id)arg2;
- (void)p_calculateTextureArraysFromIntersections;
- (unsigned long long)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2;
- (id)p_debugDescription;
- (unsigned long long)p_zIntersectionsBetweenZOrdererMatches:(id)arg1;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1;
- (void)p_adjustZOrdererMatchesZIndexByTextureType:(id)arg1;
- (id)p_newArrayBySortingMatches:(id)arg1 withInterpolatedPercent:(double)arg2;
- (void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(double)arg3;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (void)dealloc;
- (id)initWithAnimationMatches:(id)arg1;
- (id)init;

@end


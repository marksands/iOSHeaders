//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import "MNCommuteDestinationLocationScore.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore>
{
    int _score;
    NSMutableArray *_geodesicDistances;
    double _slope;
}

+ (double)weight;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(retain, nonatomic) NSMutableArray *geodesicDistances; // @synthesize geodesicDistances=_geodesicDistances;
- (void).cxx_destruct;
- (void)_updateScoreAndDestinationInvalid;
- (id)descriptionExtras;
- (_Bool)destinationInvalid;
- (int)score;
- (void)updateScoreIfPossible;
- (void)updateForLocation:(id)arg1;
- (id)initWithDestination:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, PGManager;

@interface PGHighlightStatisticsEstimator : NSObject
{
    PGManager *_manager;
    NSDictionary *_highlightEstimatesDictionary;
}

@property(retain) PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)_stringDescriptionForMomentsDetails:(id)arg1;
- (id)_stringDescriptionForHomeWorkAggregations:(id)arg1;
- (id)_stringDescriptionForTripWeekendDetails:(id)arg1;
- (id)_highlightEstimatesDescriptionWithData:(id)arg1;
- (id)_collectDetailsForAggregations:(id)arg1;
- (id)_collectDetailsForTripsAndWeekends:(id)arg1;
- (unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1;
- (_Bool)_isUtilityAsset:(id)arg1;
- (id)_createHighlightEstimatesDictionary;
@property(readonly, nonatomic) NSString *highlightEstimatesDescription; // @dynamic highlightEstimatesDescription;
@property(readonly, nonatomic) NSDictionary *highlightEstimatesDictionary; // @synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary;
- (id)initWithManager:(id)arg1;

@end


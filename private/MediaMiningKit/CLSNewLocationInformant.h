//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant
{
}

+ (id)natureCategories;
+ (id)regionOfInterestCategories;
+ (id)areaOfInterestCategories;
+ (_Bool)doesRegion:(id)arg1 containLocation:(id)arg2;
+ (_Bool)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2;
+ (struct CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D)arg1;
+ (id)shiftedLocationFromOriginalLocation:(id)arg1;
+ (id)businessItemsForRegion:(id)arg1;
+ (id)createPlacesForBusinessItems:(id)arg1;
+ (id)createPlaceForBusinessItem:(id)arg1;
+ (id)_categoriesDescriptionFromCategories:(id)arg1;
+ (id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3;
+ (id)pointOfInterestCategories;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;
+ (id)familyIdentifier;
- (id)gatherCluesOperationForInvestigation:(id)arg1;
- (id)locationRegionOfInterestCluesForInputClue:(id)arg1;
- (id)locationPointOfInterestCluesForInputClue:(id)arg1;
- (id)locationAreaOfInterestCluesForInputClue:(id)arg1;
- (id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(_Bool)arg6 precision:(double)arg7;
- (id)_regionOfInterestTraits;
- (id)_pointOfInterestTraits;
- (id)_regionOfInterestCategories;

@end


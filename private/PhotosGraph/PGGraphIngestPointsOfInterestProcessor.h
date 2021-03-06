//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGGraphIngestProcessor.h>

@class NSDictionary;

@interface PGGraphIngestPointsOfInterestProcessor : PGGraphIngestProcessor
{
    NSDictionary *_momentNodesToResolvePOIByRegion;
    NSDictionary *_momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
}

@property(readonly, nonatomic) NSDictionary *momentNodesToResolvePOIAndEnrichByBusinessItemMuid; // @synthesize momentNodesToResolvePOIAndEnrichByBusinessItemMuid=_momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
@property(readonly, nonatomic) NSDictionary *momentNodesToResolvePOIByRegion; // @synthesize momentNodesToResolvePOIByRegion=_momentNodesToResolvePOIByRegion;
- (void).cxx_destruct;
- (_Bool)_fetchPointsOfInterestForRegions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (void)_collectPOIsToResolveWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)_pointOfInterestTypeStringsFromBusinessItems:(id)arg1 withOriginalCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)_insertPointOfInterestTypeStrings:(id)arg1 withMomentNodes:(id)arg2;
- (void)disambiguatePointsOfInterestWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

@end


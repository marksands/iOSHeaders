//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray;
@protocol GEOVenueFloorInfo;

@protocol GEOVenueComponentIdentifier <NSObject>
@property(readonly, nonatomic) unsigned long long directoryGroupingID;
@property(readonly, nonatomic, getter=_hasDirectoryGroupingID) _Bool hasDirectoryGroupingID;
@property(readonly, nonatomic) unsigned long long fixtureID;
@property(readonly, nonatomic, getter=_hasFixtureID) _Bool hasFixtureID;
@property(readonly, nonatomic) unsigned long long unitID;
@property(readonly, nonatomic, getter=_hasUnitID) _Bool hasUnitID;
@property(readonly, nonatomic) NSArray *sectionIDs;
@property(readonly, nonatomic) id <GEOVenueFloorInfo> floorInfo;
@property(readonly, nonatomic) unsigned long long buildingID;
@property(readonly, nonatomic, getter=_hasBuildingID) _Bool hasBuildingID;
@end


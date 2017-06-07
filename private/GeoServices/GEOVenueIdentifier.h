//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueIdentifier-Protocol.h>

@class NSArray, NSString;

@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier>
{
    _Bool _hasVenueID;
    unsigned long long _venueID;
    _Bool _hasMUID;
    unsigned long long _muid;
    NSArray *_componentIdentifiers;
}

@property(readonly, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID; // @synthesize hasMUID=_hasMUID;
@property(readonly, nonatomic) unsigned long long venueID; // @synthesize venueID=_venueID;
@property(readonly, nonatomic, getter=_hasVenueID) _Bool hasVenueID; // @synthesize hasVenueID=_hasVenueID;
- (void).cxx_destruct;
- (id)placeDataVenueIdentifierForBuilding:(id)arg1;
- (id)placeDataVenueIdentifierForVenue;
- (id)initWithVenueID:(unsigned long long)arg1 buildingID:(unsigned long long)arg2 directoryGroupingID:(unsigned long long)arg3 muid:(unsigned long long)arg4;
- (id)initWithVenueID:(unsigned long long)arg1 buildingID:(unsigned long long)arg2 muid:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 muid:(unsigned long long)arg2;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 muid:(unsigned long long)arg2 componentIdentifiers:(id)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


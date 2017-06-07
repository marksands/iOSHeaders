//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import <GeoServices/GEOMapServiceSearchTicket-Protocol.h>

@class GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>
{
    _Bool _shiftLocationsIfNeeded;
}

@property(readonly, nonatomic) NSString *searchQuery;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(_Bool)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

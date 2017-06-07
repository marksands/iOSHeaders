//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOStructuredAddress, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    int _addressGeocodeAccuracyHint;
    GEOStructuredAddress *_addressHint;
    NSData *_addressObjectHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    NSString *_placeNameHint;
    int _placeTypeHint;
    int _resultProviderId;
    CDStruct_f8e30bfb _has;
}

+ (Class)formattedAddressLineHintType;
@property(retain, nonatomic) NSData *addressObjectHint; // @synthesize addressObjectHint=_addressObjectHint;
@property(retain, nonatomic) NSMutableArray *formattedAddressLineHints; // @synthesize formattedAddressLineHints=_formattedAddressLineHints;
@property(retain, nonatomic) NSString *placeNameHint; // @synthesize placeNameHint=_placeNameHint;
@property(retain, nonatomic) GEOStructuredAddress *addressHint; // @synthesize addressHint=_addressHint;
@property(retain, nonatomic) GEOLatLng *locationHint; // @synthesize locationHint=_locationHint;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAddressObjectHint;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
@property(nonatomic) _Bool hasAddressGeocodeAccuracyHint;
@property(nonatomic) int addressGeocodeAccuracyHint; // @synthesize addressGeocodeAccuracyHint=_addressGeocodeAccuracyHint;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (id)placeTypeHintAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceTypeHint;
@property(nonatomic) int placeTypeHint; // @synthesize placeTypeHint=_placeTypeHint;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLineHintsCount;
- (void)addFormattedAddressLineHint:(id)arg1;
- (void)clearFormattedAddressLineHints;
@property(readonly, nonatomic) _Bool hasPlaceNameHint;
@property(readonly, nonatomic) _Bool hasAddressHint;
@property(readonly, nonatomic) _Bool hasLocationHint;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) _Bool hasResultProviderId;
- (_Bool)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (_Bool)_hasRequiredFields;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(CDStruct_c3b9c2ee)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4;

@end


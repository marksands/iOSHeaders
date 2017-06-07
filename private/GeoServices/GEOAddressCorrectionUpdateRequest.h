//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying>
{
    NSString *_addressID;
    NSMutableArray *_addressResults;
    int _correctionStatus;
    NSMutableArray *_significantLocations;
    struct {
        unsigned int correctionStatus:1;
    } _has;
}

+ (Class)addressResultType;
+ (Class)significantLocationType;
@property(retain, nonatomic) NSMutableArray *addressResults; // @synthesize addressResults=_addressResults;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) NSMutableArray *significantLocations; // @synthesize significantLocations=_significantLocations;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)addressResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressResultsCount;
- (void)addAddressResult:(id)arg1;
- (void)clearAddressResults;
@property(readonly, nonatomic) _Bool hasAddressID;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)significantLocationsCount;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSignificantLocations;
- (int)StringAsCorrectionStatus:(id)arg1;
- (id)correctionStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasCorrectionStatus;
@property(nonatomic) int correctionStatus; // @synthesize correctionStatus=_correctionStatus;

@end


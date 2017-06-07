//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDDepartureSequence : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopIds;
    unsigned long long _lineId;
    struct GEOPDTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    unsigned long long _stopId;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_headsignString;
    struct {
        unsigned int lineId:1;
        unsigned int stopId:1;
    } _has;
}

+ (Class)departureFrequencyType;
+ (Class)departureType;
@property(retain, nonatomic) NSString *headsignString; // @synthesize headsignString=_headsignString;
@property(retain, nonatomic) NSString *directionNameString; // @synthesize directionNameString=_directionNameString;
@property(retain, nonatomic) NSMutableArray *departureFrequencys; // @synthesize departureFrequencys=_departureFrequencys;
@property(retain, nonatomic) NSMutableArray *departures; // @synthesize departures=_departures;
@property(nonatomic) unsigned long long stopId; // @synthesize stopId=_stopId;
@property(nonatomic) unsigned long long lineId; // @synthesize lineId=_lineId;
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
- (void)setNextStopIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1;
- (void)addNextStopId:(unsigned long long)arg1;
- (void)clearNextStopIds;
@property(readonly, nonatomic) unsigned long long *nextStopIds;
@property(readonly, nonatomic) unsigned long long nextStopIdsCount;
@property(readonly, nonatomic) _Bool hasHeadsignString;
@property(readonly, nonatomic) _Bool hasDirectionNameString;
- (void)setOperatingHours:(struct GEOPDTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPDTimeRange)arg1;
- (void)clearOperatingHours;
@property(readonly, nonatomic) struct GEOPDTimeRange *operatingHours;
@property(readonly, nonatomic) unsigned long long operatingHoursCount;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureFrequencysCount;
- (void)addDepartureFrequency:(id)arg1;
- (void)clearDepartureFrequencys;
- (id)departureAtIndex:(unsigned long long)arg1;
- (unsigned long long)departuresCount;
- (void)addDeparture:(id)arg1;
- (void)clearDepartures;
@property(nonatomic) _Bool hasStopId;
@property(nonatomic) _Bool hasLineId;
- (void)dealloc;

@end


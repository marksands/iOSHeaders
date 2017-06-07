//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORequestOptions, NSArray;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    CDStruct_95bda58d _availablePaymentTypes;
    CDStruct_95bda58d _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    _Bool _showTransitSchedules;
    struct {
        unsigned int showTransitSchedules:1;
    } _has;
}

@property(retain, nonatomic) GEORequestOptions *transitSurchargeOptions; // @synthesize transitSurchargeOptions=_transitSurchargeOptions;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitSurchargeOptions;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (id)availablePaymentTypesAsString:(int)arg1;
- (void)setAvailablePaymentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)clearAvailablePaymentTypes;
@property(readonly, nonatomic) int *availablePaymentTypes;
@property(readonly, nonatomic) unsigned long long availablePaymentTypesCount;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned long long)arg2;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)clearAvailablePrioritizations;
@property(readonly, nonatomic) int *availablePrioritizations;
@property(readonly, nonatomic) unsigned long long availablePrioritizationsCount;
@property(nonatomic) _Bool hasShowTransitSchedules;
@property(nonatomic) _Bool showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *prioritizationOptions;
@property(readonly, nonatomic) id <GEOSurchargeOption> surchargeOptions;

@end


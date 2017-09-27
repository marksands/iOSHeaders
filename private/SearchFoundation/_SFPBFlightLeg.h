//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBFlightLeg.h"

@class NSData, NSString, _SFPBAirport, _SFPBDate;

@interface _SFPBFlightLeg : PBCodable <_SFPBFlightLeg, NSSecureCoding>
{
    CDStruct_47fe53f2 _has;
    int _status;
    _SFPBDate *_departurePublishedTime;
    _SFPBDate *_departureActualTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    _SFPBAirport *_departureAirport;
    _SFPBDate *_arrivalPublishedTime;
    _SFPBDate *_arrivalActualTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    _SFPBAirport *_arrivalAirport;
    _SFPBAirport *_divertedAirport;
    NSString *_title;
    NSString *_baggageClaim;
}

@property(copy, nonatomic) NSString *baggageClaim; // @synthesize baggageClaim=_baggageClaim;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _SFPBAirport *divertedAirport; // @synthesize divertedAirport=_divertedAirport;
@property(retain, nonatomic) _SFPBAirport *arrivalAirport; // @synthesize arrivalAirport=_arrivalAirport;
@property(copy, nonatomic) NSString *arrivalGate; // @synthesize arrivalGate=_arrivalGate;
@property(copy, nonatomic) NSString *arrivalTerminal; // @synthesize arrivalTerminal=_arrivalTerminal;
@property(retain, nonatomic) _SFPBDate *arrivalActualTime; // @synthesize arrivalActualTime=_arrivalActualTime;
@property(retain, nonatomic) _SFPBDate *arrivalPublishedTime; // @synthesize arrivalPublishedTime=_arrivalPublishedTime;
@property(retain, nonatomic) _SFPBAirport *departureAirport; // @synthesize departureAirport=_departureAirport;
@property(copy, nonatomic) NSString *departureGate; // @synthesize departureGate=_departureGate;
@property(copy, nonatomic) NSString *departureTerminal; // @synthesize departureTerminal=_departureTerminal;
@property(retain, nonatomic) _SFPBDate *departureActualTime; // @synthesize departureActualTime=_departureActualTime;
@property(retain, nonatomic) _SFPBDate *departurePublishedTime; // @synthesize departurePublishedTime=_departurePublishedTime;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasBaggageClaim;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasDivertedAirport;
@property(readonly, nonatomic) _Bool hasArrivalAirport;
@property(readonly, nonatomic) _Bool hasArrivalGate;
@property(readonly, nonatomic) _Bool hasArrivalTerminal;
@property(readonly, nonatomic) _Bool hasArrivalActualTime;
@property(readonly, nonatomic) _Bool hasArrivalPublishedTime;
@property(readonly, nonatomic) _Bool hasDepartureAirport;
@property(readonly, nonatomic) _Bool hasDepartureGate;
@property(readonly, nonatomic) _Bool hasDepartureTerminal;
@property(readonly, nonatomic) _Bool hasDepartureActualTime;
@property(readonly, nonatomic) _Bool hasDeparturePublishedTime;
@property(readonly, nonatomic) _Bool hasStatus;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


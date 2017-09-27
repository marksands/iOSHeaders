//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBFlight.h"

@class NSArray, NSData, NSString;

@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding>
{
    NSString *_flightID;
    NSString *_carrierCode;
    NSString *_carrierName;
    NSString *_flightNumber;
    NSArray *_legs;
    NSString *_operatorCarrierCode;
    NSString *_operatorFlightNumber;
    NSString *_carrierPhoneNumber;
}

@property(copy, nonatomic) NSString *carrierPhoneNumber; // @synthesize carrierPhoneNumber=_carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber; // @synthesize operatorFlightNumber=_operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode; // @synthesize operatorCarrierCode=_operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(copy, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSString *carrierCode; // @synthesize carrierCode=_carrierCode;
@property(copy, nonatomic) NSString *flightID; // @synthesize flightID=_flightID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasCarrierPhoneNumber;
@property(readonly, nonatomic) _Bool hasOperatorFlightNumber;
@property(readonly, nonatomic) _Bool hasOperatorCarrierCode;
- (id)legsAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (void)addLegs:(id)arg1;
- (void)clearLegs;
@property(readonly, nonatomic) _Bool hasFlightNumber;
@property(readonly, nonatomic) _Bool hasCarrierName;
@property(readonly, nonatomic) _Bool hasCarrierCode;
@property(readonly, nonatomic) _Bool hasFlightID;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


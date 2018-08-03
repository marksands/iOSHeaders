//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBBalanceAmountValue.h"

@class NSString, _INPBCurrencyAmountValue, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBBalanceAmountValue : PBCodable <_INPBBalanceAmountValue, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    _INPBCurrencyAmountValue *_currencyAmount;
    _INPBDecimalNumberValue *_customAmount;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBDecimalNumberValue *customAmount; // @synthesize customAmount=_customAmount;
@property(retain, nonatomic) _INPBCurrencyAmountValue *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasCustomAmount;
@property(readonly, nonatomic) _Bool hasCurrencyAmount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


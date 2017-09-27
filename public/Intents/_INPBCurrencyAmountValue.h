//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields, _INPBDecimalNumberValue, _INPBValueMetadata;

@interface _INPBCurrencyAmountValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDecimalNumberValue *_amount;
    NSString *_currencyCode;
    _INPBValueMetadata *_valueMetadata;
}

+ (id)options;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) _INPBDecimalNumberValue *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(readonly, nonatomic) _Bool hasAmount;
@property(readonly, nonatomic) _Bool hasValueMetadata;

@end


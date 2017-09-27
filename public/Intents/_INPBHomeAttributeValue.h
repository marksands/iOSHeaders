//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBDouble, _INPBString;

@interface _INPBHomeAttributeValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDouble *_doubleValue;
    _INPBString *_stringValue;
    int _valueType;
    _Bool _booleanValue;
    struct {
        unsigned int valueType:1;
        unsigned int booleanValue:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain, nonatomic) _INPBDouble *doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
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
@property(readonly, nonatomic) _Bool hasStringValue;
@property(readonly, nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasBooleanValue;
- (int)StringAsValueType:(id)arg1;
- (id)valueTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStringValue.h"

@class NSString, _INPBValueMetadata;

@interface _INPBStringValue : PBCodable <_INPBStringValue, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_value;
    _INPBValueMetadata *_valueMetadata;
}

@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


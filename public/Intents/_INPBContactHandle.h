//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBContactHandle.h"

@class NSString;

@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    NSString *_label;
    NSString *_value;
}

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBInteger.h"

@class NSArray, NSString;

@interface _INPBInteger : PBCodable <_INPBInteger, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_values;
}

+ (Class)valueType;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MPPMediaPredicateValue, NSString;

@interface MPPPropertyPredicate : PBCodable <NSCopying>
{
    int _comparisonType;
    NSString *_property;
    MPPMediaPredicateValue *_value;
    struct {
        unsigned int comparisonType:1;
    } _has;
}

@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) MPPMediaPredicateValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasComparisonType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasProperty;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntegerList.h"

@class NSArray, NSString, _INPBCondition;

@interface _INPBIntegerList : PBCodable <_INPBIntegerList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_conditionType;
    NSArray *_dataStrings;
}

+ (Class)dataStringType;
@property(copy, nonatomic) NSArray *dataStrings; // @synthesize dataStrings=_dataStrings;
@property(retain, nonatomic) _INPBCondition *conditionType; // @synthesize conditionType=_conditionType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dataStringAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;
@property(readonly, nonatomic) _Bool hasConditionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


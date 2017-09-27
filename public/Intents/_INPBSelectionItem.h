//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields, _INPBIntentSlotValue;

@interface _INPBSelectionItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_uuid;
    _INPBIntentSlotValue *_value;
    NSString *_vocabularyValue;
}

+ (id)options;
@property(retain, nonatomic) _INPBIntentSlotValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *vocabularyValue; // @synthesize vocabularyValue=_vocabularyValue;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
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
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasVocabularyValue;
@property(readonly, nonatomic) _Bool hasUuid;

@end


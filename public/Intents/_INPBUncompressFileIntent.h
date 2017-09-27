//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBIntentMetadata, _INPBString;

@interface _INPBUncompressFileIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_entityName;
    int _entityType;
    _INPBIntentMetadata *_intentMetadata;
    CDStruct_032f6352 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
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
@property(readonly, nonatomic) _Bool hasEntityName;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end


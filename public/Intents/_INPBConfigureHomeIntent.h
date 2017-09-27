//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBConfigureHomeIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entities;
    _INPBIntentMetadata *_intentMetadata;
}

+ (Class)entitiesType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
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
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end


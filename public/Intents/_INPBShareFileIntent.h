//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSMutableArray *_recipients;
    int _shareMode;
    struct {
        unsigned int shareMode:1;
    } _has;
}

+ (Class)recipientsType;
+ (Class)entityNameType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSMutableArray *entityNames; // @synthesize entityNames=_entityNames;
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
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;
- (int)StringAsShareMode:(id)arg1;
- (id)shareModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShareMode;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end


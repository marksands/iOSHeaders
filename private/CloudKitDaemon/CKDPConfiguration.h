//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPConfiguration : PBCodable <NSCopying>
{
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray *_fields;
    struct {
        unsigned int created:1;
        unsigned int expires:1;
    } _has;
}

+ (Class)fieldsType;
@property(nonatomic) unsigned long long expires; // @synthesize expires=_expires;
@property(nonatomic) unsigned long long created; // @synthesize created=_created;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExpires;
@property(nonatomic) _Bool hasCreated;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;

@end


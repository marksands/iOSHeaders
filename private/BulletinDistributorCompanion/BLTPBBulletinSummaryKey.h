//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSData, NSString;

@interface BLTPBBulletinSummaryKey : PBCodable <NSCopying>
{
    NSString *_key;
    NSData *_value;
    NSData *_valueNulls;
}

@property(retain, nonatomic) NSData *valueNulls; // @synthesize valueNulls=_valueNulls;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
@property(readonly, nonatomic) _Bool hasValueNulls;
@property(readonly, nonatomic) _Bool hasValue;

@end


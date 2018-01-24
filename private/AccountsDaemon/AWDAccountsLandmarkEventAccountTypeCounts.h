//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDAccountsLandmarkEventAccountTypeCounts : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _accountCount;
    NSString *_accountType;
    struct {
        unsigned int timestamp:1;
        unsigned int accountCount:1;
    } _has;
}

@property(nonatomic) unsigned int accountCount; // @synthesize accountCount=_accountCount;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasAccountCount;
@property(readonly, nonatomic) _Bool hasAccountType;
@property(nonatomic) _Bool hasTimestamp;

@end


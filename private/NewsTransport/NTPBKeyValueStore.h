//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface NTPBKeyValueStore : PBCodable <NSCopying>
{
    long long _clientVersion;
    long long _version;
    NSMutableArray *_keyValuePairs;
    NSData *_plistSidecar;
    struct {
        unsigned int clientVersion:1;
        unsigned int version:1;
    } _has;
}

+ (Class)keyValuePairsType;
@property(retain, nonatomic) NSData *plistSidecar; // @synthesize plistSidecar=_plistSidecar;
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlistSidecar;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
@property(nonatomic) _Bool hasClientVersion;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end


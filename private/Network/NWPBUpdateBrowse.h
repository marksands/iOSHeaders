//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>
{
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

+ (Class)discoveredEndpointsType;
@property(retain, nonatomic) NSMutableArray *discoveredEndpoints; // @synthesize discoveredEndpoints=_discoveredEndpoints;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
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
- (id)discoveredEndpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)discoveredEndpointsCount;
- (void)addDiscoveredEndpoints:(id)arg1;
- (void)clearDiscoveredEndpoints;
@property(readonly, nonatomic) _Bool hasClientUUID;

@end


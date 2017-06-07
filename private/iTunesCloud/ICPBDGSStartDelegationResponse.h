//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface ICPBDGSStartDelegationResponse : PBCodable <NSCopying>
{
    NSData *_playerAnisetteMID;
    NSData *_playerDeviceGUID;
    NSMutableArray *_playerInfoContextTokens;
}

+ (Class)playerInfoContextTokenType;
@property(retain, nonatomic) NSMutableArray *playerInfoContextTokens; // @synthesize playerInfoContextTokens=_playerInfoContextTokens;
@property(retain, nonatomic) NSData *playerDeviceGUID; // @synthesize playerDeviceGUID=_playerDeviceGUID;
@property(retain, nonatomic) NSData *playerAnisetteMID; // @synthesize playerAnisetteMID=_playerAnisetteMID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)playerInfoContextTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerInfoContextTokensCount;
- (void)addPlayerInfoContextToken:(id)arg1;
- (void)clearPlayerInfoContextTokens;
@property(readonly, nonatomic) _Bool hasPlayerDeviceGUID;
@property(readonly, nonatomic) _Bool hasPlayerAnisetteMID;

@end


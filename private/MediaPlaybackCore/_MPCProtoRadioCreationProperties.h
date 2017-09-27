//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, _MPCProtoDelegateInfo, _MPCProtoRadioContentReference;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying>
{
    _MPCProtoDelegateInfo *_accountInfo;
    _MPCProtoRadioContentReference *_nowPlayingContentReference;
    NSString *_radioStationID;
    NSString *_radioStationURLString;
    _MPCProtoRadioContentReference *_seedContentReference;
}

@property(retain, nonatomic) _MPCProtoDelegateInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) _MPCProtoRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property(retain, nonatomic) NSString *radioStationURLString; // @synthesize radioStationURLString=_radioStationURLString;
@property(retain, nonatomic) NSString *radioStationID; // @synthesize radioStationID=_radioStationID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAccountInfo;
@property(readonly, nonatomic) _Bool hasNowPlayingContentReference;
@property(readonly, nonatomic) _Bool hasSeedContentReference;
@property(readonly, nonatomic) _Bool hasRadioStationURLString;
@property(readonly, nonatomic) _Bool hasRadioStationID;

@end


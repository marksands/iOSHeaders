//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface ETPVideo : PBCodable <NSCopying>
{
    NSData *_introMessageData;
    int _mediaType;
    NSData *_playingMessagesData;
    struct {
        unsigned int mediaType:1;
    } _has;
}

@property(retain, nonatomic) NSData *playingMessagesData; // @synthesize playingMessagesData=_playingMessagesData;
@property(retain, nonatomic) NSData *introMessageData; // @synthesize introMessageData=_introMessageData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) _Bool hasPlayingMessagesData;
@property(readonly, nonatomic) _Bool hasIntroMessageData;

@end


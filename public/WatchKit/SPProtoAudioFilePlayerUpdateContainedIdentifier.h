//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying>
{
    NSString *_containedIdentifier;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *containedIdentifier; // @synthesize containedIdentifier=_containedIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) _Bool hasContainedIdentifier;
- (id)sockPuppetMessageForQueuePlayerSetCurrentItem;
- (id)sockPuppetMessageForQueuePlayerRemoveItem;
- (id)sockPuppetMessageForQueuePlayerAppendItem;
- (id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
- (id)sockPuppetMessageForPlayerItemUpsertWithAsset;

@end


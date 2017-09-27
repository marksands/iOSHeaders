//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoAudioFileQueuePlayerSetItems, SPProtoAudioFileQueuePlayerSetRate, SPProtoObjectMessage;

@interface SPProtoAudioFileQueuePlayer : PBCodable <NSCopying>
{
    SPProtoObjectMessage *_advanceToNextItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_appendItem;
    SPProtoObjectMessage *_destroy;
    SPProtoObjectMessage *_removeAllItems;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_removeItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_replaceCurrentItem;
    SPProtoAudioFilePlayerUpdateContainedIdentifier *_setCurrentItem;
    SPProtoAudioFileQueuePlayerSetRate *_setRate;
    SPProtoAudioFilePlayerStatus *_setStatus;
    SPProtoAudioFileQueuePlayerSetItems *_upsertWithItems;
}

@property(retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *setCurrentItem; // @synthesize setCurrentItem=_setCurrentItem;
@property(retain, nonatomic) SPProtoObjectMessage *removeAllItems; // @synthesize removeAllItems=_removeAllItems;
@property(retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *appendItem; // @synthesize appendItem=_appendItem;
@property(retain, nonatomic) SPProtoObjectMessage *advanceToNextItem; // @synthesize advanceToNextItem=_advanceToNextItem;
@property(retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus; // @synthesize setStatus=_setStatus;
@property(retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *replaceCurrentItem; // @synthesize replaceCurrentItem=_replaceCurrentItem;
@property(retain, nonatomic) SPProtoAudioFileQueuePlayerSetRate *setRate; // @synthesize setRate=_setRate;
@property(retain, nonatomic) SPProtoObjectMessage *destroy; // @synthesize destroy=_destroy;
@property(retain, nonatomic) SPProtoAudioFileQueuePlayerSetItems *upsertWithItems; // @synthesize upsertWithItems=_upsertWithItems;
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
@property(readonly, nonatomic) _Bool hasSetCurrentItem;
@property(readonly, nonatomic) _Bool hasRemoveAllItems;
@property(readonly, nonatomic) _Bool hasRemoveItem;
@property(readonly, nonatomic) _Bool hasAppendItem;
@property(readonly, nonatomic) _Bool hasAdvanceToNextItem;
@property(readonly, nonatomic) _Bool hasSetStatus;
@property(readonly, nonatomic) _Bool hasReplaceCurrentItem;
@property(readonly, nonatomic) _Bool hasSetRate;
@property(readonly, nonatomic) _Bool hasDestroy;
@property(readonly, nonatomic) _Bool hasUpsertWithItems;
- (id)sockPuppetMessage;

@end


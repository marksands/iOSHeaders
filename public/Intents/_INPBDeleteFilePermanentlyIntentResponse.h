//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _confirm;
    _Bool _success;
    struct {
        unsigned int confirm:1;
        unsigned int success:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool confirm; // @synthesize confirm=_confirm;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasConfirm;

@end

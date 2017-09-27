//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface NWPBCommandMessage : PBCodable <NSCopying>
{
    int _command;
    NSData *_messageData;
    struct {
        unsigned int command:1;
    } _has;
}

@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
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
@property(readonly, nonatomic) _Bool hasMessageData;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) _Bool hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPin;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end


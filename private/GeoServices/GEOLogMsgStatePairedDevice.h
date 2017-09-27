//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying>
{
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    _Bool _isConnected;
    struct {
        unsigned int type:1;
        unsigned int isConnected:1;
    } _has;
}

@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier; // @synthesize pairedDeviceIdentifier=_pairedDeviceIdentifier;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
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
@property(readonly, nonatomic) _Bool hasPairedDeviceIdentifier;
@property(nonatomic) _Bool hasIsConnected;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end


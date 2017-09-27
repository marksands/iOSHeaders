//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface _INPBActivateCarSignalIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _signals;
}

+ (id)options;
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
- (int)StringAsSignals:(id)arg1;
- (id)signalsAsString:(int)arg1;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
@property(readonly, nonatomic) int *signals;
@property(readonly, nonatomic) unsigned long long signalsCount;
- (void)dealloc;

@end


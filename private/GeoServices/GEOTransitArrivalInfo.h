//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOTransitArrivalInfo : PBCodable <NSCopying>
{
    int _destinationLocation;
    struct {
        unsigned int destinationLocation:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsDestinationLocation:(id)arg1;
- (id)destinationLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasDestinationLocation;
@property(nonatomic) int destinationLocation; // @synthesize destinationLocation=_destinationLocation;

@end


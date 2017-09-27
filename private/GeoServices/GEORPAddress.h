//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAddress, GEOPDAddressObject, NSString;

@interface GEORPAddress : PBCodable <NSCopying>
{
    GEOPDAddressObject *_addressObject;
    NSString *_addressString;
    GEOAddress *_geoAddress;
}

@property(retain, nonatomic) GEOPDAddressObject *addressObject; // @synthesize addressObject=_addressObject;
@property(retain, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(retain, nonatomic) GEOAddress *geoAddress; // @synthesize geoAddress=_geoAddress;
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
@property(readonly, nonatomic) _Bool hasAddressObject;
@property(readonly, nonatomic) _Bool hasAddressString;
@property(readonly, nonatomic) _Bool hasGeoAddress;

@end


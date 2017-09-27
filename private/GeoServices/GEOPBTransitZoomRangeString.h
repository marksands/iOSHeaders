//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _minZoom;
    struct {
        unsigned int minZoom:1;
    } _has;
}

@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) NSString *labelLanguage; // @synthesize labelLanguage=_labelLanguage;
@property(nonatomic) unsigned int minZoom; // @synthesize minZoom=_minZoom;
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
@property(readonly, nonatomic) _Bool hasLabelText;
@property(readonly, nonatomic) _Bool hasLabelLanguage;
@property(nonatomic) _Bool hasMinZoom;

@end


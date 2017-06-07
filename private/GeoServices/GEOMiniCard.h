//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString;

@interface GEOMiniCard : PBCodable <NSCopying>
{
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_title;
    _Bool _shouldEmphasize;
    struct {
        unsigned int shouldEmphasize:1;
    } _has;
}

@property(nonatomic) _Bool shouldEmphasize; // @synthesize shouldEmphasize=_shouldEmphasize;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) GEOFormattedString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) GEOFormattedString *title; // @synthesize title=_title;
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
@property(nonatomic) _Bool hasShouldEmphasize;
@property(readonly, nonatomic) _Bool hasButtonText;
@property(readonly, nonatomic) _Bool hasDetail;
@property(readonly, nonatomic) _Bool hasTitle;

@end


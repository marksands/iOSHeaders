//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _Bool _includeName;
    _Bool _includeSpokenNames;
    struct {
        unsigned int includeName:1;
        unsigned int includeSpokenNames:1;
    } _has;
}

@property(nonatomic) _Bool includeName; // @synthesize includeName=_includeName;
@property(nonatomic) _Bool includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
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
@property(nonatomic) _Bool hasIncludeName;
@property(nonatomic) _Bool hasIncludeSpokenNames;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPDResolvedItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_extractedTerm;
    int _resolvedItemType;
    unsigned int _resultIndex;
    struct {
        unsigned int resolvedItemType:1;
        unsigned int resultIndex:1;
    } _has;
}

@property(nonatomic) unsigned int resultIndex; // @synthesize resultIndex=_resultIndex;
@property(retain, nonatomic) NSString *extractedTerm; // @synthesize extractedTerm=_extractedTerm;
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
@property(nonatomic) _Bool hasResultIndex;
- (int)StringAsResolvedItemType:(id)arg1;
- (id)resolvedItemTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResolvedItemType;
@property(nonatomic) int resolvedItemType; // @synthesize resolvedItemType=_resolvedItemType;
@property(readonly, nonatomic) _Bool hasExtractedTerm;

@end


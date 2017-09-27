//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDRelatedSearchSuggestion, NSString, PBUnknownFields;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_interpretedQuery;
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
    int _substituteType;
    struct {
        unsigned int substituteType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property(retain, nonatomic) NSString *interpretedQuery; // @synthesize interpretedQuery=_interpretedQuery;
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
@property(readonly, nonatomic) _Bool hasRelatedSearchSuggestion;
@property(readonly, nonatomic) _Bool hasInterpretedQuery;
- (int)StringAsSubstituteType:(id)arg1;
- (id)substituteTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSubstituteType;
@property(nonatomic) int substituteType; // @synthesize substituteType=_substituteType;

@end


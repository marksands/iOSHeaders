//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDReview : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _reviewTime;
    GEOPDRating *_rating;
    NSString *_reviewId;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    struct {
        unsigned int reviewTime:1;
    } _has;
}

+ (Class)snippetType;
+ (id)reviewsForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDRating *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(retain, nonatomic) GEOPDUser *reviewer; // @synthesize reviewer=_reviewer;
@property(nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
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
@property(readonly, nonatomic) _Bool hasRating;
@property(readonly, nonatomic) _Bool hasReviewId;
@property(readonly, nonatomic) _Bool hasReviewer;
@property(nonatomic) _Bool hasReviewTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (id)_bestSnippetLocale;
- (id)_bestSnippet;

@end


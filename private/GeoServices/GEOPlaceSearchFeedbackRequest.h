//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>
{
    struct GEOSessionID _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct {
        unsigned int sessionGUID:1;
        unsigned int businessID:1;
        unsigned int timestamp:1;
        unsigned int feedbackType:1;
        unsigned int localSearchProviderID:1;
        unsigned int numberOfResults:1;
        unsigned int positionInResults:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) int positionInResults; // @synthesize positionInResults=_positionInResults;
@property(nonatomic) int numberOfResults; // @synthesize numberOfResults=_numberOfResults;
@property(nonatomic) long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) struct GEOSessionID sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasPositionInResults;
@property(nonatomic) _Bool hasNumberOfResults;
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) _Bool hasBusinessID;
@property(nonatomic) _Bool hasSessionGUID;
@property(nonatomic) _Bool hasTimestamp;

@end


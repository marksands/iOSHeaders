//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying>
{
    long long _adErrorCode;
    NSString *_adCreativeId;
    NSString *_adOpportunityId;
    NSString *_adSlotId;
    NSData *_articleViewingSessionId;
    int _durationInFeed;
    int _errorCode;
    NSString *_eventId;
    int _exposureLocationType;
    NSString *_exposureLocationTypeId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _responseTime;
    int _screenfulsFromTop;
    _Bool _isExpanded;
    _Bool _isFilled;
    _Bool _isViewable;
    struct {
        unsigned int adErrorCode:1;
        unsigned int durationInFeed:1;
        unsigned int errorCode:1;
        unsigned int exposureLocationType:1;
        unsigned int feedType:1;
        unsigned int responseTime:1;
        unsigned int screenfulsFromTop:1;
        unsigned int isExpanded:1;
        unsigned int isFilled:1;
        unsigned int isViewable:1;
    } _has;
}

@property(nonatomic) long long adErrorCode; // @synthesize adErrorCode=_adErrorCode;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *adOpportunityId; // @synthesize adOpportunityId=_adOpportunityId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *adCreativeId; // @synthesize adCreativeId=_adCreativeId;
@property(retain, nonatomic) NSString *exposureLocationTypeId; // @synthesize exposureLocationTypeId=_exposureLocationTypeId;
@property(nonatomic) _Bool isViewable; // @synthesize isViewable=_isViewable;
@property(nonatomic) int screenfulsFromTop; // @synthesize screenfulsFromTop=_screenfulsFromTop;
@property(nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int durationInFeed; // @synthesize durationInFeed=_durationInFeed;
@property(retain, nonatomic) NSString *adSlotId; // @synthesize adSlotId=_adSlotId;
@property(nonatomic) _Bool isFilled; // @synthesize isFilled=_isFilled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAdErrorCode;
@property(readonly, nonatomic) _Bool hasEventId;
@property(readonly, nonatomic) _Bool hasAdOpportunityId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasAdCreativeId;
@property(readonly, nonatomic) _Bool hasExposureLocationTypeId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasExposureLocationType;
@property(nonatomic) int exposureLocationType; // @synthesize exposureLocationType=_exposureLocationType;
@property(nonatomic) _Bool hasIsViewable;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool hasScreenfulsFromTop;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) _Bool hasDurationInFeed;
@property(readonly, nonatomic) _Bool hasAdSlotId;
@property(nonatomic) _Bool hasIsFilled;
@property(nonatomic) _Bool hasIsExpanded;

@end


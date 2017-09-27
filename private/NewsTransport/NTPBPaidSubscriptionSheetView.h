//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    NSString *_iadQtoken;
    int _paidSubscriptionConversionPointExposureLocation;
    int _paidSubscriptionConversionPointType;
    int _paidSubscriptionSheetViewPresentationReason;
    int _parentFeedType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    _Bool _arrivedFromAd;
    _Bool _subscriptionOnlyArticlePreview;
    struct {
        unsigned int paidSubscriptionConversionPointExposureLocation:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int paidSubscriptionSheetViewPresentationReason:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSData *subscriptionPurchaseSessionId; // @synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId;
@property(retain, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property(nonatomic) _Bool arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) _Bool subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasSubscriptionPurchaseSessionId;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property(readonly, nonatomic) _Bool hasIadQtoken;
@property(nonatomic) _Bool hasArrivedFromAd;
@property(nonatomic) _Bool hasSubscriptionOnlyArticlePreview;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasSectionId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriptionConversionPointExposureLocation;
@property(nonatomic) int paidSubscriptionConversionPointExposureLocation; // @synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation;
@property(nonatomic) _Bool hasPaidSubscriptionSheetViewPresentationReason;
@property(nonatomic) int paidSubscriptionSheetViewPresentationReason; // @synthesize paidSubscriptionSheetViewPresentationReason=_paidSubscriptionSheetViewPresentationReason;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end


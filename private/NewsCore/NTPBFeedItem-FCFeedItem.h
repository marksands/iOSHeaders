//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsTransport/NTPBFeedItem.h>

#import <NewsCore/FCClassifiable-Protocol.h>
#import <NewsCore/FCFeedTransformationItem-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort, NSArray, NSDate, NSString;

@interface NTPBFeedItem (FCFeedItem) <FCClassifiable, FCFeedTransformationItem>
+ (id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2;
+ (id)cloudKitKeysWithStorefrontID:(id)arg1;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *publisherCohort;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort *globalCohort;
@property(readonly, nonatomic) _Bool canBePurchased;
@property(readonly, nonatomic) long long publisherArticleVersion;
- (_Bool)mustShow;
@property(readonly, nonatomic) unsigned long long articleContentType;
@property(readonly, nonatomic) _Bool hasGlobalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *description;
- (_Bool)hasFeature:(id)arg1;
- (void)enumerateFeaturesWithBlock:(CDUnknownBlockType)arg1;
- (long long)compareOrderDescending:(id)arg1;
- (long long)compareOrder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@end


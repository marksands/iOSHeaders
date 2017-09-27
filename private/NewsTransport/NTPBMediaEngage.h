//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBMediaEngage : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _mediaDuration;
    long long _mediaPausePosition;
    long long _mediaResumePosition;
    long long _mediaResumeTimePlayed;
    long long _mediaTimePlayed;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeLine;
    int _loadFailureReason;
    NSString *_mediaId;
    int _mediaPauseLocation;
    int _mediaPauseMethod;
    int _mediaPlayLocation;
    int _mediaPlayMethod;
    int _mediaResumeMethod;
    int _mediaType;
    NSString *_metadata;
    int _muteButtonState;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    float _osVolumeLevel;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    int _userAction;
    int _videoType;
    NTPBWidgetEngagement *_widgetEngagement;
    _Bool _adSupportedChannel;
    _Bool _isBreakingNewsArticle;
    _Bool _isDigitalReplicaAd;
    _Bool _isNativeAd;
    _Bool _isTopStoryArticle;
    _Bool _isUserSubscribedToFeed;
    _Bool _isVideoInFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int mediaDuration:1;
        unsigned int mediaPausePosition:1;
        unsigned int mediaResumePosition:1;
        unsigned int mediaResumeTimePlayed:1;
        unsigned int mediaTimePlayed:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int loadFailureReason:1;
        unsigned int mediaPauseLocation:1;
        unsigned int mediaPauseMethod:1;
        unsigned int mediaPlayLocation:1;
        unsigned int mediaPlayMethod:1;
        unsigned int mediaResumeMethod:1;
        unsigned int mediaType:1;
        unsigned int muteButtonState:1;
        unsigned int osVolumeLevel:1;
        unsigned int publisherArticleVersion:1;
        unsigned int topStoryType:1;
        unsigned int userAction:1;
        unsigned int videoType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
        unsigned int isVideoInFeed:1;
    } _has;
}

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property(retain, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property(retain, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property(nonatomic) float osVolumeLevel; // @synthesize osVolumeLevel=_osVolumeLevel;
@property(nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property(nonatomic) _Bool isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property(nonatomic) _Bool isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property(nonatomic) _Bool isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property(nonatomic) long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(nonatomic) _Bool isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(nonatomic) _Bool isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(retain, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property(retain, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) long long mediaResumePosition; // @synthesize mediaResumePosition=_mediaResumePosition;
@property(nonatomic) long long mediaResumeTimePlayed; // @synthesize mediaResumeTimePlayed=_mediaResumeTimePlayed;
@property(nonatomic) long long mediaPausePosition; // @synthesize mediaPausePosition=_mediaPausePosition;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) long long mediaTimePlayed; // @synthesize mediaTimePlayed=_mediaTimePlayed;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasIadNativeAd;
@property(readonly, nonatomic) _Bool hasIadNativeLine;
@property(readonly, nonatomic) _Bool hasIadNativeCampaign;
@property(nonatomic) _Bool hasOsVolumeLevel;
@property(nonatomic) _Bool hasMuteButtonState;
@property(nonatomic) int muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property(nonatomic) _Bool hasBackendArticleVersionInt64;
@property(nonatomic) _Bool hasPublisherArticleVersionInt64;
- (int)StringAsVideoType:(id)arg1;
- (id)videoTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasVideoType;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasWidgetEngagement;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasNativeCampaignData;
@property(nonatomic) _Bool hasIsNativeAd;
@property(nonatomic) _Bool hasIsTopStoryArticle;
- (int)StringAsTopStoryType:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool hasLoadFailureReason;
@property(nonatomic) int loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property(nonatomic) _Bool hasIsBreakingNewsArticle;
@property(nonatomic) _Bool hasMediaDuration;
@property(nonatomic) _Bool hasMediaPauseLocation;
@property(nonatomic) int mediaPauseLocation; // @synthesize mediaPauseLocation=_mediaPauseLocation;
@property(nonatomic) _Bool hasPersonalizationTreatmentId;
@property(nonatomic) _Bool hasIsVideoInFeed;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
@property(nonatomic) _Bool hasIsDigitalReplicaAd;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(readonly, nonatomic) _Bool hasSurfacedByTopicId;
@property(readonly, nonatomic) _Bool hasSurfacedBySectionId;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasMediaPlayLocation;
@property(nonatomic) int mediaPlayLocation; // @synthesize mediaPlayLocation=_mediaPlayLocation;
@property(nonatomic) _Bool hasMediaResumePosition;
@property(nonatomic) _Bool hasMediaResumeMethod;
@property(nonatomic) int mediaResumeMethod; // @synthesize mediaResumeMethod=_mediaResumeMethod;
@property(nonatomic) _Bool hasMediaResumeTimePlayed;
@property(nonatomic) _Bool hasMediaPausePosition;
@property(nonatomic) _Bool hasMediaPauseMethod;
@property(nonatomic) int mediaPauseMethod; // @synthesize mediaPauseMethod=_mediaPauseMethod;
@property(nonatomic) _Bool hasMediaPlayMethod;
@property(nonatomic) int mediaPlayMethod; // @synthesize mediaPlayMethod=_mediaPlayMethod;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasMediaTimePlayed;
@property(readonly, nonatomic) _Bool hasMediaId;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end


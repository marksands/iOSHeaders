//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSMutableDictionary, NSMutableSet;

@interface FCPaidSubscriptionCursor : FCFeedGroupEmittingCursor
{
    NSMutableSet *_processedChannelIDs;
    NSMutableDictionary *_supplementalArticleIDs;
    NSMutableDictionary *_expiredChannelIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *expiredChannelIDs; // @synthesize expiredChannelIDs=_expiredChannelIDs;
@property(retain, nonatomic) NSMutableDictionary *supplementalArticleIDs; // @synthesize supplementalArticleIDs=_supplementalArticleIDs;
@property(retain, nonatomic) NSMutableSet *processedChannelIDs; // @synthesize processedChannelIDs=_processedChannelIDs;
- (void).cxx_destruct;
- (void)purgeExpiredChannelIdentifiersNotInArray:(id)arg1;
- (unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)arg1;
- (void)purgeSupplementalArticleIDsNotInArray:(id)arg1 forChannel:(id)arg2;
- (unsigned long long)countForFeedItem:(id)arg1;
- (void)trackSupplementalFeedItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


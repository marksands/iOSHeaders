//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCFeedPersonalizingArticle.h"
#import "NSObject.h"

@class NSString;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingArticle>
@property(readonly, nonatomic) _Bool canBePurchased;
@property(readonly, nonatomic) long long publisherArticleVersion;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *feedID;
@end


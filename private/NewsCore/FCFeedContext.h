//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FCFeedContext : NSObject <NSCopying>
{
    _Bool _isHiddenFeed;
    _Bool _isTopStories;
    _Bool _isEditorial;
    _Bool _isEditorialGems;
    _Bool _isCoverArticles;
    NSString *_sectionID;
    NSString *_channelID;
    NSString *_topicID;
}

+ (id)feedContextForHiddenFeed;
+ (id)feedContextForCoverArticlesFeed;
+ (id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2;
+ (id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForEditorialTag:(id)arg1;
+ (id)feedContextForTopStoriesTag:(id)arg1;
+ (id)feedContextForTag:(id)arg1;
@property(nonatomic) _Bool isCoverArticles; // @synthesize isCoverArticles=_isCoverArticles;
@property(nonatomic) _Bool isEditorialGems; // @synthesize isEditorialGems=_isEditorialGems;
@property(nonatomic) _Bool isEditorial; // @synthesize isEditorial=_isEditorial;
@property(nonatomic) _Bool isTopStories; // @synthesize isTopStories=_isTopStories;
@property(nonatomic) _Bool isHiddenFeed; // @synthesize isHiddenFeed=_isHiddenFeed;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


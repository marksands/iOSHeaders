//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSOrderedSet;

@interface FCCoverArticlesFeedGroupCursor : FCFeedGroupEmittingCursor
{
    NSOrderedSet *_promotedArticleIDs;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSOrderedSet *promotedArticleIDs; // @synthesize promotedArticleIDs=_promotedArticleIDs;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


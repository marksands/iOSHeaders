//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCArticleIDFeedDescriptor.h>

@class NSArray;

@interface FCArticlesFeedDescriptor : FCArticleIDFeedDescriptor
{
    NSArray *_articleIDs;
}

@property(readonly, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
- (void).cxx_destruct;
- (id)streamOfLatestArticleIDsWithContext:(id)arg1;
- (id)name;
- (id)initWithIdentifier:(id)arg1 articleIDs:(id)arg2;

@end


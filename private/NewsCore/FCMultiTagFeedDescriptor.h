//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

@interface FCMultiTagFeedDescriptor : FCFeedDescriptor
{
}

- (void)d_fetchAllHeadlinesWithCloudContext:(id)arg1 sinceDate:(id)arg2 filter:(_Bool)arg3 personalize:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (long long)feedFilterOptions;
- (long long)feedSortMethod;
- (id)feedGroupEmitters;
- (_Bool)isInboxStyleFeed;
- (id)name;

@end

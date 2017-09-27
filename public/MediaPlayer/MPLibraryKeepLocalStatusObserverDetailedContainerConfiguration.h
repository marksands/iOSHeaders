//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration
{
    NSArray *_pendingItemIdentifiers;
    long long _downloadEnabledItemCount;
    long long _nonPurgeableItemCount;
    long long _redownloadableItemCount;
}

@property(nonatomic) long long redownloadableItemCount; // @synthesize redownloadableItemCount=_redownloadableItemCount;
@property(nonatomic) long long nonPurgeableItemCount; // @synthesize nonPurgeableItemCount=_nonPurgeableItemCount;
@property(nonatomic) long long downloadEnabledItemCount; // @synthesize downloadEnabledItemCount=_downloadEnabledItemCount;
@property(copy, nonatomic) NSArray *pendingItemIdentifiers; // @synthesize pendingItemIdentifiers=_pendingItemIdentifiers;
- (void).cxx_destruct;

@end


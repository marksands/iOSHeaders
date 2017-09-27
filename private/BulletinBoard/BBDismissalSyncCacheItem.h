//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject
{
    NSMutableArray *_dismissalDictionariesAndFeeds;
    NSMutableDictionary *_dismissalIDToFeeds;
}

@property(readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds; // @synthesize dismissalIDToFeeds=_dismissalIDToFeeds;
@property(readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds; // @synthesize dismissalDictionariesAndFeeds=_dismissalDictionariesAndFeeds;
- (void).cxx_destruct;
- (id)description;
- (id)purgeExpired;
- (void)removeBulletinMatch:(id)arg1;
- (id)findBulletinMatch:(id)arg1;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3;
- (id)init;

@end


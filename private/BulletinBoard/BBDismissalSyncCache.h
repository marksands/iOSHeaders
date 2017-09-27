//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface BBDismissalSyncCache : NSObject
{
    NSMutableDictionary *_cache;
    NSDate *_timeToCheck;
}

@property(retain, nonatomic) NSDate *timeToCheck; // @synthesize timeToCheck=_timeToCheck;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)description;
- (void)_checkCache;
- (_Bool)_isTimeToCheck;
- (void)removeBulletinMatch:(id)arg1;
- (id)findBulletinMatch:(id)arg1;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4;
- (id)init;

@end


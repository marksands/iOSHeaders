//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDActivityCacheManager, HKActivityCache;

@protocol HDActivityCacheManagerObserver <NSObject>
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedTodayActivityCache:(HKActivityCache *)arg2;

@optional
- (void)activityCacheManager:(HDActivityCacheManager *)arg1 changedYesterdayActivityCache:(HKActivityCache *)arg2;
@end


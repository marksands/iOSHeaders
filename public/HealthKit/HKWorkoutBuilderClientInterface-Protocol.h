//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary;

@protocol HKWorkoutBuilderClientInterface <NSObject>
- (void)clientRemote_synchronizeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)clientRemote_didRecoverSeriesBuilders:(NSDictionary *)arg1;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)clientRemote_didUpdateEvents:(NSArray *)arg1;
- (void)clientRemote_didUpdateMetadata:(NSDictionary *)arg1;
- (void)clientRemote_didUpdateStatistics:(NSDictionary *)arg1;
@end


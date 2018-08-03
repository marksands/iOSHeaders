//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@protocol FCNewsAppConfigurationManager <NSObject>
@property(readonly, nonatomic) id <FCNewsAppConfiguration> appConfiguration;
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 refreshCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg1;

@optional
@property(readonly, nonatomic) NSArray *availableExperiments;
@property(readonly, copy, nonatomic) NSNumber *currentModdedBucketID;
@property(readonly, copy, nonatomic) NSString *feldsparID;
@property(readonly, nonatomic) NSArray *segmentSetIDs;
@property(readonly, nonatomic) NSArray *treatmentIDs;
- (void)overrideConfigWithTreatment:(NSNumber *)arg1;
- (void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(_Bool)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSData *, NSError *))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class NSDictionary;

@protocol MCMDMXPCProtocol <NSObject>
- (void)processDeviceRequest:(NSDictionary *)arg1 completion:(void (^)(NSError *, NSDictionary *))arg2;
- (void)uprootMDMWithCompletion:(void (^)(NSError *))arg1;
- (void)migrateMDMWithContext:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)retryNotNowWithCompletion:(void (^)(NSError *))arg1;
- (void)simulatePushIfNetworkTetheredWithCompletion:(void (^)(NSError *))arg1;
- (void)simulatePushWithCompletion:(void (^)(NSError *))arg1;
- (void)scheduleTokenUpdateIfNecessaryWithCompletion:(void (^)(NSError *))arg1;
- (void)scheduleTokenUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyNewConfigurationWithCompletion:(void (^)(NSError *))arg1;
@end


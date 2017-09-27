//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMCatherineFeeder, HDProfile, HDQueryServer, HDXPCClient, NSArray, NSDate, NSString, NSTimeZone, NSUUID, NSXPCListenerEndpoint, _HKDeepBreathingSessionConfiguration, _HKQueryServerDataObject;

@protocol HDHealthPlugin <NSObject>
@property(readonly, copy, nonatomic) NSString *pluginIdentifier;
- (void)activate;
- (id)initWithHealthDaemon:(id <HDHealthDaemon>)arg1;

@optional
- (void)_setPluginHeartRateEnable:(_Bool)arg1;
- (void)_setPluginCatherineFeeder:(CMCatherineFeeder *)arg1;
- (void)setCurrentActivityCacheOverrideDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (NSArray *)dataCollectors;
- (id <HDDeepBreathingSessionServer>)deepBreathingServerForClient:(id)arg1 configuration:(_HKDeepBreathingSessionConfiguration *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 delegate:(id <HDDeepBreathingSessionServerDelegate>)arg4;
- (HDQueryServer *)queryServerForUUID:(NSUUID *)arg1 serverDataObject:(_HKQueryServerDataObject *)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(HDXPCClient *)arg5 profile:(HDProfile *)arg6 queryDelegate:(id <HDQueryServerDelegate>)arg7;
- (_Bool)daemonDidReceiveNotification:(const char *)arg1;
- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id *)arg2;
@end


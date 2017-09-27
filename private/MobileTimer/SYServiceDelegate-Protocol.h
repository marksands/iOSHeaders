//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSInputStream, NSUUID, SYService, SYSession;

@protocol SYServiceDelegate <NSObject>
- (_Bool)service:(SYService *)arg1 startSession:(SYSession *)arg2 error:(id *)arg3;

@optional
- (void)serviceDidUnpairDevice:(SYService *)arg1;
- (void)serviceDidPairDevice:(SYService *)arg1;
- (void)service:(SYService *)arg1 targetDeviceProximityChanged:(_Bool)arg2;
- (void)service:(SYService *)arg1 didSwitchFromPairingID:(NSUUID *)arg2 toPairingID:(NSUUID *)arg3;
- (void)service:(SYService *)arg1 willSwitchFromPairingID:(NSUUID *)arg2 toPairingID:(NSUUID *)arg3;
- (SYSession *)service:(SYService *)arg1 willPreferSession:(SYSession *)arg2 overSession:(SYSession *)arg3;
- (void)service:(SYService *)arg1 encounteredError:(NSError *)arg2 context:(NSDictionary *)arg3;
- (void)service:(SYService *)arg1 incomingStream:(NSInputStream *)arg2 metadata:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)service:(SYService *)arg1 incomingData:(NSData *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)service:(SYService *)arg1 sessionEnded:(SYSession *)arg2 error:(NSError *)arg3;
@end


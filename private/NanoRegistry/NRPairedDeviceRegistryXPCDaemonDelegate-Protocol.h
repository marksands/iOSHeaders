//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSSet, NSUUID;

@protocol NRPairedDeviceRegistryXPCDaemonDelegate
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(NSData *)arg1 completion:(void (^)(_Bool))arg2;
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(void (^)(NSData *))arg1;
- (void)xpcSwitchToSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcUnpairWithSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcPairWithSimulator:(NSUUID *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)xpcClientInfo:(void (^)(NSArray *))arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(void (^)(NSUUID *, NSDate *))arg2;
- (void)xpcSwitchIndex:(void (^)(unsigned int))arg1;
- (void)xpcGetChangeHistoryWithBlock:(void (^)(NRDeviceCollectionHistory *))arg1;
- (void)xpcRetrieveSecureProperties:(NSSet *)arg1 block:(void (^)(NSDictionary *))arg2;
- (void)xpcGetDiffSinceIndex:(unsigned long long)arg1 withBlock:(void (^)(NRDeviceCollectionDiff *, _Bool, unsigned long long, _Bool, _Bool))arg2;
- (void)xpcGetDeviceCollectionWithBlock:(void (^)(NRMutableDeviceCollection *, unsigned long long, _Bool, NRSecureDevicePropertyStore *))arg1;
@end


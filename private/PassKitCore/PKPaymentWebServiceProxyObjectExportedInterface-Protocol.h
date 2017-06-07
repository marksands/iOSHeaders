//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, PKPass, PKPaymentPass, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;

@protocol PKPaymentWebServiceProxyObjectExportedInterface <NSObject>
- (void)invalidateRemoteProxyTargetDevice;
- (void)archiveBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveContext:(PKPaymentWebServiceContext *)arg1;
- (void)removePass:(PKPass *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addPassData:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)handlePotentialExpressPass:(PKPaymentPass *)arg1 withCompletion:(void (^)(NSSet *))arg2;
- (void)validateTransferPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)downloadAllPaymentPasses;
- (void)validateAddPreconditionsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(void (^)(_Bool, NSData *, NSData *))arg1;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)paymentSupportedInCurrentRegion:(void (^)(int))arg1;
- (void)didRegisterWithRegionMap:(NSDictionary *)arg1 primaryRegionTopic:(NSString *)arg2;
- (void)deleteApplicationWithAID:(NSString *)arg1;
- (void)getProvisioningDataWithCompletion:(void (^)(PKPaymentDeviceProvisioningData *, NSError *))arg1;
- (void)signData:(NSData *)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(void (^)(NSData *, PKSecureElementSignatureInfo *, NSError *))arg3;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(void (^)(PKTrustedDeviceEnrollmentInfo *))arg1;
- (void)getRegistrationDataWithAuthToken:(NSString *)arg1 completion:(void (^)(PKPaymentDeviceRegistrationData *, NSError *))arg2;
- (void)getConfigurationDataWithCompletion:(void (^)(PKPaymentDeviceConfigurationData *, NSError *))arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)getContextWithCompletion:(void (^)(PKPaymentWebServiceContext *))arg1;
@end


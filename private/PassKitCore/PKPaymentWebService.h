//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKWebService.h>

#import <PassKitCore/NSURLSessionDownloadDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSObject, NSString, NSURL, NSURLSession, PKPaymentDevice, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;
@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate>
{
    NSURLSession *_backgroundSession;
    PKPaymentDevice *_paymentDevice;
    NSMutableDictionary *_passesByLocalURL;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;
    NSHashTable *_delegates;
    _Bool _sharedService;
    PKPaymentWebServiceContext *_context;
    PKPaymentWebServiceBackgroundContext *_backgroundContext;
    id <PKPaymentWebServiceArchiver> _archiver;
    id <PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedService;
@property(nonatomic) _Bool sharedService; // @synthesize sharedService=_sharedService;
@property(readonly, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
@property id <PKPaymentWebServiceBackgroundDelegate> backgroundDelegate; // @synthesize backgroundDelegate=_backgroundDelegate;
@property(retain) id <PKPaymentWebServiceArchiver> archiver; // @synthesize archiver=_archiver;
@property(retain) PKPaymentWebServiceBackgroundContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
@property(retain) PKPaymentWebServiceContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_archiveBackgroundContext;
- (void)_archiveContext;
- (void)_cleanupPassDownloadCache;
- (id)_downloadCacheLocation;
- (id)_movePassToDownloadCache:(id)arg1;
- (id)_paymentDevice;
- (id)_errorWithResult:(unsigned long long)arg1 data:(id)arg2;
- (unsigned long long)_resultForUnexpectedStatusCode:(long long)arg1;
- (unsigned long long)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_downloadPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deviceProvisioningDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_downloadPassesWithURLs:(id)arg1;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handlePassDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRemoteAssetDownloadTask:(id)arg1 data:(id)arg2;
- (id)_passWithFileURL:(id)arg1;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (_Bool)_hasConfiguration;
- (void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (unsigned long long)networkManifestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)performAction:(id)arg1 onServiceProviderPurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)serviceProviderPurchaseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)serviceProviderPurchasesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)performServiceProviderPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)serviceProviderNonceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)prepareTransactionDetailsForMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)availableDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)redeemSession:(id)arg1 remotePaymentInstrument:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)retainSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (unsigned long long)_nonceForPass:(id)arg1 serviceURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)moreInfoItemAtURL:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)passActionWithRemoteContentPassAction:(id)arg1 forPass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)paymentProvisioningNonceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)availableProductsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2;
- (void)backgroundDownloadRemotePassAssets:(id)arg1;
- (void)backgroundDownloadPassAtURL:(id)arg1;
- (unsigned long long)passAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(_Bool)arg2;
- (void)backgroundDownloadPassesSinceLastUpdatedTag:(_Bool)arg1;
- (unsigned long long)performNotifificationActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)passesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)devicePassesSinceLastUpdatedTag:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)verificationChannelsForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removeVerificationRequestRecord:(id)arg1;
- (void)_addVerificationRequestRecord:(id)arg1;
- (id)verificationRecordForPass:(id)arg1;
- (id)_fakeVerificationChannelsWithRealChannels:(id)arg1;
- (void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)updateVerification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deprovisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)eligibilityForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)requirementsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyData:(id)arg2 retries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)registerDeviceWithConsistencyData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)configurePaymentServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_isSandboxAccount;
- (void)signNonce:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)defaultUserInfoForErrorDomain:(id)arg1 andErrorCode:(long long)arg2;
@property(readonly) NSArray *delegates;
- (void)invalidateBackgroundSession;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3;
- (_Bool)_canRegisterForPeerPayment;
@property(readonly) NSURL *primaryBrokerURL;
@property(readonly) _Bool needsConfiguration;
@property(readonly) _Bool needsRegistration;
@property(readonly) int paymentSetupSupportedInRegion;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2;
- (id)init;
- (_Bool)canBypassTrustExtendedValidation;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


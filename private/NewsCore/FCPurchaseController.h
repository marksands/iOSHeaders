//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCAppActivityObserving.h"
#import "FCUserInfoObserving.h"
#import "NSURLSessionDelegate.h"

@class FCCloudContext, FCKeyValueStore, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURLSession;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate, FCAppActivityObserving>
{
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_purchaseLookUpEntriesByTagID;
    NSMutableDictionary *_webAccessEntriesByTagID;
    NSMutableDictionary *_ongoingPurchaseEntriesByProductID;
    NSMutableDictionary *_paymentQueueByProductID;
    FCCloudContext *_cloudContext;
    NSURLSession *_session;
    FCKeyValueStore *_localStore;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(copy, nonatomic) NSDate *lastEntitlementCheckTime; // @synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime;
@property(copy) NSDictionary *readOnlyPurchaseLookUpEntriesByTagID; // @synthesize readOnlyPurchaseLookUpEntriesByTagID=_readOnlyPurchaseLookUpEntriesByTagID;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) NSMutableDictionary *paymentQueueByProductID; // @synthesize paymentQueueByProductID=_paymentQueueByProductID;
@property(retain, nonatomic) NSMutableDictionary *ongoingPurchaseEntriesByProductID; // @synthesize ongoingPurchaseEntriesByProductID=_ongoingPurchaseEntriesByProductID;
@property(retain, nonatomic) NSMutableDictionary *webAccessEntriesByTagID; // @synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID;
@property(retain, nonatomic) NSMutableDictionary *purchaseLookUpEntriesByTagID; // @synthesize purchaseLookUpEntriesByTagID=_purchaseLookUpEntriesByTagID;
@property(retain, nonatomic) NSSet *purchasesDiscoveredTagIDs; // @synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs;
- (void).cxx_destruct;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4;
- (void)handleWebAccessSuccessWithTagID:(id)arg1;
- (void)addToWebAccessEntryListWithEntry:(id)arg1;
- (id)webAccessEntryForTagID:(id)arg1;
- (id)_webAccessEntryIDForTagID:(id)arg1;
- (void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleAccessTokenVerificationFailureWithTagID:(id)arg1;
- (void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(_Bool)arg2 accessToken:(id)arg3;
- (void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
- (void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(_Bool)arg3;
- (void)activityObservingApplicationDidEnterBackground;
- (void)removeOngoingPurchaseEntryForProductID:(id)arg1;
- (void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
- (void)cleanupStaleOngoingPurchaseEntries;
- (void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2;
- (void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1;
- (void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(_Bool)arg2;
- (void)updatePurchaseEntryToExpired:(id)arg1;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)addToPurchasedChannelsListWithEntry:(id)arg1;
- (_Bool)atleastOneValidAppStorePurchase;
- (_Bool)isTagPurchased:(id)arg1;
- (_Bool)isTagIDPurchased:(id)arg1;
- (id)allAppStorePurchasedTagIDs;
- (id)_allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allTagIDs;
- (id)allAppStorePurchasedTagIDsByPurchaseID;
- (id)purchaseLookUpEntryForTagID:(id)arg1;
- (id)_purchaseLookUpEntryIDForTagID:(id)arg1;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1;
- (void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1;
- (void)feldsparEntitlementCheckWithCallbackQueue:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIntegrityOfPurchaseWithID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)webAccessOptedInTagIDs;
- (id)subscriptionNotSupportedChannelIDs;
- (id)expiredPurchaseChannelIDs;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (id)_ongoingPurchaseEntryIDForProductIdentifier:(id)arg1;
- (void)finishPurchaseTransactionWithProductID:(id)arg1;
- (void)simulatePurchaseWithTagID:(id)arg1 productIdentifier:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 webAccessOptIn:(_Bool)arg6;
- (void)startPurchaseWithTagID:(id)arg1 productIdentifier:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)createPaymentQueueWithProductIdentifier:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 webAccessOptIn:(_Bool)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6;
- (_Bool)isPurchaseOngoingForTagID:(id)arg1;
- (_Bool)isPurchaseTimeElapsedWithEntry:(id)arg1;
- (_Bool)isPaidSubscriberFromWeb;
- (_Bool)isPaidSubscriberFromAppStore;
- (_Bool)isPaidSubscriberFromNews;
- (_Bool)isPaidSubscriber;
- (void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4 expirationDate:(id)arg5;
- (void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(_Bool)arg4;
- (void)clearAllOngoingPurchaseEntries;
- (void)clearAllPurchases;
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;
- (void)setLastSignedInItunesAccountNameWithName:(id)arg1;
@property(readonly, nonatomic) NSString *lastSignedInItunesAccountName;
- (void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1;
- (id)lastSignedInItunesAccountDSID;
- (void)clearAllAppStorePurchases;
- (void)shouldShowiTunesSignedOutAlertWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFromWebAccessOptedInListWithTagID:(id)arg1;
- (void)addToWebAccessOptedInListWithTagID:(id)arg1;
- (void)notifyWebAccessOptedInListChanged;
- (void)notifyPurchaseListChanged;
- (void)notifyPurchaseRemovedWithTagIDs:(id)arg1;
- (void)notifyPurchaseAddedWithTagIDs:(id)arg1;
- (void)saveToDisk;
- (void)loadLocalCachesFromStore;
- (void)_applicationDidEnterBackground;
- (void)_initializeAppStorePurchaseDiscoveredList;
- (void)dealloc;
- (id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2;
- (id)initWithCloudContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


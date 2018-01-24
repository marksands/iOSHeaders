//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSBookDownloadQueue.h"

@class BLServiceProxy, NSArray, NSHashTable, NSMutableDictionary, NSNumber, NSString;

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue>
{
    struct os_unfair_lock_s _observersLock;
    struct os_unfair_lock_s _activeDownloadsLock;
    NSHashTable *_observers;
    BLServiceProxy *_serviceProxy;
    NSMutableDictionary *_activeDownloads;
    NSNumber *_currentAccountNumber;
}

+ (void)cancelAllActiveDownloads;
+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *currentAccountNumber; // @synthesize currentAccountNumber=_currentAccountNumber;
@property(retain, nonatomic) NSMutableDictionary *activeDownloads; // @synthesize activeDownloads=_activeDownloads;
@property(retain, nonatomic) BLServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)_purchaseResponseFromDictionary:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (void)_purchaseSucceeded:(id)arg1;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(_Bool)arg2;
- (void)_notifyFailed:(id)arg1;
- (void)_notifyComplete:(id)arg1;
- (void)_notifyProgress:(id)arg1;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 isPaused:(_Bool)arg4 targetObserver:(id)arg5;
- (id)_downloadStatusStoreID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 isPaused:(_Bool)arg4;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(_Bool *)arg2;
- (id)_dateFromObject:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (id)_stringFromObject:(id)arg1;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllActiveDownloadsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *downloads;
- (void)_cancelAllPausedDownloads;
- (void)_storeChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


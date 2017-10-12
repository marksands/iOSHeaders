//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAAsset, NSDictionary, NSObject<OS_dispatch_queue>;

@interface SFDeviceAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    MAAsset *_deviceAssetManagement;
    NSDictionary *_productTypesMappingTable;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)additionalMappedProducts;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (id)locallyCachedMappedProductTypeForProductType:(id)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)onqueue_downloadAsset:(id)arg1 queryLogString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 queryLogString:(id)arg2 fallback:(_Bool)arg3 retryAttempt:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(_Bool)arg2 fallback:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)queryLogStringForQuery:(id)arg1 installedOnly:(_Bool)arg2 fallback:(_Bool)arg3;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_invalidate;
- (void)invalidate;
- (void)onqueue_updateMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_activate;
- (void)activate;
- (id)init;

@end

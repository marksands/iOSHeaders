//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLanguageCodeUpdateMonitorDelegate.h"
#import "CSSpeechEndpointAssetMetaUpdateMonitorDelegate.h"
#import "CSVoiceTriggerAssetMetaUpdateMonitorDelegate.h"

@class CSPolicy, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    NSDictionary *_csAssetsDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    CSPolicy *_enablePolicy;
    NSString *_currentLanguageCode;
    NSMutableDictionary *_observers;
}

+ (id)sharedManager;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getEndpointAssetTypeString;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)predicateForAssetType:(unsigned long long)arg1 language:(id)arg2;
+ (id)predicateForfetchRemoteMetadataForAssetType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
@property(readonly, nonatomic) NSString *currentLanguageCode;
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (id)_defaultDownloadOptions;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (void)_fetchRemoteMetaData;
- (_Bool)_isReadyToUse;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_assetQueryForAssetType:(unsigned long long)arg1 withPredicate:(id)arg2 localOnly:(_Bool)arg3;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (id)installedAssetOfType:(unsigned long long)arg1 withPredicate:(id)arg2;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKSettingsCloudUtilities : NSObject
{
}

+ (id)_queue;
+ (id)_connection;
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_fetchSyncDictionary:(CDUnknownBlockType)arg1;
+ (id)_syncDictionaryForAppSettings:(id)arg1;
+ (id)_syncDictionaryForLocalStore;
+ (_Bool)synchronizeSettingsFromCloudIfNeeded;
+ (void)updateLocalStoreWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)cloudSyncEnabled;
+ (void)resetAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (void)issueDeleteAllRequestWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 removeEntry:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;

@end


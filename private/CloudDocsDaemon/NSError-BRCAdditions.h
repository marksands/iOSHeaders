//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (BRCAdditions)
+ (void)initialize;
+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
- (id)brc_description;
- (id)brc_wrappedError;
- (id)brc_strippedError;
- (id)brc_staleUpdateRecordIDs;
- (_Bool)brc_isCloudKitErrorNeedsPCSPrep;
- (_Bool)brc_isCloudKitErrorZoneMigrated;
- (_Bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (_Bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (_Bool)_brc_isCloudKitZoneUserDeletedError;
- (_Bool)_brc_isCloudKitZoneNotFoundError;
- (_Bool)brc_isOutOfSpaceError;
- (_Bool)brc_isBlacklistError;
- (_Bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (_Bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (_Bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (_Bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id *)arg1;
- (_Bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id *)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (_Bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (_Bool)brc_isCloudKitErrorRequiringAssetReupload;
- (_Bool)brc_isCloudKitErrorRequiringAssetRescan;
- (_Bool)brc_isCloudKitUnknownItemError;
- (_Bool)brc_isBatchRequestFailed;
- (_Bool)brc_isCloudKitOutOfQuota;
- (_Bool)brc_isCloudKitAssetFileModified;
- (_Bool)brc_isCloudKitCancellationError;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (_Bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (_Bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (_Bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (_Bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (_Bool)brc_checkErrorsFromCloudKit:(CDUnknownBlockType)arg1;
- (_Bool)brc_isEverRetriable;
- (_Bool)brc_isRetriable;
- (double)br_suggestedRetryTimeInterval;
- (unsigned long long)brc_containerResetErrorForSharedZone:(_Bool)arg1 resetReason:(const char **)arg2;
- (_Bool)brc_isResetError;
@end


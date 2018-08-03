//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountStore, NSObject<OS_dispatch_queue>, RMManagementState;

@interface WBUFeatureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACAccountStore *_accountStore;
    ACAccount *_account;
    RMManagementState *_managementState;
    _Bool _autoFillAvailable;
    _Bool _bookmarksAvailable;
    _Bool _readingListAvailable;
    _Bool _offlineReadingListAvailable;
    _Bool _cloudSyncAvailable;
    _Bool _inMemoryBookmarkChangeTrackingAvailable;
}

+ (id)webui_sharedFeatureManager;
+ (long long)accessLevel;
@property(readonly, nonatomic, getter=isInMemoryBookmarkChangeTrackingAvailable) _Bool inMemoryBookmarkChangeTrackingAvailable; // @synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable;
@property(readonly, nonatomic, getter=isCloudSyncAvailable) _Bool cloudSyncAvailable; // @synthesize cloudSyncAvailable=_cloudSyncAvailable;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) _Bool offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic, getter=isReadingListAvailable) _Bool readingListAvailable; // @synthesize readingListAvailable=_readingListAvailable;
@property(readonly, nonatomic, getter=isBookmarksAvailable) _Bool bookmarksAvailable; // @synthesize bookmarksAvailable=_bookmarksAvailable;
@property(readonly, nonatomic, getter=isAutoFillAvailable) _Bool autoFillAvailable; // @synthesize autoFillAvailable=_autoFillAvailable;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAirDropPasswordsAvailable) _Bool airDropPasswordsAvailable;
@property(readonly, nonatomic, getter=isUserRemotelyManagedAndLocallyRestricted) _Bool userRemotelyManagedAndLocallyRestricted;
@property(readonly, nonatomic, getter=isPrivateBrowsingAvailable) _Bool privateBrowsingAvailable;
@property(readonly, nonatomic, getter=isCloudTabsAvailable) _Bool cloudTabsAvailable;
@property(readonly, nonatomic, getter=isCloudHistorySyncAvailable) _Bool cloudHistorySyncAvailable;
@property(readonly, nonatomic, getter=isCloudKitBookmarksAvailable) _Bool cloudKitBookmarksAvailable;
@property(readonly, nonatomic, getter=isCreditCardStorageAvailable) _Bool creditCardStorageAvailable;
- (_Bool)_isUsingManagedAppleID;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_updateAppleAccount;
- (void)_setupAccountStore;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;

@end


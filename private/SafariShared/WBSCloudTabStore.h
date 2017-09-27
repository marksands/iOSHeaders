//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudTabDeviceProvider.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WBSCloudTabDevice;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    _Bool _hasAttemptedToRemoveCurrentDeviceFromKVS;
    _Bool _isFetchingDataFromCloudKit;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    _Bool _syncAgentIsAvailable;
    id <WBSCloudTabStoreDelegate> _wbsDelegate;
}

+ (id)_debugErrorMessageForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1;
@property(readonly, nonatomic) _Bool syncAgentIsAvailable; // @synthesize syncAgentIsAvailable=_syncAgentIsAvailable;
@property(nonatomic) __weak id <WBSCloudTabStoreDelegate> wbsDelegate; // @synthesize wbsDelegate=_wbsDelegate;
- (void).cxx_destruct;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (id)_currentDeviceUUID;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_deviceIsStoredInCloudKit:(id)arg1;
- (id)_devicesByRemovingThisDeviceAndDevicesWithNoTabs:(id)arg1;
- (void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2;
- (void)_syncAgentProxyConnectionWasInvalidated:(id)arg1;
- (id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1;
- (void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2;
- (void)_pruneOrphanedCloseRequestsFromKVS;
- (void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3 syncedCloudTabDevices:(id)arg4;
- (void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3 syncedCloudTabDevices:(id)arg4;
- (unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2;
- (void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2;
- (_Bool)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (_Bool)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(_Bool)arg3;
- (void)deleteAllDevicesFromCloudKit;
- (void)handleCloseTabRequestsFromCloudKit;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1;
- (void)pruneExpiredDevicesFromCloudKit;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property(readonly, nonatomic) _Bool currentDeviceIsRegisteredInCloudKit;
@property(readonly, nonatomic) _Bool atLeastOneOtherActiveDeviceIsRegisteredInCloudKit;
- (void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (void)handleCloseTabRequestsFromKVS;
- (_Bool)closeAllTabsOnDevice:(id)arg1;
- (_Bool)closeTabs:(id)arg1 onDevice:(id)arg2;
- (_Bool)closeTab:(id)arg1 onDevice:(id)arg2;
@property(readonly, nonatomic) _Bool atLeastOneOtherActiveDeviceIsRegistered;
- (void)pruneExpiredDevicesFromKVS;
- (void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
- (void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
@property(readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property(readonly, copy, nonatomic) NSDate *dateOfLastCloudTabDevicesUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


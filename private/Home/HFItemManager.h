//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFAccessoryObserver.h"
#import "HFCameraObserver.h"
#import "HFHomeManagerObserver.h"
#import "HFHomeObserver.h"
#import "HFItemUpdating.h"
#import "HFMediaObjectObserver.h"
#import "HFMediaSessionObserver.h"
#import "HFResidentDeviceObserver.h"
#import "HFSoftwareUpdateControllerObserver.h"
#import "HFSoftwareUpdateObserver.h"
#import "HFStateDumpBuildable.h"
#import "HFSymptomFixSessionObserver.h"
#import "HFSymptomsHandlerObserver.h"
#import "HFTemperatureUnitObserver.h"
#import "HFUserObserver.h"

@class HFItem, HFItemManagerBatchedDelegateAdapter, HMHome, NAFuture, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface HFItemManager : NSObject <HFStateDumpBuildable, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFResidentDeviceObserver, HFCameraObserver, HFMediaSessionObserver, HFMediaObjectObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFSymptomsHandlerObserver, HFUserObserver, HFSymptomFixSessionObserver, HFTemperatureUnitObserver, HFItemUpdating>
{
    _Bool _hasRequestedFirstUpdate;
    id <HFItemManagerDelegate> _delegate;
    HFItem *_sourceItem;
    HMHome *_home;
    NSArray *_itemProviders;
    NSArray *_itemModules;
    NSString *_identifier;
    id <HFCharacteristicReadPolicy> _readPolicy;
    unsigned long long _overallLoadingState;
    NAFuture *_firstFastUpdateFuture;
    NSSet *_subclassItemProviderSet;
    NSSet *_moduleItemProviderSet;
    HMHome *_lastUpdatedHome;
    NSArray *_sections;
    NSMapTable *_childItemsByParentItem;
    NSMutableDictionary *_suppressedCharacteristicUpdatesByReason;
    NSMutableSet *_disableUpdateReasons;
    HFItemManagerBatchedDelegateAdapter *_batchedDelegateAdapterAllowingReads;
    HFItemManagerBatchedDelegateAdapter *_batchedDelegateAdapterDisallowingReads;
    NAFuture *_firstFullUpdateFuture;
}

+ (_Bool)_canReloadDuringUnitTests;
@property(readonly, nonatomic) NAFuture *firstFullUpdateFuture; // @synthesize firstFullUpdateFuture=_firstFullUpdateFuture;
@property(retain, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterDisallowingReads; // @synthesize batchedDelegateAdapterDisallowingReads=_batchedDelegateAdapterDisallowingReads;
@property(retain, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterAllowingReads; // @synthesize batchedDelegateAdapterAllowingReads=_batchedDelegateAdapterAllowingReads;
@property(readonly, nonatomic) NSMutableSet *disableUpdateReasons; // @synthesize disableUpdateReasons=_disableUpdateReasons;
@property(nonatomic) _Bool hasRequestedFirstUpdate; // @synthesize hasRequestedFirstUpdate=_hasRequestedFirstUpdate;
@property(retain, nonatomic) NSMutableDictionary *suppressedCharacteristicUpdatesByReason; // @synthesize suppressedCharacteristicUpdatesByReason=_suppressedCharacteristicUpdatesByReason;
@property(retain, nonatomic) NSMapTable *childItemsByParentItem; // @synthesize childItemsByParentItem=_childItemsByParentItem;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HMHome *lastUpdatedHome; // @synthesize lastUpdatedHome=_lastUpdatedHome;
@property(retain, nonatomic) NSSet *moduleItemProviderSet; // @synthesize moduleItemProviderSet=_moduleItemProviderSet;
@property(retain, nonatomic) NSSet *subclassItemProviderSet; // @synthesize subclassItemProviderSet=_subclassItemProviderSet;
@property(readonly, nonatomic) NAFuture *firstFastUpdateFuture; // @synthesize firstFastUpdateFuture=_firstFastUpdateFuture;
@property(nonatomic) unsigned long long overallLoadingState; // @synthesize overallLoadingState=_overallLoadingState;
@property(retain, nonatomic) id <HFCharacteristicReadPolicy> readPolicy; // @synthesize readPolicy=_readPolicy;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *itemModules; // @synthesize itemModules=_itemModules;
@property(retain, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(nonatomic) __weak id <HFItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_debug_itemManagerDescription;
- (void)settingsInvalidatedForNotificationCenter:(id)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(_Bool)arg2;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (id)_allDisplayedItemsIncludingInternalItems;
@property(readonly, nonatomic) NSSet *allDisplayedItems;
- (id)_itemsToUpdateForMediaProfileContainer:(id)arg1;
- (id)_itemsToUpdateForMediaSystemChange:(id)arg1;
- (id)_invalidationReasonsForAddedOrRemovedMediaSystem:(id)arg1;
- (id)_invalidationReasonsForAddedOrRemovedAccessory:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdates:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdateControllers:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChange:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChanges:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingsChange:(id)arg1;
- (id)_itemsToUpdateForMediaObjectChange:(id)arg1;
- (id)_itemsToUpdateForMediaSessionChange:(id)arg1;
- (id)_itemsToUpdateForAllowAccessWhileLockedSettingChange;
- (id)_itemsToUpdateForRemoteAccessChange;
- (id)_itemsToUpdateForModifiedSharingDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedCameras:(id)arg1;
- (id)_itemsToUpdateForModifiedResidentDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1 includeSuppressedCharacteristics:(_Bool)arg2;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceTypes:(id)arg1;
- (id)_itemsToUpdateForModifiedServices:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessories:(id)arg1;
- (id)_itemsToUpdateForModifiedEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedTriggers:(id)arg1;
- (id)_itemsToUpdateForModifiedUsers:(id)arg1;
- (id)_itemsToUpdateForIncomingInvitation:(id)arg1;
- (id)_itemsToUpdateForOutgoingInvitation:(id)arg1;
- (id)_itemsToUpdateForModifiedRooms:(id)arg1;
- (id)_itemsToUpdateForModifiedZones:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedActions:(id)arg1;
- (id)_itemsToUpdateForModifiedActionSets:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1;
- (id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2;
- (id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2;
- (id)_itemsWithDependenciesPassingTest:(CDUnknownBlockType)arg1 forItems:(id)arg2;
- (unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(_Bool)arg2;
- (unsigned long long)_sectionForItem:(id)arg1;
- (id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2;
- (id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(_Bool)arg3;
- (_Bool)_isUsingOnlyItemModules;
- (id)_allSuppressedCharacteristics;
- (_Bool)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_notifyDelegateOfItemOperations:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfSectionOperations:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfChangesFromDiff:(id)arg1 logger:(id)arg2;
- (id)_legacy_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_updateRepresentationForExternalItemsWithUpdatedOrAddedItems:(id)arg1 logger:(id)arg2;
- (void)_updateRepresentationForInternalItemsWithUpdatedItems:(id)arg1;
- (id)_performUpdateForChildItemsOfItem:(id)arg1 withContext:(id)arg2 isInternal:(_Bool)arg3;
- (id)_performUpdateForItem:(id)arg1 withContext:(id)arg2 isInternal:(_Bool)arg3 isChild:(_Bool)arg4;
- (void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4;
- (id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 context:(id)arg3 allowDelaying:(_Bool)arg4;
- (id)_updateResultsForItems:(id)arg1 context:(id)arg2;
- (void)resetItemProvidersAndModules;
- (id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2;
- (void)_updateOverallLoadingStateAndNotifyDelegate;
- (unsigned long long)_loadingStateForItem:(id)arg1;
- (void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(_Bool)arg2;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(_Bool)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5 fastInitialUpdatePromise:(id)arg6;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(_Bool)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5;
- (id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3;
- (id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2;
- (id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg1;
- (id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1;
- (void)recalculateVisibilityAndSortAllItems;
- (void)sortDisplayedItemsInSection:(long long)arg1;
- (id)performItemUpdateRequest:(id)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (id)_homeFuture;
- (_Bool)_shouldPerformFastInitialUpdates;
- (id)_itemForSorting;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_footerTitleForSectionWithIdentifier:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (void)_willUpdateSections;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(_Bool)arg2;
- (void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2;
- (void)endDisableExternalUpdatesWithReason:(id)arg1;
- (void)disableExternalUpdatesWithReason:(id)arg1;
- (void)_updateExternalUpdatesEnabled:(_Bool)arg1 reloadItems:(_Bool)arg2;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 conformingToProtocol:(id)arg3;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2;
- (id)childItemsForItem:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)displayedItemAtIndexPath:(id)arg1;
- (id)displayedSectionIdentifierForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionIndexForDisplayedSectionIdentifier:(id)arg1;
- (id)displayedItemsInSectionWithIdentifier:(id)arg1;
- (id)displayedItemsInSection:(unsigned long long)arg1;
- (id)attributedFooterTitleForSection:(unsigned long long)arg1;
- (id)footerTitleForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)_allItemsIncludingInternalItems;
- (id)_internalItems;
@property(readonly, nonatomic) NSSet *allItems;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)_debug_itemDescriptions;
- (id)_debug_itemProviderDescriptions;
- (void)_debug_registerForStateDump;
- (void)mediaSystem:(id)arg1 didUpdateConfiguredName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaSession:(id)arg1 failedToUpdatePlaybackStateWithError:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 willUpdatePlaybackState:(long long)arg2;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 willExecuteActionSets:(id)arg2;
- (void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
- (void)session:(id)arg1 didChangeState:(long long)arg2;
- (void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentationAvailable:(_Bool)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2;
- (void)cameraStream:(id)arg1 didUpdateAudioStreamSettingWithError:(id)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;
- (void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2;
- (void)accessoryDidRemoveSymptomsHandler:(id)arg1;
- (void)accessory:(id)arg1 didAddSymptomsHandler:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfigurationStateForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateServiceSubtypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateDefaultNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateConfiguredNameForService:(id)arg2;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2;
- (void)accessory:(id)arg1 didUpdateSoftwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(_Bool)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (id)_cameraForCameraStream:(id)arg1;
- (id)_cameraForCameraControl:(id)arg1;
- (void)_removeDelegateNotifications;
- (void)_setupDelegateNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


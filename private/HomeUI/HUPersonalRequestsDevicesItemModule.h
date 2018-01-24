//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemModule.h"

#import "HULocationDeviceManagerObserver.h"

@class HFItem, HFItemProvider, HFUserItem, HMAssistantAccessControl, HMHome, HULocationDeviceManager, NAFuture, NSArray, NSSet, NSString;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver>
{
    NSSet *_itemProviders;
    HMHome *_home;
    HFUserItem *_sourceItem;
    HFItemProvider *_devicesItemProvider;
    HFItem *_footerItem;
    HFItem *_personalRequestsToggleItem;
    HULocationDeviceManager *_locationDeviceManager;
}

@property(readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(readonly, nonatomic) HFItem *personalRequestsToggleItem; // @synthesize personalRequestsToggleItem=_personalRequestsToggleItem;
@property(readonly, nonatomic) HFItem *footerItem; // @synthesize footerItem=_footerItem;
@property(readonly, nonatomic) HFItemProvider *devicesItemProvider; // @synthesize devicesItemProvider=_devicesItemProvider;
@property(readonly, nonatomic) HFUserItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (void).cxx_destruct;
- (void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2;
- (id)_commitUpdateToAccessControl:(id)arg1;
- (id)updateLocationDeviceToThisDevice;
@property(readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property(copy, nonatomic) NSArray *personalRequestsHomePods;
- (void)toggleAllPersonalRequestsDevices;
- (unsigned long long)personalRequestsAuthenticationRequirement;
@property(nonatomic, getter=isPersonalRequestsEnabled) _Bool personalRequestsEnabled;
- (_Bool)isItemPersonalRequestsFooter:(id)arg1;
- (_Bool)isItemPersonalRequestsDevice:(id)arg1;
- (_Bool)isItemPersonalRequestsToggle:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (_Bool)_showPersonalRequestsItems;
- (void)_createItemProviders;
@property(readonly, nonatomic) HMAssistantAccessControl *accessControl;
- (void)unregisterForExternalUpdates;
- (void)registerForExternalUpdates;
- (id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMAccessoryBrowserDelegate-Protocol.h>

@class HMAccessoryBrowser, NSArray, NSHashTable, NSMutableSet, NSString, SFDeviceDiscovery;

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate>
{
    HMAccessoryBrowser *_accessoryBrowser;
    SFDeviceDiscovery *_sharingDeviceBrowser;
    NSHashTable *_observers;
    NSMutableSet *_mutableDiscoveredSharingDevices;
}

@property(retain, nonatomic) NSMutableSet *mutableDiscoveredSharingDevices; // @synthesize mutableDiscoveredSharingDevices=_mutableDiscoveredSharingDevices;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SFDeviceDiscovery *sharingDeviceBrowser; // @synthesize sharingDeviceBrowser=_sharingDeviceBrowser;
@property(retain, nonatomic) HMAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
- (void).cxx_destruct;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)removeBrowsingObserver:(id)arg1;
- (void)addBrowsingObserver:(id)arg1;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
@property(readonly, nonatomic) NSArray *discoveredSharingDevices;
@property(readonly, nonatomic) NSArray *discoveredHMAccessories;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


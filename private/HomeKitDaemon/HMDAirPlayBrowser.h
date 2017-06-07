//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHomeManager, HMDUnassociatedAirPlayAccessory, HMFMessageDispatcher, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDAirPlayBrowserDelegate, OS_dispatch_queue;

@interface HMDAirPlayBrowser : HMFObject <HMFLogging>
{
    NSMutableSet *_accessoryAdvertisements;
    _Bool _discoverUnassociatedAccessories;
    _Bool _discoverAssociatedAccessories;
    id <HMDAirPlayBrowserDelegate> _delegate;
    HMDHomeManager *_homeManager;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)shouldEnableForcedWHABrowse;
@property(nonatomic) void *discoverySessionCallbackToken; // @synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken;
@property(readonly, nonatomic) void *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property __weak id <HMDAirPlayBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (void)_handleAvailableEndpoints:(struct __CFArray *)arg1;
- (void)handleAvailableEndpoints:(struct __CFArray *)arg1;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)startDiscoveringAssociatedAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_startDiscoveringAccessories;
- (void)notifyDelegateOfUpdatedEndpoint:(id)arg1;
- (void)notifyDelegateOfRemovedAdvertisement:(id)arg1;
- (void)removeAdvertisement:(id)arg1;
- (void)notifyDelegateOfAddedAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
@property(readonly, copy) NSArray *accessoryAdvertisements;
@property(readonly, copy) HMDUnassociatedAirPlayAccessory *currentAccessory;
- (id)currentAccessoryAdvertisement;
@property(readonly) HMFMessageDispatcher *messageDispatcher;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import "HMDObjectLookupScanProtocol.h"

@class HMDHome, NSString;

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHome *_home;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_scanResidentDevices;
- (void)_scanTriggers;
- (void)_scanServiceGroups;
- (void)_scanActionSets;
- (void)_scanZones;
- (void)_scanRooms;
- (void)_scanSettingGroup:(id)arg1;
- (void)_scanAccessoriesAndServices;
- (void)scanObjects;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


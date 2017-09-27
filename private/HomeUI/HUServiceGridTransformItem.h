//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFHomeKitTransformItem.h"

#import "HFCharacteristicWriteActionBuilderFactory.h"
#import "HFServiceVendor.h"

@class HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFCharacteristicWriteActionBuilderFactory>, NSString;

@interface HUServiceGridTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFCharacteristicWriteActionBuilderFactory>
{
}

- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActionableCharacteristics;
- (id)accessories;
- (id)services;
@property(readonly, nonatomic) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFCharacteristicWriteActionBuilderFactory> *sourceServicePickerItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


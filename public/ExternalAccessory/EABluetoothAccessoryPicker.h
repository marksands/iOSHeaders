//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTDevicePickerDelegate.h"

@class BTDevicePicker, NSString;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate>
{
    BTDevicePicker *_picker;
    id <EABluetoothAccessoryPickerDelegate> _delegate;
}

+ (void)wakeSelectedBluetoothAccessories:(id)arg1;
@property(nonatomic) id <EABluetoothAccessoryPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3;
- (void)dismissPicker;
- (void)show;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


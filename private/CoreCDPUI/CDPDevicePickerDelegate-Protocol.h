//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CDPDevice, CDPDevicePickerViewController, NSArray;

@protocol CDPDevicePickerDelegate
- (NSArray *)devicePicker:(CDPDevicePickerViewController *)arg1 escapeOffersForDevices:(NSArray *)arg2;
- (void)devicePicker:(CDPDevicePickerViewController *)arg1 didSelectDevice:(CDPDevice *)arg2;
@end


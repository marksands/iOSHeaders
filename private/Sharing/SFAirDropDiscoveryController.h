//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFWirelessSettingsControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, SFWirelessSettingsController, UIAlertController;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate, SFWirelessSettingsControllerDelegate>
{
    id _delegate;
    _Bool _isVisible;
    _Bool _isLegacyDevice;
    _Bool _isLegacyModeEnabled;
    _Bool _isLegacyModeSettable;
    struct __SFOperation *_controller;
    id _alertControllerDelegate;
    UIAlertController *_alertController;
    SFWirelessSettingsController *_settingsController;
    long long _discoverableMode;
}

@property __weak id <SFAirDropDiscoveryAlertControllerDelegate> alertControllerDelegate; // @synthesize alertControllerDelegate=_alertControllerDelegate;
@property __weak id <SFAirDropDiscoveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)discoverableModeToString:(long long)arg1;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
@property long long discoverableMode;
- (id)discoverableModeAlertController;
- (void)updateAlertControllerTitle;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)invalidate;
- (void)dealloc;
@property(readonly, getter=isLegacyModeSettable) _Bool legacyModeSettable;
@property(getter=isLegacyModeEnabled) _Bool legacyModeEnabled;
@property(readonly, getter=isLegacyDevice) _Bool legacyDevice;
@property(readonly, getter=isVisible) _Bool visible;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


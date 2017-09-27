//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BarcodeSupport/BCSActionPickerItem.h>

#import "DDDetectionControllerInteractionDelegate.h"

@class CNContact, DDAction, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate>
{
    DDAction *_ddAction;
}

- (void).cxx_destruct;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (void)performAction;
@property(readonly, nonatomic) CNContact *contact;
- (id)actionURL;
- (id)targetApplicationBundleIdentifier;
- (id)label;
- (_Bool)isCopyActionItem;
- (_Bool)shouldDismissAlertWhenActionIsTaken;
- (id)initWithAction:(id)arg1 ddAction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsUI/DDAddressAction.h>

@class DDRemoteActionViewController;

@interface DDAddToAddressBookAction : DDAddressAction
{
}

+ (_Bool)actionAvailableForContact:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)contact;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (void)prepareViewControllerForActionController:(id)arg1;
- (int)interactionType;
- (id)localizedName;
- (void)invalidate;

// Remaining properties
@property(retain, nonatomic) DDRemoteActionViewController *viewController; // @dynamic viewController;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCardViewController, NSArray, NSMutableArray, NSString;

@protocol CNAvatarCardViewControllerDelegate <NSObject>

@optional
- (void)cardViewControllerDidUpdatePreferredSize:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerDidDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerWillDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewController:(CNAvatarCardViewController *)arg1 willShowActions:(NSMutableArray *)arg2;
- (NSArray *)cardViewController:(CNAvatarCardViewController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
@end

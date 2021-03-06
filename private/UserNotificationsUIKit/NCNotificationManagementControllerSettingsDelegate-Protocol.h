//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationManagementControllerSettingsDelegate <NSObject>
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4 subSectionIdentifier:(NSString *)arg5;
- (void)notificationManagementController:(id <NCNotificationManagementController>)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (NCNotificationSectionSettings *)notificationManagementController:(id <NCNotificationManagementController>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;

@optional
- (void)notificationManagementControllerDidDismissManagementView:(id <NCNotificationManagementController>)arg1;
@end


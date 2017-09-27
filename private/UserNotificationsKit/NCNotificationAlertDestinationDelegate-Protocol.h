//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCNotificationDestinationDelegate.h"

@class NCNotificationRequest;

@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(_Bool (^)(NCNotificationRequest *))arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id <NCNotificationDestination>)arg1;

@optional
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2 suppressAlerts:(_Bool)arg3;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationListCoalescingControlsView, UIView;

@protocol NCNotificationListCoalescingControlsViewDelegate <NSObject>

@optional
- (void)notificationListCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 didTransitionToClearState:(_Bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsRestack:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(NCNotificationListCoalescingControlsView *)arg1;
- (UIView *)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(NCNotificationListCoalescingControlsView *)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(NCNotificationListCoalescingControlsView *)arg1;
@end


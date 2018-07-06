//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationListSectionHeaderView, NSString, UIView, _UILegibilitySettings;

@protocol NCNotificationListSectionHeaderViewDelegate <NSObject>
- (_UILegibilitySettings *)legibilitySettingsForSectionHeaderView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidDismissForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(NCNotificationListSectionHeaderView *)arg1;
- (UIView *)containerViewForHeaderViewPreviewInteractionPresentedContent:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(NCNotificationListSectionHeaderView *)arg1;
- (void)sectionHeaderView:(NCNotificationListSectionHeaderView *)arg1 didReceiveClearActionForSectionIdentifier:(NSString *)arg2;
- (void)sectionHeaderViewDidTransitionToClearState:(NCNotificationListSectionHeaderView *)arg1;
@end


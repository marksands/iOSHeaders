//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUQuickControlContainerView, NSString, UIView<HUQuickControlPresentableView>;

@protocol HUQuickControlContainerViewDelegate <NSObject>
- (void)detailsButtonPressedInContainerView:(HUQuickControlContainerView *)arg1;
- (void)containerView:(HUQuickControlContainerView *)arg1 didSelectControlType:(unsigned long long)arg2;
- (UIView<HUQuickControlPresentableView> *)containerView:(HUQuickControlContainerView *)arg1 createControlViewForControlType:(unsigned long long)arg2;
- (NSString *)containerView:(HUQuickControlContainerView *)arg1 titleForControlType:(unsigned long long)arg2;
- (_Bool)containerView:(HUQuickControlContainerView *)arg1 hasControlOfType:(unsigned long long)arg2;
@end


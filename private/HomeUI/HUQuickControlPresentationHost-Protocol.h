//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUItemManagerContainer.h"

@class HUQuickControlPresentationCoordinator, UIViewController<HUQuickControlPresentationHost>;

@protocol HUQuickControlPresentationHost <HUItemManagerContainer>
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 didEndQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 willBeginQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
@end


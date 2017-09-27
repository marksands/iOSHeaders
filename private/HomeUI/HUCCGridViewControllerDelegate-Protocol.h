//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HUCCGridViewController, NAFuture;

@protocol HUCCGridViewControllerDelegate <NSObject>
- (_Bool)gridViewControllerShouldUsePunchOutBackgrounds:(HUCCGridViewController *)arg1;
- (NAFuture *)prepareForActionRequiringDeviceUnlockForGridViewController:(HUCCGridViewController *)arg1;
- (_Bool)isDeviceUnlockedForGridViewController:(HUCCGridViewController *)arg1;

@optional
- (void)gridViewControllerDidEndApplyingDynamicBackgrounds:(HUCCGridViewController *)arg1;
- (void)gridViewControllerWillBeginApplyingDynamicBackgrounds:(HUCCGridViewController *)arg1;
@end


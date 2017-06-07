//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUControllableCollectionViewLayoutOverrideAttributes, HUQuickControlPresentationContext, HUQuickControlPresentationCoordinator, UITraitCollection, UIViewController;
@protocol HUDetailsPresentationDelegateHost;

@protocol HUQuickControlPresentationCoordinatorDelegate <NSObject>
- (_Bool)hasDetailsActionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 clearOverrideAttributesForItem:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 applyOverrideAttributes:(HUControllableCollectionViewLayoutOverrideAttributes *)arg2 toItem:(HFItem *)arg3;
- (HUQuickControlPresentationContext *)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 contextForPresentationAtPoint:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (UITraitCollection *)traitCollectionForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1;

@optional
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willEndPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 willBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (_Bool)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 shouldBeginPresentationWithContext:(HUQuickControlPresentationContext *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 didRecognizeTapForItem:(HFItem *)arg2;
- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 item:(HFItem *)arg2;
- (void)presentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 pressedStateDidChange:(_Bool)arg2 forItem:(HFItem *)arg3;
@end


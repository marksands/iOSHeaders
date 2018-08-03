//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCoder, NSString, UIBarButtonItem, UIDimmingView, UIFocusAnimationCoordinator, UIFocusUpdateContext, UIPopoverController, UIPresentationController, UIResponder, UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, UITraitCollection, UIView, UIViewController;

@protocol UISplitViewControllerImpl <NSObject>
@property(nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property(nonatomic) _Bool usesDeviceOverlayPreferences;
@property(nonatomic) _Bool prefersOverlayInRegularWidthPhone;
@property(nonatomic) _Bool hidesMasterViewInPortrait;
@property(nonatomic) float gutterWidth;
@property(nonatomic) float masterColumnWidth;
@property(nonatomic) long long primaryEdge;
@property(nonatomic) double maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction;
@property(nonatomic) long long preferredDisplayMode;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(nonatomic) _Bool presentsWithGesture;
@property(nonatomic) __weak id <UISplitViewControllerDelegate> delegate;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(UISplitViewControllerDisplayModeBarButtonItem *)arg1;
- (NSArray *)_additionalViewControllersToCheckForUserActivity;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg1;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg1;
- (NSArray *)_allContainedViewControllers;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (UIResponder *)_primaryContentResponder;
- (void)_didChangeToFirstResponder:(UIResponder *)arg1;
- (_Bool)_handlesCounterRotationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (NSArray *)_childViewControllersToSendViewWillTransitionToSize;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (double)_contentMarginForChildViewController:(UIViewController *)arg1;
- (void)_updateChildContentMargins;
- (void)_marginInfoForChild:(UIViewController *)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(UIViewController *)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
- (_Bool)_shouldPersistViewWhenCoding;
- (struct CGRect)_frameForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)_didEndSnapshotSession;
- (void)_willBeginSnapshotSession;
- (void)purgeMemoryForReason:(int)arg1;
- (void)unloadViewForced:(_Bool)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (NSArray *)preferredFocusEnvironments;
- (UIView *)preferredFocusedView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize)sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)toggleMasterVisible:(id)arg1;
- (_Bool)_layoutPrimaryOnRight;
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (void)_willShowCollapsedDetailViewController:(UIViewController *)arg1 inTargetController:(UIViewController *)arg2;
- (void)_descendantWillPresentViewController:(UIViewController *)arg1 modalSourceViewController:(UIViewController *)arg2 presentationController:(UIPresentationController *)arg3 animated:(_Bool)arg4;
- (void)_popoverController:(UIPopoverController *)arg1 didChangeFromVisible:(_Bool)arg2;
- (void)_popoverController:(UIPopoverController *)arg1 willChangeToVisible:(_Bool)arg2;
- (struct CGSize)_contentSizeForChildViewController:(UIViewController *)arg1 inPopoverController:(UIPopoverController *)arg2;
- (_Bool)_isRotating;
- (UIViewController *)detailViewController;
- (UIViewController *)masterViewController;
- (_Bool)_isCollapsed;
- (UIDimmingView *)_primaryDimmingView;
- (void)showDetailViewController:(UIViewController *)arg1 sender:(id)arg2;
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;
- (double)primaryColumnWidth;
- (UIBarButtonItem *)displayModeButtonItem;
- (long long)displayMode;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (void)_initWithCoder:(NSCoder *)arg1;
- (void)_commonInit;
- (id)initWithSplitViewController:(UISplitViewController *)arg1;

@optional
- (void)removeChildViewController:(UIViewController *)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
@end


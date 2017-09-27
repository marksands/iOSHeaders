//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UISearchPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchATVPresentationController : _UISearchPresentationController
{
    UIVisualEffectView *_blurView;
}

@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (void)containerViewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)edgeForHidingNavigationBar;
- (_Bool)forceObeyNavigationBarInsets;
- (_Bool)animatorShouldLayoutPresentationViews;
- (void)setContentVisible:(_Bool)arg1;
- (struct CGRect)finalFrameForContainerView;
- (id)adaptivePresentationController;
- (double)resultsControllerContentOffset;
- (_Bool)searchBarToBecomeTopAttached;
- (double)statusBarAdjustment;
- (_Bool)searchBarShouldClipToBounds;
- (_Bool)searchBarCanContainScopeBar;
- (_Bool)resultsUnderlapsSearchBar;
- (_Bool)shouldAccountForStatusBar;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_d58201db)arg1;
- (long long)adaptivePresentationStyle;
- (void)hideBackgroundObscuringView;
- (void)showBackgroundObscuringView;
- (id)backgroundObscuringView;

@end


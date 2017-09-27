//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, PUAbstractNavigationBanner, UIViewController, _UINavigationControllerPalette;

@interface PUNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _pu_preventsAutorotation;
    CDUnknownBlockType _ppt_onDidShowViewControllerBlock;
    PUAbstractNavigationBanner *__banner;
    _UINavigationControllerPalette *__palette;
    unsigned long long _pu_supportedInterfaceOrientations;
    long long __barStyle;
    UIViewController *__currentToolbarViewController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic, setter=_setCurrentToolbarViewController:) __weak UIViewController *_currentToolbarViewController; // @synthesize _currentToolbarViewController=__currentToolbarViewController;
@property(nonatomic, setter=_setBarStyle:) long long _barStyle; // @synthesize _barStyle=__barStyle;
@property(nonatomic) _Bool pu_preventsAutorotation; // @synthesize pu_preventsAutorotation=_pu_preventsAutorotation;
@property(nonatomic) unsigned long long pu_supportedInterfaceOrientations; // @synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations;
@property(retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // @synthesize _palette=__palette;
@property(retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // @synthesize _banner=__banner;
@property(copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) CDUnknownBlockType ppt_onDidShowViewControllerBlock; // @synthesize ppt_onDidShowViewControllerBlock=_ppt_onDidShowViewControllerBlock;
- (void).cxx_destruct;
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_extendedToolbar;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg2;
- (void)_updateBarStyle;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_setPreventsAutorotation:(_Bool)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)_commonPUNavigationControllerInitialization;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


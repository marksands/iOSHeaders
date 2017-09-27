//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, UIColor, UIImageView, UIView, UIVisualEffectView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    UIColor *_barBackgroundColor;
    long long _shadowStyle;
    _Bool _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
}

- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)setupWallpaper;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)_updateBarTintColorForViewController:(id)arg1;
- (void)_applyShadowStyleForViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBarBackgroundColor:(id)arg1 barShadowStyle:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


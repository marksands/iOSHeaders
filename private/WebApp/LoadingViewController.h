//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController
{
    _Bool _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    long long _orientation;
    UIView *_statusBarView;
    long long _preferredStatusBarStyle;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithWebClip:(id)arg1 orientation:(long long)arg2;
- (long long)preferredStatusBarStyle;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class CNFRegSplashSignInController, PSSpecifier, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView>
{
    long long _serviceType;
    PSSpecifier *_specifier;
    UIButton *_learnMoreButton;
    UIImageView *_splashImageView;
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UIView *_authKitSignInView;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    CNFRegSplashSignInController *_controller;
}

@property(nonatomic) CNFRegSplashSignInController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)signingInSpinner;
- (id)signingInLabel;
- (id)verbiageLabel;
- (id)titleLabel;
- (id)splashImageView;
- (id)learnMoreButton;
- (id)_splashImage;
- (void)setSigningIn:(_Bool)arg1;
- (void)setAuthKitSignInView:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end


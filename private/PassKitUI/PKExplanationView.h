//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, OBPrivacyLinkController, PKPaymentSetupDockView, UIActivityIndicatorView, UIFont, UIImage, UIImageView, UILabel, UIScrollView, _UIBackdropView;

@interface PKExplanationView : UIView <UIScrollViewDelegate>
{
    long long _context;
    _Bool _privacyFooterShouldPin;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    PKPaymentSetupDockView *_dockView;
    NSString *_titleText;
    UILabel *_titleLabel;
    UILabel *_bodyTextLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_checkmarkView;
    _UIBackdropView *_backdropView;
    long long _backdropStyle;
    double _backdropWeight;
    _Bool _updatingBackdropSettings;
    _Bool _showPrivacyView;
    double _topMargin;
    _Bool _forceShowSetupLaterButton;
    _Bool _hideTitleText;
    _Bool _bodyTextIsLeftAlgined;
    id <PKExplanationViewDelegate> _delegate;
    UIImage *_image;
    UIView *_heroView;
    UIFont *_titleFont;
    NSString *_bodyText;
    OBPrivacyLinkController *_privacyLink;
    UIImageView *_logoImageView;
}

@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) PKPaymentSetupDockView *dockView; // @synthesize dockView=_dockView;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) _Bool bodyTextIsLeftAlgined; // @synthesize bodyTextIsLeftAlgined=_bodyTextIsLeftAlgined;
@property(nonatomic) _Bool hideTitleText; // @synthesize hideTitleText=_hideTitleText;
@property(nonatomic) _Bool forceShowSetupLaterButton; // @synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton;
@property(nonatomic) _Bool showPrivacyView; // @synthesize showPrivacyView=_showPrivacyView;
@property(nonatomic) __weak id <PKExplanationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (_Bool)_isBuddyiPad;
- (_Bool)_showApplePayLogo;
- (void)_updateTitleLabel;
- (void)_createSubviews;
- (void)_calculateBlur;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_setupLater;
- (void)_continue;
@property(readonly, nonatomic) UIImageView *imageView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithContext:(long long)arg1 delegate:(id)arg2;
- (id)initWithContext:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SFAutomaticPasswordScrollViewContentViewLayoutObserver.h"
#import "UIScrollViewDelegate.h"
#import "_UIScrollViewLayoutObserver.h"

@class NSArray, NSLayoutConstraint, NSString, SFAutomaticPasswordScrollViewContentView, UIButton, UIImageView, UILabel, UILayoutGuide, UIScrollView;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver, SFAutomaticPasswordScrollViewContentViewLayoutObserver, UIScrollViewDelegate>
{
    _Bool _isPad;
    long long _keyboardType;
    UIScrollView *_scrollView;
    SFAutomaticPasswordScrollViewContentView *_scrollableContentView;
    UIImageView *_shadowImageView;
    NSLayoutConstraint *_strongPasswordButtonWidthConstraint;
    NSLayoutConstraint *_strongPasswordButtonHeightConstraint;
    NSLayoutConstraint *_useCustomPasswordButtonWidthConstraint;
    NSLayoutConstraint *_useCustomPasswordBaselineToBottomConstraint;
    NSArray *_wideShadowImageViewConstraints;
    NSArray *_narrowShadowImageViewConstraints;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_contentLayoutGuideBottomConstraint;
    UILayoutGuide *_scrollableContentCenterLayoutGuide;
    _Bool _requiresWideAppearance;
    double _wideContentMaximumPadding;
    NSLayoutConstraint *_wideContentLeadingConstraint;
    NSLayoutConstraint *_wideContentTrailingConstraint;
    NSLayoutConstraint *_narrowContentLeadingConstraint;
    NSLayoutConstraint *_narrowContentTrailingConstraint;
    _Bool _scrollViewNeedsShadowCachedValue;
    UILabel *_explanationLabel;
    UILabel *_passwordRetrievalExpalantionLabel;
    UIButton *_useStrongPasswordButton;
    UIButton *_useCustomPasswordButton;
    long long _keyboardAppearance;
}

@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(readonly, nonatomic) UIButton *useCustomPasswordButton; // @synthesize useCustomPasswordButton=_useCustomPasswordButton;
@property(readonly, nonatomic) UIButton *useStrongPasswordButton; // @synthesize useStrongPasswordButton=_useStrongPasswordButton;
@property(readonly, nonatomic) UILabel *passwordRetrievalExpalantionLabel; // @synthesize passwordRetrievalExpalantionLabel=_passwordRetrievalExpalantionLabel;
@property(readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)automaticPasswordScrollContentViewDidLayout:(id)arg1;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)_updateShadowViewAlpha;
- (_Bool)_scrollViewNeedsShadow:(_Bool)arg1;
- (void)updateConstraints;
- (void)_updateContentLayoutGuideBottomConstraint;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateMaximumPadding;
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;
- (void)_updateStrongPasswordHeightConstraint;
- (void)_updateWideAppearanceRequirement;
- (void)_createLayoutConstraints;
- (void)_updateTextAndButtonColor;
- (void)_createSubviews;
- (id)initWithKeyboardType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


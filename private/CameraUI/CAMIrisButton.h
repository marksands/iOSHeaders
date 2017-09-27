//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "CAMAccessibilityHUDImageProvider.h"

@class NSArray, NSString, UIImageView;

@interface CAMIrisButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _layoutStyle;
    long long _irisMode;
    UIImageView *__padBackgroundView;
    NSArray *__enablingAnimationImages;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (double)enablingAnimationDuration;
+ (id)irisButtonWithLayoutStyle:(long long)arg1;
@property(copy, nonatomic, setter=_setEnablingAnimationImages:) NSArray *_enablingAnimationImages; // @synthesize _enablingAnimationImages=__enablingAnimationImages;
@property(readonly, nonatomic) UIImageView *_padBackgroundView; // @synthesize _padBackgroundView=__padBackgroundView;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (void)_updateForLayoutStyle;
- (void)interruptEnablingAnimation;
- (void)performEnablingAnimation;
- (void)_ensureEnablingAnimationImages;
- (id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1;
- (_Bool)_shouldLoadEnablingAnimationImages;
- (void)preloadEnablingAnimation;
- (id)_baseImageForMode:(long long)arg1;
- (void)_updateBaseImage;
- (void)_updateTintColorForMode:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMIrisButtonConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


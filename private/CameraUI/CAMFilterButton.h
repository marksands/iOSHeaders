//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "CAMAccessibilityHUDImageProvider.h"

@class NSString;

@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    long long _layoutStyle;
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

+ (id)filterButtonWithLayoutStyle:(long long)arg1;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id)imageForAccessibilityHUD;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)_filterOnImage;
- (id)_filterImage;
@property(nonatomic, getter=isOn) _Bool on;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


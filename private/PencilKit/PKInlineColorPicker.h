//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKColorPickerDelegatePrivate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, PKColorPicker, UIColor, UIScrollView;

@interface PKInlineColorPicker : UIView <UIScrollViewDelegate, PKColorPickerDelegatePrivate>
{
    _Bool _isUsedOnDarkBackground;
    _Bool _shouldEmboss;
    unsigned long long _sizeState;
    unsigned long long _selectionState;
    id <PKInlineColorPickerDelegate> _delegate;
    unsigned long long _colorSet;
    NSArray *_colors;
    unsigned long long _selectedColorIndex;
    double _selectedColorAlpha;
    NSArray *_buttonItems;
    UIScrollView *_scrollView;
    UIView *_leftOverflowView;
    UIView *_rightOverflowView;
    PKColorPicker *_presentedColorPicker;
    UIColor *__pickerColor;
}

@property(retain, nonatomic) UIColor *_pickerColor; // @synthesize _pickerColor=__pickerColor;
@property(retain, nonatomic) PKColorPicker *presentedColorPicker; // @synthesize presentedColorPicker=_presentedColorPicker;
@property(nonatomic) _Bool shouldEmboss; // @synthesize shouldEmboss=_shouldEmboss;
@property(retain, nonatomic) UIView *rightOverflowView; // @synthesize rightOverflowView=_rightOverflowView;
@property(retain, nonatomic) UIView *leftOverflowView; // @synthesize leftOverflowView=_leftOverflowView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *buttonItems; // @synthesize buttonItems=_buttonItems;
@property(nonatomic) double selectedColorAlpha; // @synthesize selectedColorAlpha=_selectedColorAlpha;
@property(nonatomic) unsigned long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) unsigned long long colorSet; // @synthesize colorSet=_colorSet;
@property(nonatomic) __weak id <PKInlineColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
- (void).cxx_destruct;
- (id)_axLabelForColorButton:(id)arg1;
- (void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1;
- (void)_colorPicker:(id)arg1 willDismissAnimated:(_Bool)arg2;
- (void)_colorPickerUserDidTouchUpInside:(id)arg1;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)defaultColorIndex;
- (id)_representableColorForColor:(id)arg1;
- (id)colorsForColorSet:(unsigned long long)arg1;
- (void)showOverflowViewsIfNeeded;
- (unsigned long long)colorIndexMatchingColor:(id)arg1;
- (id)createColorPickerButtonShouldEmboss:(_Bool)arg1;
- (id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(_Bool)arg2;
- (void)colorUnpressed:(id)arg1;
- (void)colorPressed:(id)arg1;
- (void)colorTappedInCompactChooseToolState:(id)arg1;
- (void)colorTappedInChooseColorState:(id)arg1;
- (void)_setSelectedColorIndexAndNotifyDelegate:(unsigned long long)arg1 colorChanged:(_Bool)arg2;
- (void)_toggleColorPickerPopoverPresentation:(_Bool)arg1;
- (void)_dismissColorPickerPopover:(_Bool)arg1;
- (void)_presentColorPickerPopover:(_Bool)arg1;
- (void)_colorPickerWillDismiss:(id)arg1;
- (void)_showColorPickerFromButton:(id)arg1 animated:(_Bool)arg2;
- (id)_effectiveViewControllerForPopoverPresentation;
- (void)_forceSetColorSet:(unsigned long long)arg1;
@property(retain, nonatomic) UIColor *selectedColor;
- (id)colorForIndex:(long long)arg1;
- (long long)colorPickerButtonIndex;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_commonInit;
- (id)initWithEmbossing:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


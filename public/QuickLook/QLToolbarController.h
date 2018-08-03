//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutConstraint, UIColor, UIToolbar, UIView, _UIToolbarConfiguration;

__attribute__((visibility("hidden")))
@interface QLToolbarController : NSObject
{
    NSLayoutConstraint *_clippingExtensionContainerHeightConstraint;
    NSLayoutConstraint *_clippingExtensionContainerBottomConstraint;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSLayoutConstraint *_accessoryContainerHeightConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    UIView *_clippingExtensionContainer;
    UIView *_accessoryViewContainer;
    _UIToolbarConfiguration *_originalToolbarConfiguration;
    _UIToolbarConfiguration *_customToolbarConfiguration;
    double _derivedToolbarExtensionHeight;
    _Bool _accessoryViewHidden;
    _Bool _originalToolbarHidden;
    _Bool _hidden;
    double _accessoryViewHiddenProgress;
    UIToolbar *_originalToolbar;
    UIToolbar *_customToolbar;
    UIView *_accessoryView;
    double _preferredAccesoryViewHeight;
    double _toolbarAlpha;
    double _originalToolbarAlpha;
    double _accessoryViewAlpha;
    double _hiddenProgress;
    UIColor *_barTintColor;
    UIView *_preferredSuperview;
    UIView *_preferredParentViewForSafeAreaInset;
}

@property(readonly, nonatomic) __weak UIView *preferredParentViewForSafeAreaInset; // @synthesize preferredParentViewForSafeAreaInset=_preferredParentViewForSafeAreaInset;
@property(readonly, nonatomic) __weak UIView *preferredSuperview; // @synthesize preferredSuperview=_preferredSuperview;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic) double hiddenProgress; // @synthesize hiddenProgress=_hiddenProgress;
@property(nonatomic) double accessoryViewAlpha; // @synthesize accessoryViewAlpha=_accessoryViewAlpha;
@property(nonatomic) double originalToolbarAlpha; // @synthesize originalToolbarAlpha=_originalToolbarAlpha;
@property(nonatomic) double toolbarAlpha; // @synthesize toolbarAlpha=_toolbarAlpha;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isOriginalToolbarHidden) _Bool originalToolbarHidden; // @synthesize originalToolbarHidden=_originalToolbarHidden;
@property(nonatomic) double preferredAccesoryViewHeight; // @synthesize preferredAccesoryViewHeight=_preferredAccesoryViewHeight;
@property(nonatomic) __weak UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly) UIToolbar *customToolbar; // @synthesize customToolbar=_customToolbar;
@property(nonatomic) __weak UIToolbar *originalToolbar; // @synthesize originalToolbar=_originalToolbar;
- (void).cxx_destruct;
- (void)setAccessoryView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) double accessoryViewHiddenProgress; // @synthesize accessoryViewHiddenProgress=_accessoryViewHiddenProgress;
@property(nonatomic, getter=isAccessoryViewHidden) _Bool accessoryViewHidden; // @synthesize accessoryViewHidden=_accessoryViewHidden;
- (void)setPreferredSuperview:(id)arg1 preferredParentViewForSafeAreaInset:(id)arg2;
- (void)updateLayout;
- (void)restoreOriginalConfiguration;
- (void)restoreOriginalToolbar;
- (void)_embedAccessoryView;
- (double)_toolbarExtensionHeight;
- (double)_totalHeight;
- (void)_layoutAccessoryView:(id)arg1;
- (double)_originalToolbarHeightIncludingSafeAreaBottomInset:(_Bool)arg1;
- (double)_computeClippingExtensionContainerHeightForCurrentHiddenProgress;
- (double)_computeClippingExtensionContainerBottomConstraint;
- (double)_toolbarSafeAreaInsetBottom;
- (_Bool)_tryToSetUp:(_Bool)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CCUIControlCenterButton, NSArray, UILabel;

@interface HUControlCenterContainerView : UIView
{
    long long _layoutStyle;
    UIView *_contentView;
    CCUIControlCenterButton *_pageSwitchButton;
    UILabel *_titleLabel;
    CCUIControlCenterButton *_homeButton;
    NSArray *_contentViewConstraints;
    NSArray *_chromeConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *chromeConstraints; // @synthesize chromeConstraints=_chromeConstraints;
@property(retain, nonatomic) NSArray *contentViewConstraints; // @synthesize contentViewConstraints=_contentViewConstraints;
@property(readonly, nonatomic) CCUIControlCenterButton *homeButton; // @synthesize homeButton=_homeButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) CCUIControlCenterButton *pageSwitchButton; // @synthesize pageSwitchButton=_pageSwitchButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_invalidateAllConstraints;
- (struct UIEdgeInsets)_contentLayoutMargins;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UILabel, _UIBackdropView, _UIBackdropViewSettings;

@interface AVTUserInfoView : UIView
{
    _UIBackdropViewSettings *_backdropSettings;
    _UIBackdropView *_userInfoBackdropView;
    UILabel *_userInfoLabel;
    NSArray *_activeConstraints;
    struct NSDirectionalEdgeInsets _textInsets;
}

+ (double)textVerticalPadding;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) UILabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) _UIBackdropView *userInfoBackdropView; // @synthesize userInfoBackdropView=_userInfoBackdropView;
@property(retain, nonatomic) _UIBackdropViewSettings *backdropSettings; // @synthesize backdropSettings=_backdropSettings;
@property(nonatomic) struct NSDirectionalEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(retain, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_configure;
- (void)didMoveToWindow;

@end


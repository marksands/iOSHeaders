//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccountUI/AAUIBuddyView.h>

@class UILabel, UIStackView;

@interface AAUIHeaderView : AAUIBuddyView
{
    UIStackView *_stackView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)_updateLabelFonts;
- (void)_updateStackViewSpacing;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


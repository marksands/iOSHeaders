//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKDetailsContactsTableViewCell.h>

@class NSLayoutConstraint, UIStackView;

@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell
{
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_buttonsTopConstraint;
}

+ (double)estimatedHeight;
+ (double)preferredHeight;
@property(retain, nonatomic) NSLayoutConstraint *buttonsTopConstraint; // @synthesize buttonsTopConstraint=_buttonsTopConstraint;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
- (void).cxx_destruct;
- (void)_updateVisibleButtons;
- (void)configureWithViewModel:(id)arg1;
- (void)setShowsLocation:(_Bool)arg1;
- (void)_initConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


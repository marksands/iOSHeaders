//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface VUFooterContainerView : UIView
{
    id _delegate;
    UIButton *_termsButton;
}

@property(retain, nonatomic) UIButton *termsButton; // @synthesize termsButton=_termsButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 bypassDelegate:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


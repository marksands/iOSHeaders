//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol AAUIArrowControlsViewDelegate;

@interface AAUIArrowControlsView : UIView
{
    UIButton *_upButton;
    UIButton *_downButton;
    id <AAUIArrowControlsViewDelegate> _delegate;
    long long _interfaceOrientation;
}

+ (double)defaultWidthForOrientation:(long long)arg1;
+ (double)defaultHeightForOrientation:(long long)arg1;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) UIButton *upButton; // @synthesize upButton=_upButton;
@property(readonly, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
@property(nonatomic) id <AAUIArrowControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_arrowButtonWasTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


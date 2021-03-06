//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIVisualEffect, UIVisualEffectView;

@interface DOCVisualEffectLabel : UIView
{
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
@property(copy, nonatomic) UIVisualEffect *effect;
- (void)DOCVisualEffectLabelSharedInitWithEffect:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 effect:(id)arg2;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


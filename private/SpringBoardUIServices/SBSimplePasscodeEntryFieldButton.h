//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SBSimplePasscodeEntryFieldButton : UIView
{
    _Bool _useLightStyle;
    _Bool _revealed;
    struct UIEdgeInsets _paddingOutsideRing;
    UIColor *_color;
    UIView *_ringView;
}

- (void).cxx_destruct;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2 useLightStyle:(_Bool)arg3;

@end


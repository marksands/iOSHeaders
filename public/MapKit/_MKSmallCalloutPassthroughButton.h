//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : UIControl
{
    UIControl *_targetControl;
    UIView *_highlightView;
}

@property(retain, nonatomic) UIControl *targetControl; // @synthesize targetControl=_targetControl;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView
{
    long long _layoutStyle;
    SKUIInteractiveSegmentedControl *_segmentedControl;
    double _segmentedControlMinimumHeight;
}

+ (struct UIEdgeInsets)defaultLayoutMargins;
@property(nonatomic) double segmentedControlMinimumHeight; // @synthesize segmentedControlMinimumHeight=_segmentedControlMinimumHeight;
@property(retain, nonatomic) SKUIInteractiveSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


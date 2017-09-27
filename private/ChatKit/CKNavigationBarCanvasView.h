//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CKNavigationBarCanvasView : UIView
{
    _Bool _enforceLeftItemViewsAlignmentToCenter;
    UIView *_titleView;
    UIView *_leftItemView;
    UIView *_rightItemView;
    double _preferredHeight;
}

+ (double)preferredLandscapeHeightForRegularWidth;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)minHeight;
+ (double)maxHeight;
@property(nonatomic) _Bool enforceLeftItemViewsAlignmentToCenter; // @synthesize enforceLeftItemViewsAlignmentToCenter=_enforceLeftItemViewsAlignmentToCenter;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldUseTallHeight;
- (void)clearAllItemViews;
- (id)initWithFrame:(struct CGRect)arg1 preferredHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


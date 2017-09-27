//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UILabel;

@interface CAMZoomFactorLabel : UIView
{
    double _zoomFactor;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_labelInsets;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIColor *textColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end


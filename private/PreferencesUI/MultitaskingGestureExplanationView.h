//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UIColor, UILabel, UnderlineButton;

@interface MultitaskingGestureExplanationView : UIView <PSHeaderFooterView>
{
    UILabel *_labels[4];
    UnderlineButton *_videoLinkButton;
    double _sized;
    double _width;
    UIColor *_footerTextColor;
}

- (void).cxx_destruct;
- (id)_accessibilityLabels;
- (void)layoutSubviews;
- (_Bool)isRTL;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)newRegionSampleLabelUnderlined;

@end


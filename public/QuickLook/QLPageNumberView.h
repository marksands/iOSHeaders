//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSNumberFormatter, UILabel;

__attribute__((visibility("hidden")))
@interface QLPageNumberView : UIView
{
    long long _pageNumber;
    long long _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPath *)_copyMutablePathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2 inverted:(_Bool)arg3;
- (void)layoutSubviews;
- (void)sizeToFit;
@property long long pageCount;
@property long long pageNumber;
- (void)_updateString;
- (id)_indexFormatter;
- (id)initWithFrame:(struct CGRect)arg1;

@end


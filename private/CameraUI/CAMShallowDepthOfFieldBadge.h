//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView
{
    long long _shallowDepthOfFieldStatus;
    CAMBadgeTextView *__enabledTextView;
    CAMBadgeTextView *__disabledTextView;
}

@property(readonly, nonatomic) CAMBadgeTextView *_disabledTextView; // @synthesize _disabledTextView=__disabledTextView;
@property(readonly, nonatomic) CAMBadgeTextView *_enabledTextView; // @synthesize _enabledTextView=__enabledTextView;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(_Bool)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


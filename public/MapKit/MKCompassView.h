//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface MKCompassView : UIView
{
    UIImageView *_imageView;
    long long _compassViewSize;
    long long _compassViewStyle;
}

+ (id)_parameterForStyle:(long long)arg1;
+ (id)_parameterForSize:(long long)arg1;
@property(readonly, nonatomic) long long compassViewStyle; // @synthesize compassViewStyle=_compassViewStyle;
@property(readonly, nonatomic) long long compassViewSize; // @synthesize compassViewSize=_compassViewSize;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) double yaw;
- (void)_updateLayerForCurrentSizeAndStyle;
- (void)setCompassViewSize:(long long)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)updateLocale:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


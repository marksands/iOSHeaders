//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImage, UIImageView;

@interface _PKInkThicknessButton : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    struct CGRect _lastRenderedBounds;
}

+ (id)imageTintColorForIsSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
+ (id)backgroundColorForIsSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property(nonatomic) struct CGRect lastRenderedBounds; // @synthesize lastRenderedBounds=_lastRenderedBounds;
@property(retain, nonatomic) UIImageView *inkImageView; // @synthesize inkImageView=_inkImageView;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
- (void).cxx_destruct;
- (void)didTouchUpInside;
- (void)_animateToHighlightedState:(_Bool)arg1;
- (void)_animateToSelectedState:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithInkIdentifier:(id)arg1 weight:(double)arg2;

@end


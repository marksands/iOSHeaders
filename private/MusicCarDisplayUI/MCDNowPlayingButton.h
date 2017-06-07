//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDNowPlayingButton : UIButton
{
    CALayer *_leadingBorder;
    CALayer *_focusColorLayer;
    struct CGSize _layoutFrameSize;
    double _height;
}

+ (id)buttonWithHeight:(double)arg1;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (_Bool)canBecomeFocused;

@end


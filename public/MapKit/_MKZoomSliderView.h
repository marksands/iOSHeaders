//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKZoomSliderView : UIView
{
    NSLayoutConstraint *_knobCenterYConstraint;
    UIView *_knob;
    double _zoomFraction;
    _Bool _active;
    UIImageView *_shadowImageView;
    double _lastTrackShadowImageScale;
}

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double zoomFraction; // @synthesize zoomFraction=_zoomFraction;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end


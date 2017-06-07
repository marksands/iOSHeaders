//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <Silex/SXVideoOverlayButton-Protocol.h>

@interface SXFlatVideoOverlayButton : UIButton <SXVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 glyphMaskImageName:(id)arg4;
- (id)_highlightedFailedButtonImage;
- (id)_normalFailedButtonImage;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (void)recalculateBackdropView;
- (id)initWithStyle:(long long)arg1;

@end


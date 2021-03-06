//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SXVideoOverlayButton.h"

@class UIButton, _UIBackdropView;

@interface SXHighFidelityVideoOverlayButton : UIView <SXVideoOverlayButton>
{
    long long _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
    id _target;
    SEL _action;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
- (void)_playButtonTapped:(id)arg1;
- (void)_playButtonDeactivate:(id)arg1;
- (void)_playButtonActivate:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (void)recalculateBackdropView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end


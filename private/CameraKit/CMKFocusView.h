//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAKeyframeAnimation, NSArray, UIColor;

@interface CMKFocusView : UIView
{
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    double _lastInteractionTime;
    _Bool _fadingOut;
    long long _suspendCount;
    _Bool _shouldFadeOut;
    _Bool _fadeOutStarted;
    double _lastFadeOutTime;
    UIColor *_color;
}

+ (double)minimumTimeBeforeFadeOut;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double lastFadeOutTime; // @synthesize lastFadeOutTime=_lastFadeOutTime;
- (void).cxx_destruct;
- (void)_animateAlpha:(double)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dimForInactivity;
- (void)_scheduleDelayedDim;
- (void)updateLastInteractionTime;
- (void)resetFadeOutSuspension;
- (void)resumeFadeOutResetPending:(_Bool)arg1;
- (void)suspendFadeOut;
- (void)cancelFadeOut;
- (_Bool)_cancelFadeOutForSuspend;
- (void)_cancelDelayedDim;
- (void)_cancelDelayedFadeOut;
- (void)_fadeOutIfNeeded;
- (void)_cancelDelayedPauseContentsAnimation;
- (void)_pauseContentsAnimation;
- (void)stopContentsAnimation;
- (void)focusDidEnd;
- (void)_fadeOutDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_fadeOut;
- (void)stopAnimating;
- (void)startAnimatingContents:(_Bool)arg1 bounds:(_Bool)arg2 fadeIn:(_Bool)arg3;
- (void)startAnimating;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (double)dimAfterInteractionDelay;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (void)setDefaultContents;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithColor:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIBlurEffect, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MUPDFPageLabelView : UIView
{
    UILabel *_label;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    NSTimer *_timer;
    unsigned long long currentPageIndex;
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex;
- (void).cxx_destruct;
- (void)fadeOut;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(_Bool)arg4;
- (double)_fadeOutDuration;
- (double)_fadeOutDelay;
@property(readonly, nonatomic, getter=isTimerInstalled) _Bool timerInstalled;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (void)dealloc;
- (void)clearTimer;
- (id)initWithFrame:(struct CGRect)arg1;

@end


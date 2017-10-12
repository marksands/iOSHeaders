//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXButton.h>

#import "SXVideoControlItem.h"

@class NSString;

@interface SXVideoPlayButton : SXButton <SXVideoControlItem>
{
    _Bool hideable;
    _Bool _paused;
    double autoAppearanceTimeInterval;
}

@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) double autoAppearanceTimeInterval; // @synthesize autoAppearanceTimeInterval;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)isVisible;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
@property(readonly, nonatomic) _Bool hideable; // @synthesize hideable;
- (void)displayAsPlaying;
- (void)displayAsPaused;
- (void)layoutSubviews;
- (void)updateBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

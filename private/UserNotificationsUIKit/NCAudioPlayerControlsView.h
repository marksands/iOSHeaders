//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NCAudioPlayerTimelineSlider, UIButton;

@interface NCAudioPlayerControlsView : UIView
{
    _Bool _enabled;
    _Bool _contentViewLoaded;
    _Bool _contentViewLayoutConstraintsLoaded;
    id <NCAudioPlayerControlsDelegate> _delegate;
    UIButton *_pauseButton;
    UIButton *_playButton;
    long long _state;
    NCAudioPlayerTimelineSlider *_timelineSlider;
    UIView *_contentView;
}

@property(nonatomic) _Bool contentViewLayoutConstraintsLoaded; // @synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded;
@property(nonatomic) _Bool contentViewLoaded; // @synthesize contentViewLoaded=_contentViewLoaded;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NCAudioPlayerTimelineSlider *timelineSlider; // @synthesize timelineSlider=_timelineSlider;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <NCAudioPlayerControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitionToState:(long long)arg1 animated:(_Bool)arg2;
- (void)stopButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)playButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)pauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)loadContentViewLayoutConstraints;
- (void)loadContentView;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


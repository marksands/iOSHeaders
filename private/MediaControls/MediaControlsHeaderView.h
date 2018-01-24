//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPButton, MPCPlayerPath, MPUMarqueeView, MediaControlsRouteLabel, NSString, UIButton, UIImageView, UILabel;

@interface MediaControlsHeaderView : UIView
{
    _Bool _transitioning;
    _Bool _marqueeEnabled;
    _Bool _shouldUseOverrideSize;
    MPCPlayerPath *_playerPath;
    UIImageView *_artworkView;
    UIImageView *_placeholderArtworkView;
    long long _style;
    MediaControlsRouteLabel *_routeLabel;
    NSString *_primaryString;
    NSString *_secondaryString;
    MPButton *_routingButton;
    MPButton *_doneButton;
    MPButton *_playPauseButton;
    UIButton *_launchNowPlayingAppButton;
    long long _buttonType;
    UIView *_artworkBackgroundView;
    UIView *_shadow;
    MPUMarqueeView *_primaryMarqueeView;
    UILabel *_primaryLabel;
    MPUMarqueeView *_secondaryMarqueeView;
    UILabel *_secondaryLabel;
    UIView *_buttonBackground;
    struct CGSize _overrideSize;
}

@property(retain, nonatomic) UIView *buttonBackground; // @synthesize buttonBackground=_buttonBackground;
@property(nonatomic) _Bool shouldUseOverrideSize; // @synthesize shouldUseOverrideSize=_shouldUseOverrideSize;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MPUMarqueeView *secondaryMarqueeView; // @synthesize secondaryMarqueeView=_secondaryMarqueeView;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) MPUMarqueeView *primaryMarqueeView; // @synthesize primaryMarqueeView=_primaryMarqueeView;
@property(retain, nonatomic) UIView *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) UIView *artworkBackgroundView; // @synthesize artworkBackgroundView=_artworkBackgroundView;
@property(nonatomic) struct CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property(retain, nonatomic) UIButton *launchNowPlayingAppButton; // @synthesize launchNowPlayingAppButton=_launchNowPlayingAppButton;
@property(retain, nonatomic) MPButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) MPButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MPButton *routingButton; // @synthesize routingButton=_routingButton;
@property(copy, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(copy, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
@property(retain, nonatomic) MediaControlsRouteLabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) UIImageView *placeholderArtworkView; // @synthesize placeholderArtworkView=_placeholderArtworkView;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateRTL;
- (void)clearOverrideSize;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateArtworkStyle;
- (void)_updateStyle;
- (struct CGSize)layoutTextInAvailableBounds:(struct CGRect)arg1 setFrames:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


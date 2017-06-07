//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage;

@interface MCDTransportControlView : UIView
{
    _Bool _progressActive;
    UIButton *_leftButton;
    UIButton *_playPauseButton;
    UIButton *_fastForwardButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    UIImage *_defaultLeftButtonImage;
    UIImage *_defaultFastForwardButtonImage;
}

@property(retain, nonatomic) UIImage *defaultFastForwardButtonImage; // @synthesize defaultFastForwardButtonImage=_defaultFastForwardButtonImage;
@property(retain, nonatomic) UIImage *defaultLeftButtonImage; // @synthesize defaultLeftButtonImage=_defaultLeftButtonImage;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
@property(nonatomic) _Bool progressActive; // @synthesize progressActive=_progressActive;
@property(readonly, nonatomic) UIButton *fastForwardButton; // @synthesize fastForwardButton=_fastForwardButton;
@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (id)_defaultImageForIdentifier:(id)arg1;
- (void)_updateProgressActive;
- (struct CGSize)intrinsicContentSize;
- (void)_addConstraints;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


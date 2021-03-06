//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPCPlayerResponse, MediaControlsTimeControl, MediaControlsTransportStackView, UIVisualEffectView;

@interface MediaControlsContainerView : UIView
{
    _Bool _empty;
    long long _style;
    MediaControlsTransportStackView *_mediaControlsTransportStackView;
    MediaControlsTimeControl *_mediaControlsTimeControl;
    UIVisualEffectView *_primaryVisualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property(retain, nonatomic) MediaControlsTimeControl *mediaControlsTimeControl; // @synthesize mediaControlsTimeControl=_mediaControlsTimeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *mediaControlsTransportStackView; // @synthesize mediaControlsTransportStackView=_mediaControlsTransportStackView;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
@property(retain, nonatomic) MPCPlayerResponse *response;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPButton.h>

@class MPCPlayerCommandRequest, UIColor, UIView;

@interface MediaControlsTransportButton : MPButton
{
    MPCPlayerCommandRequest *_touchUpInsideCommandRequest;
    MPCPlayerCommandRequest *_holdBeginCommandRequest;
    MPCPlayerCommandRequest *_holdEndCommandRequest;
    UIColor *_highlightBackgroundColor;
    UIView *_highlightIndicatorView;
}

@property(retain, nonatomic) UIView *highlightIndicatorView; // @synthesize highlightIndicatorView=_highlightIndicatorView;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest; // @synthesize holdEndCommandRequest=_holdEndCommandRequest;
@property(retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest; // @synthesize holdBeginCommandRequest=_holdBeginCommandRequest;
@property(retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest; // @synthesize touchUpInsideCommandRequest=_touchUpInsideCommandRequest;
- (void).cxx_destruct;
- (void)endHighlight;
- (void)beginHighlight;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


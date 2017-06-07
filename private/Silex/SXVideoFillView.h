//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXFillView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXClippingView, SXImageResource, SXVideoFill, SXVideoFillPlayerView;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener>
{
    SXVideoFill *_videoFill;
    SXClippingView *_clippingView;
    SXVideoFillPlayerView *_playerView;
    SXImageResource *_imageResource;
}

@property(retain, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property(retain, nonatomic) SXVideoFillPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) SXVideoFill *videoFill; // @synthesize videoFill=_videoFill;
- (void).cxx_destruct;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (void)reset;
- (void)pause;
- (void)play;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithVideoFill:(id)arg1 andContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


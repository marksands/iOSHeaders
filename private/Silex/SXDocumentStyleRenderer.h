//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXDocumentStyleRenderer.h"
#import "SXViewportChangeListener.h"

@class NSString, SXContext, SXGradientFillView, SXImageFillView, SXVideoFillView, SXViewport, UIView;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>
{
    SXContext *_context;
    SXViewport *_viewport;
    UIView *_topBackgroundView;
    SXGradientFillView *_gradientFillView;
    SXImageFillView *_imageFillView;
    SXVideoFillView *_videoFillView;
}

@property(retain, nonatomic) SXVideoFillView *videoFillView; // @synthesize videoFillView=_videoFillView;
@property(retain, nonatomic) SXImageFillView *imageFillView; // @synthesize imageFillView=_imageFillView;
@property(retain, nonatomic) SXGradientFillView *gradientFillView; // @synthesize gradientFillView=_gradientFillView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) SXContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)layoutTopBackgroundView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)imageViewForFill:(id)arg1;
- (id)gradientViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (id)initWithContext:(id)arg1 viewport:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


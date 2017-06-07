//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKitUI/CLKUIQuadView.h>

@class CLKUIGLQuadRenderer, EAGLContext;

@interface CLKUIGLQuadView : CLKUIQuadView
{
    EAGLContext *_context;
    CLKUIGLQuadRenderer *_renderer;
    unsigned int _defaultFramebuffer;
    unsigned int _colorRenderbuffer;
    int _backingWidth;
    int _backingHeight;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_display;
- (void)_discardContents;
- (void)_handleQuadArrayChange:(id)arg1;
- (id)_snapshotInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3;
- (void)layoutSubviews;
- (void)_resizeFramebuffer;
- (void)dealloc;
- (void)_setupGL;
- (id)initWithFrame:(struct CGRect)arg1;

@end


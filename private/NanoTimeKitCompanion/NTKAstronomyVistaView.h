//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NUAnimationObserver.h"
#import "NUViewDelegate.h"

@class CLKDevice, NSMutableSet, NSString, NUScene, NUView;

@interface NTKAstronomyVistaView : UIView <NUAnimationObserver, NUViewDelegate>
{
    NUView *_viewer;
    NSMutableSet *_activeContentsAnimations;
    unsigned long long _vista;
    unsigned int _isSupplemental:1;
    CLKDevice *_device;
    id <NTKAstronomyVistaViewObserver> _observer;
}

@property(nonatomic) __weak id <NTKAstronomyVistaViewObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)viewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;
- (void)universeAnimationFinished:(id)arg1;
- (void)_setVista:(unsigned long long)arg1 scene:(id)arg2;
- (void)setVista:(unsigned long long)arg1;
- (id)generateAnimationArrayFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2;
- (void)showSupplemental:(_Bool)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)vista;
- (id)rotatable:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)updateSunLocationAnimated:(_Bool)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setOpaque:(_Bool)arg1;
@property(retain, nonatomic) NUScene *scene;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


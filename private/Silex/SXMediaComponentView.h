//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import "SXViewportChangeListener.h"

@class NSString, SXMediaExposureEvent;

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener>
{
    _Bool _isDisplayingMedia;
    SXMediaExposureEvent *_mediaExposureEvent;
    double _minimumVisibleY;
    double _maximumVisibleY;
    struct CGRect _visibleBounds;
}

@property(nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property(nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property(retain, nonatomic) SXMediaExposureEvent *mediaExposureEvent; // @synthesize mediaExposureEvent=_mediaExposureEvent;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(nonatomic) _Bool isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
- (void).cxx_destruct;
- (void)visibleBoundsChanged;
- (void)calculateVisibleBounds;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (_Bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (void)submitEvents;
- (id)mediaEventForClass:(Class)arg1;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsGalleryType;
- (void)finishMediaExposureEventIfNeeded;
- (void)createMediaExposureEventIfNeeded;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


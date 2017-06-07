//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NUAVPlayerController, NUCoalescer, NUColorSpace, NULivePhotoRenderClient, NUMediaView, NUPriority, NURenderClient, NUResponse, NUSurfaceRenderClient, NUVideoRenderClient, UIView;
@protocol NURegionPolicy, NUScalePolicy, OS_dispatch_group, OS_dispatch_queue;

@interface NUMediaViewRenderer : NSObject
{
    NUSurfaceRenderClient *_zoomClient;
    NUSurfaceRenderClient *_backfillClient;
    NULivePhotoRenderClient *_livePhotoClient;
    NUVideoRenderClient *_videoClient;
    UIView *_videoPlayerView;
    UIView *_livePhotoView;
    NUCoalescer *_livePhotoUpdateCoalescer;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NUResponse *_zoomRenderResponse;
    NUResponse *_backfillRenderResponse;
    _Bool __videoEnabled;
    id <NUScalePolicy> _scalePolicy;
    id <NURegionPolicy> _regionPolicy;
    NUColorSpace *_colorSpace;
    NUPriority *_renderPriority;
    NUMediaView *_mediaView;
    double _backingScale;
    NSArray *_pipelineFilters;
    double _maximumZoomScale;
    NUAVPlayerController *_nuAVPlayerController;
    unsigned long long _displayType;
    unsigned long long _computedDisplayType;
}

+ (_Bool)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4;
@property(nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) _Bool _videoEnabled; // @synthesize _videoEnabled=__videoEnabled;
@property(readonly, nonatomic) unsigned long long computedDisplayType; // @synthesize computedDisplayType=_computedDisplayType;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NUAVPlayerController *nuAVPlayerController; // @synthesize nuAVPlayerController=_nuAVPlayerController;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) __weak NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) NUPriority *renderPriority; // @synthesize renderPriority=_renderPriority;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) id <NURegionPolicy> regionPolicy; // @synthesize regionPolicy=_regionPolicy;
@property(retain, nonatomic) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (void).cxx_destruct;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
- (void)_addFullExtentConstraintsForView:(id)arg1;
- (id)_backfillRenderRequestForComposition:(id)arg1;
- (id)_zoomRenderRequestForComposition:(id)arg1;
- (void)_updateLivePhotoWithResponse:(id)arg1;
- (id)_livePhotoFromResponse:(id)arg1;
- (void)_updateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;
- (void)_updateVideoComposition:(id)arg1;
- (void)_setDisplayType:(unsigned long long)arg1;
- (void)_updateDisplayForMediaType:(long long)arg1;
@property(readonly, nonatomic) NURenderClient *renderClient;
- (void)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;
- (void)_updateROILayerWithRenderResponse:(id)arg1;
- (void)_updateBackfillLayerWithLatestRenderResponse;
- (void)_updateROILayerWithLatestRenderResponse;
- (CDUnknownBlockType)_backfillRenderResponseHandler;
- (CDUnknownBlockType)_zoomRenderResponseHandler;
- (void)_updateImageRenderForComposition:(id)arg1;
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;
- (id)_regionPolicyForZoom;
- (struct CGRect)_scrollBounds;
- (struct CGSize)targetSize;
- (struct CGRect)convertRect:(struct CGRect)arg1 toImageFromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromImageToView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toImageFromView:(id)arg2;
@property(readonly) _Bool isReady;
@property(readonly, nonatomic, getter=isZoomedToFit) _Bool zoomedToFit;
- (void)wait;
- (void)updateComposition:(id)arg1;
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;
- (id)init;
- (id)initWithMediaView:(id)arg1;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaRep.h>

#import <iWorkImport/TSDPlayableMediaRep-Protocol.h>

@class AVAsset, CALayer, NSObject, NSString, TSDButtonKnob, TSDFrameRep, TSDMovieInfo;
@protocol TSKMediaPlayerController;

__attribute__((visibility("hidden")))
@interface TSDMovieRep : TSDMediaRep <TSDPlayableMediaRep>
{
    NSObject<TSKMediaPlayerController> *mPlayerController;
    _Bool mCurrentlyObservingPlayerLayer;
    _Bool mPlayerLayerShouldBeDisplayed;
    _Bool mDirectlyManagesLayerContent;
    CALayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    CALayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    CALayer *mFrameMaskLayer;
    struct CGRect mLastPictureFrameLayerRect;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    _Bool mDidCheckPlayability;
    _Bool mIsPlayable;
    TSDButtonKnob *mPlayButtonKnob;
    _Bool mPlayButtonKnobVisible;
    _Bool mDidCancelUpdatingPlayButtonVisibility;
    _Bool mInReadMode;
    struct CGImage *mAlternatePosterImage;
    unsigned long long mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    _Bool mIsChangingDynamicVolume;
    _Bool mNeedsTeardownPlayerController;
    _Bool mDelayTearingDownPlayerController;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(nonatomic) struct CGImage *alternatePosterImage; // @synthesize alternatePosterImage=mAlternatePosterImage;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=mIsPlayable;
- (void).cxx_destruct;
- (id)downloadProgressPlaceholderImage;
- (_Bool)shouldShowCheckerboard;
- (_Bool)isDataCurrentlyDownloading;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGImage *)newFrameMaskForViewScale:(double)arg1 frameRect:(struct CGRect *)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forShadowOrHitTest:(_Bool)arg6;
- (void)p_drawPosterImageInContext:(struct CGContext *)arg1 forShadowOrHitTest:(_Bool)arg2;
- (void)p_updateMovieReflectionMaskLayer;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext *)arg1 reflectionSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)movieLayout;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


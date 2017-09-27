//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSDMediaRep.h>

#import "TSDAudioHUDControllerDelegate.h"
#import "TSKAVPlayerControllerDelegate.h"

@class CALayer, NSString, TSDMovieInfo, TSKAVPlayerController;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate>
{
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    _Bool mIsChangingDynamicVolume;
    id <TSDAudioHUDController> mAudioHUDController;
}

@property(readonly, nonatomic) id <TSDAudioHUDController> audioHUDController; // @synthesize audioHUDController=mAudioHUDController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
@property(readonly, nonatomic) TSKAVPlayerController *playerController;
- (void)p_teardownPlayerController;
- (void)p_setupPlayerControllerIfNecessary;
- (_Bool)p_shouldPlayerControllerExistThroughoutSelection;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidBegin;
@property(readonly, nonatomic) float volume;
- (void)p_updateButtonForPlaying:(_Bool)arg1 pressed:(_Bool)arg2;
- (id)textureWithContext:(id)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)didEndZooming;
- (void)willBeginZooming;
- (_Bool)exclusivelyProvidesGuidesWhileAligning;
- (_Bool)providesGuidesWhileAligning;
- (struct CGRect)boundsForStandardKnobs;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (_Bool)shouldShowKnobs;
- (_Bool)p_isEditingAnimations;
- (_Bool)shouldShowSelectionHighlight;
- (_Bool)shouldShowSizesInRulers;
- (_Bool)shouldShowDragHUD;
- (_Bool)isDraggable;
- (void)p_updateEndTime;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)p_updateRepeatMode;
- (void)processChangedProperty:(int)arg1;
- (_Bool)p_isPlaying;
- (_Bool)shouldAllowReplacementFromDrop;
- (_Bool)shouldAllowReplacementFromPaste;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (void)updatePlayButtonForPoint:(struct CGPoint)arg1;
- (_Bool)hitPlayPauseButtonWithPoint:(struct CGPoint)arg1;
- (void)willBeginReadMode;
- (void)willBeRemoved;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)willUpdateLayer:(id)arg1;
- (_Bool)p_shouldShowPlayPauseLayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (_Bool)shouldShowMediaReplaceUI;
- (_Bool)canResetMediaSize;
- (Class)layerClass;
- (_Bool)directlyManagesLayerContent;
- (void)dealloc;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


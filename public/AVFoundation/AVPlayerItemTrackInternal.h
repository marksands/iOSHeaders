//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVWeakReference, NSDictionary, NSString;

@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    _Bool figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    _Bool enabled;
    _Bool enabledWasSet;
    _Bool disableColorMatching;
    _Bool disableColorMatchingWasSet;
    long long activeHapticChannelIndex;
    _Bool activeHapticChannelIndexWasSet;
    float hapticVolume;
    _Bool hapticVolumeWasSet;
}

@end


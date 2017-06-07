//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PhotosUI/PUEditableAsset-Protocol.h>

@class CLLocation, NSDate, NSDictionary, NSString, PFVideoAVObjectBuilder;

@interface PHAsset (PUDisplayAssetAdoption) <PUEditableAsset>
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property(readonly, nonatomic, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property(readonly, nonatomic) int originalEXIFOrientation;
@property(readonly, nonatomic) NSDictionary *imageProperties;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;
@property(readonly, nonatomic) unsigned long long livePhotoVisibilityState;
@property(readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property(readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property(readonly, nonatomic, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property(readonly, nonatomic, getter=isAdjusted) _Bool adjusted;
@property(readonly, nonatomic, getter=isHighFramerateVideo) _Bool highFramerateVideo;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto;
- (unsigned long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *localizedGeoDescription;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) _Bool canPlayPhotoIris;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *uuid;
@end

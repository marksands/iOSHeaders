//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUCAMReviewAsset.h"
#import "PUEditableAsset.h"

@class AVAsset, AVAudioMix, CLLocation, NSDate, NSDictionary, NSString, NSURL, PFAssetAdjustments, PFVideoAVObjectBuilder, PHLivePhoto, UIImage;

@interface PUReviewAsset : NSObject <PUEditableAsset, PUCAMReviewAsset>
{
    _Bool _HDR;
    _Bool _livePhoto;
    _Bool _livePhotoPlaceholder;
    _Bool _canPlayPhotoIris;
    _Bool _representsBurst;
    AVAsset *providedAVAsset;
    AVAudioMix *providedAudioMix;
    PHLivePhoto *providedLivePhoto;
    NSString *_identifier;
    unsigned long long _mediaType;
    unsigned long long _mediaSubtypes;
    long long _playbackStyle;
    long long _playbackVariation;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    CLLocation *_location;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    NSString *_burstIdentifier;
    unsigned long long _numberOfRepresentedAssets;
    UIImage *_providedPreviewImage;
    NSDictionary *_providedImageMetadata;
    NSURL *_providedFullsizeImageURL;
    NSURL *_providedFullsizeRenderImageURL;
    NSURL *_providedVideoURL;
    NSURL *_providedFullsizeRenderVideoURL;
    PFAssetAdjustments *_assetAdjustments;
    CDStruct_1b6d18a9 _livePhotoSynchronizedDisplayTime;
    CDStruct_1b6d18a9 _livePhotoDuration;
}

+ (id)fileURLForAdjustmentsInDirectory:(id)arg1;
+ (id)fileURLForFullsizeRenderVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoComplementInDirectory:(id)arg1;
+ (id)fileURLForFullsizeRenderVideoInDirectory:(id)arg1;
+ (id)fileURLForFullsizeVideoInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeRenderImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)fileURLForFullsizeImageInDirectory:(id)arg1 extension:(id)arg2;
+ (id)createUniqueMediaDirectoryForAssetWithIdentifier:(id)arg1;
@property(readonly, nonatomic) PFAssetAdjustments *assetAdjustments; // @synthesize assetAdjustments=_assetAdjustments;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderVideoURL; // @synthesize providedFullsizeRenderVideoURL=_providedFullsizeRenderVideoURL;
@property(readonly, nonatomic) NSURL *providedVideoURL; // @synthesize providedVideoURL=_providedVideoURL;
@property(readonly, nonatomic) NSURL *providedFullsizeRenderImageURL; // @synthesize providedFullsizeRenderImageURL=_providedFullsizeRenderImageURL;
@property(readonly, nonatomic) NSURL *providedFullsizeImageURL; // @synthesize providedFullsizeImageURL=_providedFullsizeImageURL;
@property(readonly, nonatomic) NSDictionary *providedImageMetadata; // @synthesize providedImageMetadata=_providedImageMetadata;
@property(readonly, nonatomic) UIImage *providedPreviewImage; // @synthesize providedPreviewImage=_providedPreviewImage;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets; // @synthesize numberOfRepresentedAssets=_numberOfRepresentedAssets;
@property(readonly, nonatomic) _Bool representsBurst; // @synthesize representsBurst=_representsBurst;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoDuration; // @synthesize livePhotoDuration=_livePhotoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoSynchronizedDisplayTime; // @synthesize livePhotoSynchronizedDisplayTime=_livePhotoSynchronizedDisplayTime;
@property(readonly, nonatomic) _Bool canPlayPhotoIris; // @synthesize canPlayPhotoIris=_canPlayPhotoIris;
@property(readonly, nonatomic, getter=isLivePhotoPlaceholder) _Bool livePhotoPlaceholder; // @synthesize livePhotoPlaceholder=_livePhotoPlaceholder;
@property(readonly, nonatomic, getter=isLivePhoto) _Bool livePhoto; // @synthesize livePhoto=_livePhoto;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isHDR) _Bool HDR; // @synthesize HDR=_HDR;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) long long playbackVariation; // @synthesize playbackVariation=_playbackVariation;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PHLivePhoto *providedLivePhoto; // @synthesize providedLivePhoto;
@property(readonly, nonatomic) AVAudioMix *providedAudioMix; // @synthesize providedAudioMix;
@property(readonly, nonatomic) AVAsset *providedAVAsset; // @synthesize providedAVAsset;
- (void).cxx_destruct;
- (void)_removeFileAtURL:(id)arg1;
- (void)removeAllFilesAtReferencedURLs;
- (_Bool)_linkFileAtURL:(id)arg1 toURL:(id)arg2;
- (id)_uniqueDestinationURLForFileURL:(id)arg1 inDirectory:(id)arg2;
- (id)_ensureLinkDestinationDirectoryFromBaseDirectory:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalVideoFile;
@property(readonly, copy, nonatomic) NSString *pathForOriginalImageFile;
@property(readonly, nonatomic, getter=isResourceDownloadPossible) _Bool resourceDownloadPossible;
@property(readonly, nonatomic) int originalEXIFOrientation;
@property(readonly, nonatomic) NSDictionary *imageProperties;
- (void)cancelContentEditingInputRequest:(unsigned long long)arg1;
- (unsigned long long)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) PFVideoAVObjectBuilder *videoObjectBuilder;
@property(readonly, nonatomic) unsigned long long livePhotoVisibilityState;
@property(readonly, nonatomic, getter=isInPlaceVideoTrimAllowed) _Bool inPlaceVideoTrimAllowed;
@property(readonly, nonatomic, getter=isLivePhotoVisibilityAdjustmentAllowed) _Bool livePhotoVisibilityAdjustmentAllowed;
@property(readonly, nonatomic, getter=isContentAdjustmentAllowed) _Bool contentAdjustmentAllowed;
@property(readonly, nonatomic, getter=isAdjusted) _Bool adjusted;
@property(readonly, nonatomic, getter=isHighFramerateVideo) _Bool highFramerateVideo;
- (unsigned long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) _Bool isAnimatedImage;
@property(readonly, nonatomic) _Bool hasPhotoColorAdjustments;
@property(readonly, nonatomic) _Bool canPlayLoopingVideo;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property(readonly, nonatomic) _Bool isPhotoIrisPlaceholder;
@property(readonly, nonatomic) unsigned long long originalFilesize;
@property(readonly, nonatomic) _Bool isTemporaryPlaceholder;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAVAsset:(id)arg1 audioMix:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 captureDate:(id)arg5 duration:(double)arg6 previewImage:(id)arg7 videoURL:(id)arg8 adjustments:(id)arg9 identifier:(id)arg10;
- (id)initWithLivePhoto:(id)arg1 fullsizeUnadjustedImageURL:(id)arg2 fullsizeUnadjustedVideoURL:(id)arg3 assetAdjustments:(id)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 captureDate:(id)arg7 metadata:(id)arg8 duration:(double)arg9 previewImage:(id)arg10 identifier:(id)arg11;
- (id)initWithPhoto:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 captureDate:(id)arg4 metadata:(id)arg5 burstIdentifier:(id)arg6 representedCount:(unsigned long long)arg7 fullsizeImageURL:(id)arg8 fullsizeUnadjustedImageURL:(id)arg9 assetAdjustments:(id)arg10 identifier:(id)arg11;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 previewImage:(id)arg6 pixelWidth:(unsigned long long)arg7 pixelHeight:(unsigned long long)arg8 assetAdjustments:(id)arg9 duration:(double)arg10;
- (id)initWithReviewAsset:(id)arg1 baseImageURL:(id)arg2 renderedImageURL:(id)arg3 baseVideoURL:(id)arg4 renderedVideoURL:(id)arg5 pixelWidth:(unsigned long long)arg6 pixelHeight:(unsigned long long)arg7 assetAdjustments:(id)arg8 duration:(double)arg9;
- (id)initWithReviewAsset:(id)arg1 primaryResourceURL:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2 canPlayPhotoIris:(_Bool)arg3;
- (id)initWithReviewAsset:(id)arg1 linkFileURLsToUniquePathsInDirectory:(id)arg2;
- (id)initWithConformingAsset:(id)arg1;
- (id)initWithReviewAsset:(id)arg1;
- (id)providedVideoURLForVideoVersion:(long long)arg1;
- (id)providedVideoURLForImageVersion:(long long)arg1;
- (int)exifOrientationForImageVersion:(long long)arg1;
- (id)providedImageURLForImageVersion:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


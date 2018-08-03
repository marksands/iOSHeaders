//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXRunNode.h"

#import "PUAdjustmentURLNode.h"
#import "PUImageDataRenderNode.h"
#import "PUImageInfoNode.h"
#import "PUReviewImageURLNode.h"
#import "PUReviewVideoURLNode.h"
#import "PUVideoURLExportNode.h"

@class NSArray, NSData, NSString, NSURL, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoURLNode, PUImageDataRenderNode, PUPhotoEditIrisModel, PUVideoExportNode;

__attribute__((visibility("hidden")))
@interface PUReviewInternalSaveNode : PXRunNode <PUImageInfoNode, PUVideoURLExportNode, PUAdjustmentURLNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUImageDataRenderNode>
{
    _Bool _useEmbeddedPreview;
    NSURL *_imageDataURL;
    long long _imageExifOrientation;
    NSURL *_providedFullsizeImageURL;
    NSURL *_providedVideoURL;
    NSURL *_videoURL;
    NSURL *_adjustmentURL;
    NSData *_imageData;
    NSString *_imageDataUTI;
    PUEditableMediaProviderImageDataNode *_imageDataNode;
    PUImageDataRenderNode *_imageRenderNode;
    PUEditableMediaProviderVideoURLNode *_videoURLNode;
    PUVideoExportNode *_videoRenderNode;
    NSURL *_directory;
    PUPhotoEditIrisModel *_livePhotoModel;
    struct CGSize _renderedVideoSize;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *livePhotoModel; // @synthesize livePhotoModel=_livePhotoModel;
@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) PUVideoExportNode *videoRenderNode; // @synthesize videoRenderNode=_videoRenderNode;
@property(readonly, nonatomic) PUEditableMediaProviderVideoURLNode *videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property(readonly, nonatomic) PUImageDataRenderNode *imageRenderNode; // @synthesize imageRenderNode=_imageRenderNode;
@property(readonly, nonatomic) PUEditableMediaProviderImageDataNode *imageDataNode; // @synthesize imageDataNode=_imageDataNode;
@property(readonly, nonatomic) _Bool useEmbeddedPreview; // @synthesize useEmbeddedPreview=_useEmbeddedPreview;
@property(readonly, nonatomic) NSString *imageDataUTI; // @synthesize imageDataUTI=_imageDataUTI;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) struct CGSize renderedImageSize; // @synthesize renderedImageSize=_renderedImageSize;
@property(readonly, nonatomic) struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(readonly, nonatomic) NSURL *adjustmentURL; // @synthesize adjustmentURL=_adjustmentURL;
@property(readonly, nonatomic) struct CGSize renderedVideoSize; // @synthesize renderedVideoSize=_renderedVideoSize;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) NSURL *providedVideoURL; // @synthesize providedVideoURL=_providedVideoURL;
@property(readonly, nonatomic) NSURL *providedFullsizeImageURL; // @synthesize providedFullsizeImageURL=_providedFullsizeImageURL;
@property(readonly, nonatomic) long long imageExifOrientation; // @synthesize imageExifOrientation=_imageExifOrientation;
@property(readonly, nonatomic) NSURL *imageDataURL; // @synthesize imageDataURL=_imageDataURL;
- (void).cxx_destruct;
- (void)run;
- (id)_exportProperties;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)initWithDirectory:(id)arg1 imageDataNode:(id)arg2 imageRenderNode:(id)arg3 videoURLNode:(id)arg4 videoRenderNode:(id)arg5 livePhotoModel:(id)arg6;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end


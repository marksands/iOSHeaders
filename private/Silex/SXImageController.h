//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, SXColumnLayout, SXDocumentController;

@interface SXImageController : NSObject
{
    NSDictionary *_imageResourcesGroupedByImageIdentifier;
    NSDictionary *_image2ResourcesGroupedByImageIdentifier;
    SXDocumentController *_documentController;
    SXColumnLayout *_columnLayout;
    NSMutableDictionary *_optimalImageResources;
    struct CGSize _viewportSize;
}

@property(readonly, nonatomic) NSMutableDictionary *optimalImageResources; // @synthesize optimalImageResources=_optimalImageResources;
@property(readonly, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property(readonly, nonatomic) __weak SXDocumentController *documentController; // @synthesize documentController=_documentController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *image2ResourcesGroupedByImageIdentifier; // @synthesize image2ResourcesGroupedByImageIdentifier=_image2ResourcesGroupedByImageIdentifier;
@property(readonly, nonatomic) NSDictionary *imageResourcesGroupedByImageIdentifier; // @synthesize imageResourcesGroupedByImageIdentifier=_imageResourcesGroupedByImageIdentifier;
- (id)Image2ResourcesForImageIdentifier:(id)arg1;
- (id)imageResourcesForImageIdentifier:(id)arg1;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)allImageResources;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
- (id)taggedEquivalentOfImageResource:(id)arg1;
- (id)largestImageResourceForImageIdentifier:(id)arg1;
- (id)imageResourceForImageIdentifier:(id)arg1 constrainedToSize:(struct CGSize)arg2 allowsUpscaling:(_Bool)arg3;
- (id)imageResourceForVideoFill:(id)arg1;
- (id)imageResourceForImageFill:(id)arg1;
- (id)imageResourcesForComponentStyle:(id)arg1;
- (struct CGSize)sizeConstraintForComponent:(id)arg1;
- (id)imageResourceForDataTableComponent:(id)arg1;
- (id)imageResourceForAudioComponent:(id)arg1;
- (id)imageResourceForVideoComponent:(id)arg1;
- (id)imageResourceForGalleryItem:(id)arg1;
- (id)imageResourcesForGalleryComponent:(id)arg1;
- (id)imageResourceForScalableImageComponent:(id)arg1;
- (id)imageResourceForImageComponent:(id)arg1;
- (id)imageResourcesForComponent:(id)arg1;
- (void)determineOptimalImagesForComponents:(id)arg1;
- (void)determineOptimalImagesForMetadata;
- (void)prepareImageResources;
- (id)initWithDocumentController:(id)arg1;

@end


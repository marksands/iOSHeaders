//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NUComposition, PHLivePhoto, PHLivePhotoView, PLPhotoEditModel, PLPhotoEditRenderer, PUPhotoEditToolController, UIView;

@protocol PUPhotoEditToolControllerDelegate <NSObject>
- (UIView *)toolControllerHitEventForwardView:(PUPhotoEditToolController *)arg1;
- (PHLivePhotoView *)mainLivePhotoView;
- (struct CGPoint)toolController:(PUPhotoEditToolController *)arg1 viewPointFromOriginalPoint:(struct CGPoint)arg2 view:(UIView *)arg3;
- (struct CGPoint)toolController:(PUPhotoEditToolController *)arg1 originalPointFromViewPoint:(struct CGPoint)arg2 view:(UIView *)arg3;
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (struct CGSize)toolControllerOriginalOrientedImageSize:(PUPhotoEditToolController *)arg1;
- (NUComposition *)toolControllerRequestComposition:(PUPhotoEditToolController *)arg1;
- (void)toolControllerRequestLivePhoto:(PUPhotoEditToolController *)arg1 filters:(NSArray *)arg2 completion:(void (^)(PHLivePhoto *))arg3;
- (PHLivePhoto *)toolControllerLivePhoto:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (long long)toolControllerImageModulationOptions:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditModel *)toolControllerUneditedPhotoEditModel:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
- (void)toolControllerDidFinishLoadingThumbnails:(PUPhotoEditToolController *)arg1;
@end


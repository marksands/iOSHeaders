//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer.h>

@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer
{
}

+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionGroupForAssetCollection:(id)arg1 mutableActionTypeToPreviewActionMap:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
+ (id)createPreviewActionForAssetCollection:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (_Bool)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
- (void)performBackgroundTask;
- (_Bool)_didUserConfirmDeleteOfMemory;
- (void)performUserInteractionTask;
- (void)confirmDeleteMemoryUserAction:(id)arg1;

@end


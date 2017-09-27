//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

#import "PUAssetActionPerformerDelegate.h"

@class NSDictionary, NSString, PUPhotoKitTrashActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate>
{
    NSDictionary *_fetchResultsByAssetCollection;
    PUPhotoKitTrashActionPerformer *_trashActionPerformer;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // @synthesize trashActionPerformer=_trashActionPerformer;
@property(retain, nonatomic) NSDictionary *fetchResultsByAssetCollection; // @synthesize fetchResultsByAssetCollection=_fetchResultsByAssetCollection;
- (void).cxx_destruct;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (_Bool)shouldShowConfirmation;
- (void)performBackgroundTask;
- (void)_performTrashTask;
- (void)performUserInteractionTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXPhotoKitAssetActionPerformer.h"

@class PUAssetGroupHelper;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitAssetGroupActionPerformer : PXPhotoKitAssetActionPerformer
{
    PUAssetGroupHelper *_assetGroupHelper;
}

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
@property(retain, nonatomic) PUAssetGroupHelper *assetGroupHelper; // @synthesize assetGroupHelper=_assetGroupHelper;
- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end


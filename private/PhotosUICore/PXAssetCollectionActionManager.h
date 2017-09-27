//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXActionManager.h>

@class PHFetchResult, PXDisplayTitleInfo;

@interface PXAssetCollectionActionManager : PXActionManager
{
    id <PXDisplayAssetCollection> _assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
}

@property(retain, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)init;

@end


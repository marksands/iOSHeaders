//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PHAssetCollection, PXPlacesSnapshotFactory, UIImage;

@interface PXPlacesAlbumCoverProvider : NSObject
{
    NSString *_cachedFilePath;
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    long long _cachedCount;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
    PXPlacesSnapshotFactory *_factory;
    id <PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
    PHAssetCollection *_placesCollection;
}

@property(retain, nonatomic) PHAssetCollection *placesCollection; // @synthesize placesCollection=_placesCollection;
@property(retain, nonatomic) id <PXPlacesSnapshotFactoryDelegate> factoryDelegate; // @synthesize factoryDelegate=_factoryDelegate;
@property(retain, nonatomic) PXPlacesSnapshotFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (_Bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (_Bool)_fetchCachedImageAndIdentifier;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (id)_placeHolderImageForPXExtendedTraitCollection:(id)arg1;
- (long long)assetCountWithForcedRefresh:(_Bool)arg1;
- (void)requestPlacesAlbumCover:(id)arg1 cacheDirPath:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PUReviewAssetsDataSource : PUAssetsDataSource
{
    id <PUDisplayAssetCollection> __reviewAssetCollection;
    NSDictionary *__assetsByIdentifier;
    NSArray *__assetIdentifiers;
}

@property(readonly, nonatomic) NSArray *_assetIdentifiers; // @synthesize _assetIdentifiers=__assetIdentifiers;
@property(readonly, nonatomic) NSDictionary *_assetsByIdentifier; // @synthesize _assetsByIdentifier=__assetsByIdentifier;
@property(readonly, nonatomic) id <PUDisplayAssetCollection> _reviewAssetCollection; // @synthesize _reviewAssetCollection=__reviewAssetCollection;
- (void).cxx_destruct;
- (id)_identifierAtIndexPath:(id)arg1;
- (_Bool)isEmpty;
- (id)startingAssetReference;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetWithIdentifier:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithAssetsByIdentifier:(id)arg1 usingOrdering:(id)arg2 inAssetCollection:(id)arg3;

@end


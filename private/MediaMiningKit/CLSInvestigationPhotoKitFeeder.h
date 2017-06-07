//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder <CLSInvestigationInterviewDelegate>
{
    PHFetchOptions *_fetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _prefetchOptions;
    PHAssetCollection *_assetCollection;
}

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (id)startDateComponents;
@property(readonly, nonatomic) unsigned long long numberOfAllPeople;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) _Bool hasFavoritedAssets;
@property(readonly, nonatomic) _Bool hasPeople;
- (unsigned long long)numberOfItems;
- (_Bool)_shouldPrefetchCurationInformation;
- (id)initWithFeederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
- (void)snapshotAllToURL:(id)arg1 scoreForInputCollection:(double)arg2 curatedCollection:(id)arg3 collectionScore:(double)arg4 curatedAsset:(id)arg5 assetScore:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)imageFileNameFor:(id)arg1 baseName:(id)arg2;
- (id)writeImageToTemporaryURL:(struct CGImage *)arg1 imageFileName:(id)arg2;
- (id)_allAvailableMetadataKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


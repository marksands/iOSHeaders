//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHCollectionList, PHFetchOptions, PHFetchResult;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject
{
    _Bool _separateSectionsForSmartAndUserCollections;
    _Bool _includePeopleAlbum;
    _Bool _shouldIgnoreLibraryChanges;
    PHFetchResult *_collectionsFetchResult;
    PHCollectionList *_collectionList;
    unsigned long long _assetTypesToInclude;
    unsigned long long _collectionTypesToInclude;
}

@property _Bool shouldIgnoreLibraryChanges; // @synthesize shouldIgnoreLibraryChanges=_shouldIgnoreLibraryChanges;
@property(nonatomic) unsigned long long collectionTypesToInclude; // @synthesize collectionTypesToInclude=_collectionTypesToInclude;
@property(nonatomic) unsigned long long assetTypesToInclude; // @synthesize assetTypesToInclude=_assetTypesToInclude;
@property(nonatomic) _Bool includePeopleAlbum; // @synthesize includePeopleAlbum=_includePeopleAlbum;
@property(nonatomic) _Bool separateSectionsForSmartAndUserCollections; // @synthesize separateSectionsForSmartAndUserCollections=_separateSectionsForSmartAndUserCollections;
@property(readonly) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
- (void).cxx_destruct;
- (id)_generatePredicateForAssetTypesToInclude;
- (id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (_Bool)isRootFolder;
- (void)setIsRootFolder:(_Bool)arg1;
- (id)newConfigurationWithCollectionsFetchResult:(id)arg1;
- (id)newConfigurationWithCollectionList:(id)arg1;
@property(readonly) PHFetchOptions *customFetchOptions;
@property(readonly) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (id)initWithCollectionList:(id)arg1;
- (id)init;

@end


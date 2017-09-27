//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PLGatekeeperClient, PLManagedObjectContext, PLPhotoLibrary;

@interface PLKeywordManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    PLManagedObjectContext *_libraryContext;
    PLGatekeeperClient *_assetsdClient;
    NSMutableDictionary *_keywordCache;
}

+ (id)writeQueue;
- (_Bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2;
- (_Bool)_assetsdSetKeywords:(id)arg1 forAssetUUID:(id)arg2;
- (id)_keywordObjectsForKeywords:(id)arg1;
- (id)_keywordsForAsset:(id)arg1;
- (id)keywordsForAssets:(id)arg1;
- (id)keywordsForAsset:(id)arg1;
- (id)keywordsForAssetWithUUID:(id)arg1;
- (id)allKeywords;
- (id)allKeywordObjectIDs;
- (void)_loadKeywords;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end


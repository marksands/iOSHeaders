//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SUAssetSupport : NSObject
{
}

+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(_Bool)arg4;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id *)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (void)purgeMSUUpdate:(CDUnknownBlockType)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 releaseDate:(id *)arg3 error:(id *)arg4;
+ (id)copyInstalledAssets;
+ (id)copySUAssetForAssetID:(id)arg1;
+ (void)setSUFilters:(id)arg1;
+ (void)setAssetQueryFilters:(id)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(_Bool)arg2 error:(id *)arg3;
+ (id)_gestaltValueForKey:(struct __CFString *)arg1;
+ (long long)requestCatalogDownload:(id)arg1;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetResource.h>

#import "PHCPLAssetResource.h"

@class NSString, PHSandboxExtensionWrapper;

@interface PHInternalAssetResource : PHAssetResource <PHCPLAssetResource>
{
    NSString *_assetLocalIdentifier;
    unsigned long long _cplResourceType;
    id _fileReservation;
    PHSandboxExtensionWrapper *_sandboxExtensionWrapper;
}

+ (id)resourceForType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;
+ (_Bool)_isResourceFileCreatedOnDemandWithType:(long long)arg1 asset:(id)arg2;
@property(retain, nonatomic, setter=_setSandboxExtensionWrapper:) PHSandboxExtensionWrapper *sandboxExtensionWrapper; // @synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper;
@property(retain, nonatomic) id fileReservation; // @synthesize fileReservation=_fileReservation;
@property(readonly, nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (id)assetLocalIdentifier;
- (void).cxx_destruct;
- (id)description;
- (long long)analysisType;
- (_Bool)pin;
- (_Bool)isLibraryAssetResource;
- (_Bool)fileExists;
- (void)dealloc;
- (id)initWithResourceType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;
- (void)_fixupOriginalFilename;
- (void)_fixupUTI;
- (void)_acquireSandboxExtensionIfNeeded;
- (CDUnknownBlockType)_onDemandFileLoaderForResourceType:(long long)arg1 asset:(id)arg2;
- (_Bool)_inconsistentTypeAndUTIOrMissingFileWithShouldCheckFileExistence:(_Bool)arg1;
- (void)_unpin;
- (void)_populateFromAssetAlternatePath:(id)arg1 alternatePath:(id)arg2 assetResourceType:(long long)arg3;
- (void)_populateFromManagedAssetSidecar:(id)arg1 utiHint:(id)arg2;
- (void)_populateFromAsset:(id)arg1;
- (_Bool)_populateFromManagedAsset:(id)arg1 usingCPLType:(unsigned long long)arg2;

@end


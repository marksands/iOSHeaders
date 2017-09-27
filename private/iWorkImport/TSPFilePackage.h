//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPPackage.h>

@class TSUZipArchive;

__attribute__((visibility("hidden")))
@interface TSPFilePackage : TSPPackage
{
    TSUZipArchive *_componentZipArchive;
}

+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
+ (_Bool)isValidOrEmptyPackageAtURL:(id)arg1 hasNativeUTI:(_Bool)arg2;
+ (_Bool)isValidPackageAtURL:(id)arg1;
+ (_Bool)isValidPackageAtZipArchive:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2 originalURL:(id)arg3;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)hasDataAtRelativePath:(id)arg1;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id *)arg2;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id *)arg4;
- (id)componentZipArchive;
- (_Bool)didReloadZipArchive:(id)arg1 error:(id *)arg2;
- (long long)packageType;

@end


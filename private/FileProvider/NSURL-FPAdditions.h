//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (FPAdditions)
+ (id)fp_localStoragePrefixURL;
+ (id)fp_containerPrefixURL;
+ (id)fp_homeDirectory;
+ (id)fp_supportDirectory;
- (void)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id *)arg2;
- (id)fp_addDocumentTrackingWithError:(id *)arg1;
- (_Bool)fp_makeWritableWithError:(id *)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 byCopying:(_Bool)arg2 error:(id *)arg3;
- (_Bool)fp_matchesLocalStorageURL;
- (_Bool)fp_matchesFileProviderURL;
- (void)fp_hideExtension:(_Bool)arg1;
- (_Bool)fp_isFolder;
- (unsigned long long)fp_fileSize;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_shortDescription;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
@end


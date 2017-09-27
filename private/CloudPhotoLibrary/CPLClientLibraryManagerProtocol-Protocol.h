//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLResource, NSData, NSDictionary, NSError, NSString;

@protocol CPLClientLibraryManagerProtocol <NSObject>
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg1;
- (void)libraryManagerHasStatusChanges;
- (void)libraryManagerHasChangesToPull;
- (void)uploadOfResource:(CPLResource *)arg1 didFinishForResourceTransferTask:(NSString *)arg2 withError:(NSError *)arg3;
- (void)uploadOfResource:(CPLResource *)arg1 didProgress:(float)arg2 forResourceTransferTask:(NSString *)arg3;
- (void)uploadDidStartForResource:(CPLResource *)arg1 withResourceTransferTask:(NSString *)arg2;
- (void)backgroundDownloadDidFailForResource:(CPLResource *)arg1;
- (void)backgroundDownloadDidFinishForResource:(CPLResource *)arg1;
- (void)inMemoryDownloadDidFinishForResourceTransferTask:(NSString *)arg1 data:(NSData *)arg2 withError:(NSError *)arg3;
- (void)downloadDidFinishForResourceTransferTask:(NSString *)arg1 finalResource:(CPLResource *)arg2 withError:(NSError *)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(NSString *)arg2;
- (void)downloadDidStartForResourceTransferTask:(NSString *)arg1;
@end


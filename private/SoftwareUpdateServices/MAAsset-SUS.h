//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAAsset.h"

@interface MAAsset (SUS)
- (_Bool)purge;
- (_Bool)cancelDownload;
- (void)cleanupAsset;
- (void)cancelDownloadIfNecessary;
- (_Bool)isEmergencyUpdate;
- (_Bool)isInstalled;
- (_Bool)isDownloading;
- (_Bool)isDownloadingOrInstalled;
@end


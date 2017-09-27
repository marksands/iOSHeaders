//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, NSUUID, SUDownloadMetadata, SUScanOptions;

@protocol SUManagerServerInterface
- (void)createInstallationKeybag:(NSString *)arg1 forUnattendedInstall:(_Bool)arg2 withResult:(void (^)(_Bool, NSError *))arg3;
- (void)slaVersion:(void (^)(NSNumber *, NSError *))arg1;
- (void)setClientType:(int)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)installUpdateWithOptions:(NSArray *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)installUpdate:(void (^)(_Bool, NSError *))arg1;
- (void)isUpdateReadyForInstallation:(void (^)(_Bool, NSError *))arg1;
- (void)isInstallationKeybagRequired:(void (^)(_Bool, NSError *))arg1;
- (void)consentToAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)cancelAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)currentAutoInstallOperation:(_Bool)arg1 withResult:(void (^)(_SUAutoInstallOperationModel *, NSError *))arg2;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(void (^)(NSNumber *, NSError *))arg1;
- (void)deviceHasSufficientSpaceForDownload:(void (^)(_Bool, NSError *))arg1;
- (void)downloadAndInstallState:(void (^)(SUDownload *, SUInstallPolicy *, _SUAutoInstallOperationModel *, NSError *))arg1;
- (void)updateDownloadMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)resumeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)pauseDownload:(void (^)(_Bool, NSError *))arg1;
- (void)purgeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)cancelDownload:(void (^)(_Bool, NSError *))arg1;
- (void)startDownloadWithMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)startDownload:(void (^)(_Bool, NSError *))arg1;
- (void)isDownloading:(void (^)(_Bool, NSError *))arg1;
- (void)scanForUpdates:(SUScanOptions *)arg1 withResult:(void (^)(SUDescriptor *, NSError *))arg2;
- (void)isScanning:(void (^)(_Bool, NSError *))arg1;
@end


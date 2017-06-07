//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, NSURL;

@protocol BLServiceProtocol
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(void (^)(NSError *))arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(void (^)(_Bool, _Bool, _Bool, _Bool, NSError *))arg1;
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(void (^)(NSError *))arg2;
- (void)requestDownloadsWithMetadata:(NSArray *)arg1 areRestore:(_Bool)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestDownloadWithMetadata:(NSDictionary *)arg1 isRestore:(_Bool)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestDownloadWithParameters:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)downloadWithPermlink:(NSURL *)arg1 title:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)purchaseWithBuyParameters:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)cancelAllActiveDownloadsWithReply:(void (^)(NSError *))arg1;
- (void)cancelDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)resumeDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)pauseDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)fetchDownloadFromDownloadID:(NSString *)arg1 withReply:(void (^)(BLDownload *, NSError *))arg2;
- (void)fetchDownloadListWithReply:(void (^)(NSArray *, NSError *))arg1;
@end


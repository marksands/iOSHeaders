//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudServices/NSObject-Protocol.h>

@class NSDictionary, NSString, SecureBackup;

@protocol SecureBackupProtocol <NSObject>
- (void)stateCaptureWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)notificationOccurred:(NSString *)arg1;
- (void)backupWithInfo:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)cachePassphraseWithRequestAsync:(SecureBackup *)arg1;
- (void)setBackOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)backOffDateWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getCountrySMSCodesWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startSMSChallengeWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)changeSMSTargetWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cacheRecoveryKeyWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)uncachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cachePassphraseWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateMetadataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)disableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)stashRecoveryDataWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)recoverWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)enableWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getAccountInfoWithRequest:(SecureBackup *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end


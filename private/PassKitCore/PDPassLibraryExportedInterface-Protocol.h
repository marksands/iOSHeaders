//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSData, NSSet, NSString, PKDisplayProfile;

@protocol PDPassLibraryExportedInterface <PDXPCServiceExportedInterface>
- (void)peerPaymentPassUniqueIDWithHandler:(void (^)(NSString *))arg1;
- (void)expressFelicaTransitPassWithHandler:(void (^)(PKPass *))arg1;
- (void)canAddFelicaPassWithHandler:(void (^)(_Bool))arg1;
- (void)defaultPaymentPassWithHandler:(void (^)(PKPaymentPass *))arg1;
- (void)countPassesOfType:(unsigned long long)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)canAddPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(void (^)(_Bool))arg2;
- (void)submitVerificationCode:(NSString *)arg1 verificationData:(NSData *)arg2 forPassWithUniqueID:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)isPaymentPassActivationAvailableWithHandler:(void (^)(_Bool))arg1;
- (void)getImageSetForUniqueID:(NSString *)arg1 ofType:(long long)arg2 displayProfile:(PKDisplayProfile *)arg3 handler:(void (^)(PKImageSet *))arg4;
- (void)getContentForUniqueID:(NSString *)arg1 handler:(void (^)(PKContent *))arg2;
- (void)getPassWithUniqueID:(NSString *)arg1 handler:(void (^)(PKPass *))arg2;
- (void)getPassWithPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(PKPass *))arg3;
- (void)getManifestHashAndSettingsForPassTypeID:(NSString *)arg1 serialNumber:(NSString *)arg2 handler:(void (^)(NSData *, unsigned long long))arg3;
- (void)getPassesOfType:(unsigned long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)getPassesWithHandler:(void (^)(NSSet *))arg1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(void (^)(NSSet *, PKCatalog *))arg3;
- (void)removePassesWithUniqueIDs:(NSArray *)arg1 diagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)removePassWithUniqueID:(NSString *)arg1 diagnosticReason:(NSString *)arg2 handler:(void (^)(void))arg3;
- (void)addPassesWithData:(NSSet *)arg1 handler:(void (^)(unsigned long long))arg2;
- (void)replacePassWithPassData:(NSData *)arg1 handler:(void (^)(_Bool))arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol CDPDSecureBackupProxy <NSObject>
- (void)setBackOffDateWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)backOffDateWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)disableWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)uncachePassphraseWithInfo:(NSDictionary *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (NSError *)disableWithInfo:(NSDictionary *)arg1;
- (NSError *)enableWithInfo:(NSDictionary *)arg1;
- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACAccountStore, NSArray, NSNumber, NSString;

@protocol FTPasswordManager <NSObject>
- (_Bool)isiCloudSignedIn;
- (NSString *)iCloudUsername;
- (void)cleanUpAccountsBasedOnInUseUsernames:(NSArray *)arg1 profileIDs:(NSArray *)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)cleanUpAccountsWithUsername:(NSString *)arg1 orProfileID:(NSString *)arg2 basedOnInUseUsernames:(NSArray *)arg3 profileIDs:(NSArray *)arg4 completionBlock:(void (^)(_Bool))arg5;
- (NSString *)profileIDForACAccount:(ACAccount *)arg1;
- (ACAccount *)acAccountWithProfileID:(NSString *)arg1 username:(NSString *)arg2 accountStore:(ACAccountStore *)arg3;
- (void)cancelRequestID:(NSString *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)setHandlesForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 handles:(NSArray *)arg4;
- (void)setAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 authToken:(NSString *)arg4 selfHandle:(NSString *)arg5 accountStatus:(NSNumber *)arg6 outRequestID:(id *)arg7 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg8;
- (void)setAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 authToken:(NSString *)arg4 selfHandle:(NSString *)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg7;
- (void)setPasswordForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 password:(NSString *)arg4 outRequestID:(id *)arg5 completionBlock:(void (^)(NSString *, NSString *, NSString *, _Bool))arg6;
- (void)requestAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 badPassword:(_Bool)arg4 showForgotPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *, _Bool, _Bool, _Bool))arg7;
- (void)requestPasswordForUsername:(NSString *)arg1 service:(NSString *)arg2 badPassword:(_Bool)arg3 showForgotPassword:(_Bool)arg4 shouldRememberPassword:(_Bool)arg5 outRequestID:(id *)arg6 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, _Bool, _Bool, _Bool))arg7;
- (void)fetchAuthTokenForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 outRequestID:(id *)arg4 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *))arg5;
- (void)fetchPasswordForProfileID:(NSString *)arg1 username:(NSString *)arg2 service:(NSString *)arg3 outRequestID:(id *)arg4 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSDictionary *, NSNumber *))arg5;
@end


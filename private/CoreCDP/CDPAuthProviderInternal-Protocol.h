//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, NSString;

@protocol CDPAuthProviderInternal <NSObject>
- (void)cdpContext:(CDPContext *)arg1 verifyMasterKey:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)cdpContext:(CDPContext *)arg1 performSilentRecoveryTokenRenewal:(void (^)(CDPContext *, NSError *))arg2;
@end


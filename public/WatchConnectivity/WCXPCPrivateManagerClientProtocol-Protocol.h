//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WCXPCPrivateManagerClientProtocol <NSObject>
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)isExtensionPrivileged:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)handlePingForExtensionBundleID:(NSString *)arg1;
@end


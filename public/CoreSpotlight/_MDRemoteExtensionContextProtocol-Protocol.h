//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MDExtensionContextProtocol.h"

@class CSIndexJob;

@protocol _MDRemoteExtensionContextProtocol <_MDExtensionContextProtocol>
- (void)getLastUpdateTimeWithCompletionHandler:(void (^)(double))arg1;
- (void)performJob:(CSIndexJob *)arg1 acknowledgementHandler:(void (^)(NSData *, NSError *))arg2;
@end


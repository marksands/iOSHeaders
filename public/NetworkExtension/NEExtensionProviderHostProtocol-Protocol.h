//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol NEExtensionProviderHostProtocol <NSObject>
- (void)displayMessage:(NSString *)arg1 message:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)startedWithError:(NSError *)arg1;
@end


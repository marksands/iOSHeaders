//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NFCallbackScope, NSString, Protocol;

@protocol NFCallbackRegistration <NSObject>
- (void)whenUnsafeResolvingWithKey:(NSString *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingProtocol:(Protocol *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
@end


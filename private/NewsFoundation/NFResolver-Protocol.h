//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, Protocol;

@protocol NFResolver <NSObject>
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(Class)arg1;
@end

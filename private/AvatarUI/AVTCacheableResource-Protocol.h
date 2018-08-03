//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AVTCacheableResource <NSObject>
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id <AVTCacheableResourceScope>)arg1;
- (NSString *)volatileIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;

@optional
- (id <AVTCacheableResourceChangeToken>)tokenForObservingChangesWithHandler:(void (^)(void))arg1;
- (NSString *)persistentIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;
@end


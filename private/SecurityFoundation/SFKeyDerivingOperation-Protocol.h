//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"
#import "NSSecureCoding.h"

@class _SFSymmetricKey, _SFSymmetricKeySpecifier;

@protocol SFKeyDerivingOperation <NSObject, NSCopying, NSSecureCoding>
+ (long long)keySource;
- (_SFSymmetricKey *)deriveKeyWithSpecifier:(_SFSymmetricKeySpecifier *)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
@end


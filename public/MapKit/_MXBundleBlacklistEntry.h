//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _MXVersion;

__attribute__((visibility("hidden")))
@interface _MXBundleBlacklistEntry : NSObject
{
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isExtensionAllowed:(id)arg1;
- (_Bool)isBundleProxyAllowed:(id)arg1;
- (_Bool)_isVersionValueAllowed:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery
{
    unsigned int _plistFlags;
    unsigned long long _bundleFlags;
}

+ (_Bool)supportsSecureCoding;
+ (id)queryWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long bundleFlags; // @synthesize bundleFlags=_bundleFlags;
@property(readonly, nonatomic) unsigned int plistFlags; // @synthesize plistFlags=_plistFlags;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end


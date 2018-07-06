//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLocalizable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding>
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _updateVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long updateVersion; // @synthesize updateVersion=_updateVersion;
@property(readonly) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isGreaterThanVersion:(id)arg1;
- (_Bool)isAtLeastVersion:(id)arg1;
- (_Bool)isEqualToVersion:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *localizedDescription;
- (id)description;
@property(readonly, copy) NSString *versionString;
- (id)initWithVersionString:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)init;

@end


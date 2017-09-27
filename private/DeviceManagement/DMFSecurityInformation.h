//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsBlockLevelEncryption;
    _Bool _supportsFileLevelEncryption;
    _Bool _passcodeIsSet;
    _Bool _passcodeIsCompliantWithGlobalRestrictions;
    _Bool _passcodeIsCompliantWithProfileRestrictions;
    unsigned long long _passcodeLockGracePeriod;
    unsigned long long _passcodeLockGracePeriodEnforced;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long passcodeLockGracePeriodEnforced; // @synthesize passcodeLockGracePeriodEnforced=_passcodeLockGracePeriodEnforced;
@property(readonly, nonatomic) unsigned long long passcodeLockGracePeriod; // @synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod;
@property(readonly, nonatomic) _Bool passcodeIsCompliantWithProfileRestrictions; // @synthesize passcodeIsCompliantWithProfileRestrictions=_passcodeIsCompliantWithProfileRestrictions;
@property(readonly, nonatomic) _Bool passcodeIsCompliantWithGlobalRestrictions; // @synthesize passcodeIsCompliantWithGlobalRestrictions=_passcodeIsCompliantWithGlobalRestrictions;
@property(readonly, nonatomic) _Bool passcodeIsSet; // @synthesize passcodeIsSet=_passcodeIsSet;
@property(readonly, nonatomic) _Bool supportsFileLevelEncryption; // @synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption;
@property(readonly, nonatomic) _Bool supportsBlockLevelEncryption; // @synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSupportsBlockLevelEncryption:(_Bool)arg1 supportsFileLevelEncryption:(_Bool)arg2 passcodeIsSet:(_Bool)arg3 passcodeIsCompliantWithGlobalRestrictions:(_Bool)arg4 passcodeIsCompliantWithProfileRestrictions:(_Bool)arg5 passcodeLockGracePeriodEnforced:(unsigned long long)arg6 passcodeLockGracePeriod:(unsigned long long)arg7;

@end


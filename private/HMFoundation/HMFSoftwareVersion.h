//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion
{
    NSString *_buildVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(CDStruct_2ec95fd7)arg1;
@property(readonly, copy) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_2ec95fd7)operatingSystemVersion;
- (long long)compare:(id)arg1;
- (id)versionString;
- (id)initWithVersionString:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;

@end


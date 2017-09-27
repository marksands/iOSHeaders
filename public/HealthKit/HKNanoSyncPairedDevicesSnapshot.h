//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HKNanoSyncPairedDeviceInfo, NSSet;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    HKNanoSyncPairedDeviceInfo *_activeDeviceInfo;
    NSSet *_allDeviceInfos;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)deviceInfoForSourceBundleIdentifier:(id)arg1;
@property(readonly, copy) NSSet *allDeviceInfos;
@property(readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
- (id)initWithPairedDeviceInfos:(id)arg1;

@end


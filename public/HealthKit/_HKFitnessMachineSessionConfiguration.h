//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;
    NSUUID *_connectionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property(readonly, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property(readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(readonly, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void).cxx_destruct;
- (void)_setMachineBrand:(id)arg1;
- (void)_setMachineName:(id)arg1;
- (void)_setMachineType:(unsigned long long)arg1;
- (void)_setMachineUUID:(id)arg1;
- (void)_setConnectionUUID:(id)arg1;
- (void)_setSessionUUID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


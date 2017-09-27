//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSSecureCoding.h"

@class HMDAccessory, NSUUID;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding>
{
    NSUUID *_identifier;
    HMDAccessory *_accessory;
    long long _state;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;

@end


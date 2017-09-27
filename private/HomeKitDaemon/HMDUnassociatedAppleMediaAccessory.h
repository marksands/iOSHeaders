//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>

@class HMDDevice;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory
{
    HMDDevice *_device;
}

+ (_Bool)supportsSecureCoding;
+ (Class)modelClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpDescription;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
@property(retain) HMDDevice *device; // @synthesize device=_device;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;
- (id)initWithIdentifier:(id)arg1 device:(id)arg2 messageDispatcher:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicEventBaseModel.h>

@class NSNumber;

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(_Bool)arg5;
+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSNumber *max; // @dynamic max;
@property(retain, nonatomic) NSNumber *min; // @dynamic min;

@end


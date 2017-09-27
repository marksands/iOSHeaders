//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute
{
    CBCharacteristic *_characteristic;
    id _value;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
}

@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain) id value; // @synthesize value=_value;
@property(nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (void)invalidate;
- (id)description;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;

@end


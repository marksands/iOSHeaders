//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMCharacteristicThresholdRangeEvent.h"

#import "HFPrettyDescription.h"
#import "HFStateDumpSerializable.h"

@class NSString;

@interface HMCharacteristicThresholdRangeEvent (HFDebugging) <HFPrettyDescription, HFStateDumpSerializable>
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


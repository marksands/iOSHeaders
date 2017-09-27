//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMLocationEvent.h"

#import "HFLocationBasedEvent.h"

@class NSString;

@interface HMLocationEvent (HFAdditions) <HFLocationBasedEvent>
+ (_Bool)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;
- (_Bool)hf_isRegionAtHome:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_eventType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


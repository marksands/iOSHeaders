//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
{
}

- (id)_iconDescriptorForValveType:(unsigned long long)arg1 primaryState:(long long)arg2 hasFaucetAsParentService:(_Bool)arg3;
- (id)_faucetValveTypeCharacteristicInfo;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class NSNumber;

@interface HMCharacteristicMetadata (HFAdditions)
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_characteristicValueForPercentage:(double)arg1;
@property(readonly, nonatomic) _Bool hf_isNumeric;
- (_Bool)hf_isValidValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
@property(readonly, nonatomic) NSNumber *hf_effectiveStepValue;
- (_Bool)hf_isEqualToMetadata:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUnit.h"

@interface NSUnit (HKUnit)
+ (_Bool)hk_equalConstant:(double)arg1 forUnit:(id)arg2;
+ (_Bool)hk_equalCoefficient:(double)arg1 forUnit:(id)arg2;
+ (id)hk_prefixForCoefficient:(double)arg1;
+ (_Bool)hk_isSIUnit:(id)arg1;
+ (double)hk_conversionConstant:(id)arg1;
+ (double)hk_conversionCoefficient:(id)arg1;
- (id)hk_convertQuantityWithValue:(double)arg1 constant:(double)arg2 coefficient:(double)arg3;
- (id)hk_equivalentQuantityWithValue:(double)arg1;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;
- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentUnit;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RECondition.h>

@interface REComparisonCondition : RECondition
{
}

+ (id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3;
+ (id)falseCondition;
+ (id)trueCondition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_inflectionFeatureValuePairs;
- (_Bool)_validForRanking;

@end


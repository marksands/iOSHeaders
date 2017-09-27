//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICAnalyticsReporterBase : NSObject
{
    id <ICAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;
}

+ (long long)roundIntegerValue:(long long)arg1;
+ (double)roundDoubleValue:(double)arg1;
+ (id)instrumentationKeyForKey:(id)arg1;
@property(nonatomic) __weak id <ICAnalyticsReporterAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (id)whitelistedSubkeysForAccessibilityForKey:(id)arg1;
- (id)whitelistedKeysForAccessibility;
- (void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2;
- (void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (_Bool)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)instrumentationKeyForKey:(id)arg1;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;

@end


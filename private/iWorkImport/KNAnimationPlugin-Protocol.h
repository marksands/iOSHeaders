//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimatedBuild, KNAnimationContext, KNAnimationPluginMenu, NSArray, NSDictionary, NSString;

@protocol KNAnimationPlugin <NSObject>
+ (NSString *)thumbnailImageNameForType:(long long)arg1;
+ (NSDictionary *)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(KNAnimationPluginMenu *)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (NSString *)localizedMenuString:(long long)arg1;
+ (NSArray *)supportedTypes;
+ (NSString *)animationFilter;
+ (long long)animationCategory;
+ (NSString *)animationName;
- (id)initWithAnimationContext:(KNAnimationContext *)arg1;

@optional
+ (long long)rendererTypeForAnimationContext:(KNAnimationContext *)arg1;
+ (NSDictionary *)customEffectTimingCurveDisplayParametersForAttributes:(NSDictionary *)arg1 layoutStyleOnly:(_Bool)arg2;
+ (NSArray *)customAttributes;
- (NSDictionary *)animationInfoForAnimatedBuild:(KNAnimatedBuild *)arg1;
@end


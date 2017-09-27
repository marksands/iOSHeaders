//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationAttributes : NSObject <NSCopying>
{
    NSString *_effect;
    NSDictionary *_attributes;
}

+ (_Bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;
+ (id)attributesWithEffect:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *effect; // @synthesize effect=_effect;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)p_curveForNameKey:(id)arg1 forTheme:(id)arg2;
- (id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg1;
- (id)attributesAdjustedForTheme:(id)arg1;
- (id)valueForAttributeKey:(id)arg1;
- (_Bool)containsAttributeForKey:(id)arg1;
- (id)attributesByRemovingAttributeForKey:(id)arg1;
- (id)attributesByAddingMissingAttributesFromDictionary:(id)arg1;
- (id)attributesByAddingAttributesFromDictionary:(id)arg1;
- (id)attributesByChangingEffectToEffect:(id)arg1;
- (id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2;
- (id)attributesByAddingAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEffect:(id)arg1 attributes:(id)arg2;

@end


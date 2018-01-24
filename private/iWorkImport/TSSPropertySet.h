//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying>
{
    id mIndexSet;
}

+ (id)propertySetFromUnionOfPropertySets:(id)arg1;
+ (id)propertySetWithArray:(id)arg1;
+ (id)propertySet;
+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySetWithProperty:(int)arg1;
+ (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyStrings;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (_Bool)intersectsProperties:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsProperties:(id)arg1;
- (_Bool)containsProperty:(int)arg1;
- (unsigned long long)count;
- (id)initWithProperties:(int)arg1;
- (id)initWithPropertySet:(id)arg1;
- (id)initWithFirstProperty:(int)arg1 argumentList:(struct __va_list_tag [1])arg2;
- (void)dealloc;
- (id)init;
- (id)initWithIndexSet:(id)arg1;

@end


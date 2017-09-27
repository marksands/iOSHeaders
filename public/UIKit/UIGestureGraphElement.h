//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject
{
    NSMutableDictionary *_properties;
    NSString *_label;
}

@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasProperties:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)initWithLabel:(id)arg1;

@end


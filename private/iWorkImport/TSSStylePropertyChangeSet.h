//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

__attribute__((visibility("hidden")))
@interface TSSStylePropertyChangeSet : TSKSosBase
{
}

- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToChangeSet:(id)arg1;
- (id)propertyChangeFilteredByProperties:(id)arg1;
- (_Bool)isEmptyChangeSet;
- (id)changedPropertyPaths;
- (id)variationStyleFrom:(id)arg1 inStylesheet:(id)arg2;
- (id)variationPropertyMapFromParentStyle:(id)arg1;
- (id)variationPropertyMapFromStyle:(id)arg1;
- (id)p_variationPropertyMapFromStyle:(id)arg1 withPropertyMap:(id)arg2;
- (id)collectUnset;
- (id)collectUndoForStyle:(id)arg1;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;

@end


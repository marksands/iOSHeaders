//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

@interface EAEmailAddressSet : NSMutableSet
{
    NSMutableSet *_internalSet;
}

+ (id)setWithCapacity:(unsigned long long)arg1;
+ (id)set;
@property(retain, nonatomic) NSMutableSet *internalSet; // @synthesize internalSet=_internalSet;
- (void).cxx_destruct;
- (void)setSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)allObjects;
- (_Bool)isEqualToSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end


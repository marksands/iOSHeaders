//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}

+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)orderedDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy) NSArray *allKeys;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end


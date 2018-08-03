//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface REKeyValueMap : NSObject
{
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

- (void).cxx_destruct;
- (id)keyForValue:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)addKey:(id)arg1 withValue:(id)arg2;
- (unsigned long long)valueCount;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSSingleEntryDictionaryI : NSDictionary
{
    id _obj;
    id _key;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (unsigned long long)count;

@end


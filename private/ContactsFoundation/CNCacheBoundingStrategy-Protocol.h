//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol CNCacheBoundingStrategy <NSObject>
- (void)willAccessKey:(id <NSCopying>)arg1;
- (_Bool)shouldEvictKey:(id <NSCopying>)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id <NSCopying>)arg2 keysToEvict:(id *)arg3;
@end


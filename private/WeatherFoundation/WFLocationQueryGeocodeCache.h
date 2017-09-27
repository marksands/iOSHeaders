//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WFLocationQueryGeocodeCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheAge;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    double _expirationInterval;
}

@property(nonatomic) double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
- (void).cxx_destruct;
- (_Bool)_shouldEvictObjectWithDate:(id)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)init;

@end


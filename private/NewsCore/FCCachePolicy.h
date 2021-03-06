//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCCachePolicy : NSObject
{
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
}

+ (id)cachePolicyWithSoftMaxAge:(double)arg1;
+ (id)ignoreCacheCachePolicy;
+ (id)cachedOnlyCachePolicy;
+ (id)defaultCachePolicy;
@property(nonatomic) double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;

@end


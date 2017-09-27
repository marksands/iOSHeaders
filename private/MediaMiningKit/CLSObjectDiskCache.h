//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CLSObjectDiskCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheFilePathForIdentifiers;
}

+ (id)defaultBundleDiskCache;
+ (id)defaultUserDiskCache;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forIdentifier:(id)arg2;
- (id)objectForIdentifier:(id)arg1;
- (_Bool)hasObjectForIdentifier:(id)arg1;
- (void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invalidateDiskCacheForIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)invalidateDiskCaches:(CDUnknownBlockType)arg1;
- (id)_diskCacheFilePathForIdentifier:(id)arg1;
- (id)initWithDiskCacheDirectory:(id)arg1;
- (id)init;

@end


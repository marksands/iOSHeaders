//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NRGResourceCache : NSObject
{
}

+ (id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconCacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg1;
+ (id)cacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)arg1;
+ (void)invalidatePairedDevice:(id)arg1;
+ (void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;

@end


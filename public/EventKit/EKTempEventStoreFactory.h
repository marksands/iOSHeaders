//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EKTempEventStoreFactory : NSObject
{
}

+ (void)_makeEmptyDBInDirectory:(id)arg1;
+ (void)_setupCoreDataInDirectory:(id)arg1;
+ (void)_createEmptyDirectory:(id)arg1;
+ (void)createTempCalendarStoreAtDirectory:(id)arg1;
+ (id)_tempBase;
+ (id)tempCalendarStoreDirectory:(id *)arg1;
+ (int)_storeTypeForTestBackingStoreType:(long long)arg1;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id *)arg3 forDirectory:(id *)arg4 existingPath:(id)arg5;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id *)arg3 forDirectory:(id *)arg4;
+ (void)createTempCalendarStoreForPath:(id *)arg1 forDirectory:(id *)arg2;
+ (id)createEventStoreWithType:(long long)arg1;

@end


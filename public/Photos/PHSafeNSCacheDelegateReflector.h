//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSLock, NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate>
{
    NSMapTable *_delegegatesByCache;
    NSLock *_lock;
}

+ (void)removeDelegateForCache:(id)arg1;
+ (void)setDelegate:(id)arg1 forCache:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeDelegateForCache:(id)arg1;
- (void)setDelegate:(id)arg1 forCache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


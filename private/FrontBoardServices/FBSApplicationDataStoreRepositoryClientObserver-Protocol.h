//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FBSApplicationDataStoreRepositoryClientObserver <NSObject>

@optional
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 storeInvalidatedForApplication:(NSString *)arg2;
- (void)applicationDataStoreRepositoryClient:(id <FBSApplicationDataStoreRepositoryClient>)arg1 application:(NSString *)arg2 changedObject:(id)arg3 forKey:(NSString *)arg4;
@end


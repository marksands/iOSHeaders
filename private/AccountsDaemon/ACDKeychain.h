//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDKeychain : NSObject
{
}

+ (void)_migrateKeychainItemIfNecessary:(id)arg1;
+ (void)_addKnownMigratedKeychainItem:(id)arg1;
+ (_Bool)_isKnownMigratedKeychainItem:(id)arg1;
+ (id)_knownMigratedKeychainItems;
+ (id)keychainDeletedAccounts;
+ (_Bool)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id *)arg5;
+ (_Bool)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (_Bool)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2;
+ (id)_knownMissingKeychainItems;

@end


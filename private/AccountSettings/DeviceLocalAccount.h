//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountSettings/BasicAccount.h>

#import "AccountCreationProtocol.h"

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
{
}

+ (id)accountWithBasicAccount:(id)arg1;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (_Bool)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
+ (id)typeString;
+ (id)basicAccountProperties;
+ (id)_identifier;
- (id)syncStoreIdentifier;
- (id)displayName;
- (id)identifier;

@end


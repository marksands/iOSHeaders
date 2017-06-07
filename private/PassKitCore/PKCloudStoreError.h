//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
{
}

+ (_Bool)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)_allPartialErrors;
- (_Bool)isNetworkUnavailable;
- (_Bool)isKeychainSyncingInProgress;
- (_Bool)isAccountRequiresiCDPError;
- (_Bool)isUnrecoverableDecryptionError;
- (_Bool)isPartialError;
- (_Bool)isChangeTokenExpired;
- (id)initWithError:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end


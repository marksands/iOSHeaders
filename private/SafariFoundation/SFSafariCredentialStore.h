//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFSafariCredentialStore : NSObject
{
}

+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)isAppAutoFillAvailable;

@end


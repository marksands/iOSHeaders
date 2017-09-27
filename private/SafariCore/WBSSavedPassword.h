//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface WBSSavedPassword : NSObject
{
    NSMutableDictionary *_siteToProtectionSpaces;
    NSMutableArray *_sites;
    _Bool _userIsNeverSaveMarker;
    NSString *_highLevelDomain;
    NSString *_user;
    NSString *_password;
    NSDate *_earliestModifiedDateForSites;
}

@property(readonly, nonatomic) NSDate *earliestModifiedDateForSites; // @synthesize earliestModifiedDateForSites=_earliestModifiedDateForSites;
@property(readonly, nonatomic) _Bool userIsNeverSaveMarker; // @synthesize userIsNeverSaveMarker=_userIsNeverSaveMarker;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *highLevelDomain; // @synthesize highLevelDomain=_highLevelDomain;
- (void).cxx_destruct;
- (void)_adoptSitesFromSavedPassword:(id)arg1;
- (void)_setUser:(id)arg1 password:(id)arg2;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSArray *protectionSpaces;
@property(readonly, nonatomic) NSArray *sites;
- (void)_deleteCredentialsForSite:(id)arg1;
- (void)_deleteCredentials;
- (void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2;
- (_Bool)_containsProtectionSpace:(id)arg1;
- (void)_addModificationDate:(id)arg1;
- (void)_addProtectionSpace:(id)arg1 forSite:(id)arg2;
- (id)description;
- (id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3;

@end


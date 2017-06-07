//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/AIDAServiceOwnerProtocol-Protocol.h>

@class ACAccountStore, NSDictionary, NSString;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol>
{
    ACAccountStore *_accountStore;
    NSDictionary *_serviceOwners;
}

+ (id)supportedServices;
+ (id)serviceOwnerBundles;
@property(copy, nonatomic) NSDictionary *serviceOwners; // @synthesize serviceOwners=_serviceOwners;
- (void).cxx_destruct;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)accountForService:(id)arg1;
- (id)initWithAccountStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


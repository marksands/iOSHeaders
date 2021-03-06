//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNManagedProfileConnection.h"

@class MCProfileConnection, NSString;

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection>
{
    MCProfileConnection *_profileConnection;
}

+ (id)sharedConnection;
@property(retain, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
- (void).cxx_destruct;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
- (_Bool)isOpenInRestrictionInEffect;
- (id)initWithProfileConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


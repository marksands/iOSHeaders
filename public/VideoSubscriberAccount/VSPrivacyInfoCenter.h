//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver>
{
    int _registrationToken;
    long long _accountAccessStatus;
}

+ (id)sharedPrivacyInfoCenter;
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) long long accountAccessStatus; // @synthesize accountAccessStatus=_accountAccessStatus;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;
- (void)_invalidateAccountAccessStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


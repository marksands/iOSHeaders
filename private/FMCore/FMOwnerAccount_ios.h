//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCore/FMOwnerAccount.h>

@class ACAccount;

__attribute__((visibility("hidden")))
@interface FMOwnerAccount_ios : FMOwnerAccount
{
    ACAccount *_account;
}

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)hostNameOfType:(long long)arg1;
- (id)tokenOfType:(long long)arg1;
- (id)dataclassProperties;
- (id)lastName;
- (id)firstName;
- (id)username;
- (id)personId;
- (void)initializeAccount;
- (void)accountChanged;
- (void)dealloc;
- (id)init;

@end

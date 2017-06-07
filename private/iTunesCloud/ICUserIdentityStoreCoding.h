//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICDelegateAccountStoreOptions, ICValueHistory;
@protocol ICUserIdentityStoreBackend;

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;
    long long _identityStoreStyle;
    long long _uniqueIdentifier;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions; // @synthesize delegateAccountStoreOptions=_delegateAccountStoreOptions;
@property(copy, nonatomic) id <ICUserIdentityStoreBackend> backend; // @synthesize backend=_backend;
@property(copy, nonatomic) ICValueHistory *activeLockerAccountHistory; // @synthesize activeLockerAccountHistory=_activeLockerAccountHistory;
@property(copy, nonatomic) ICValueHistory *activeAccountHistory; // @synthesize activeAccountHistory=_activeAccountHistory;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) long long identityStoreStyle; // @synthesize identityStoreStyle=_identityStoreStyle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)lock:(CDUnknownBlockType)arg1;
- (id)initWithIdentityStoreStyle:(long long)arg1;
- (id)_initCommon;

@end


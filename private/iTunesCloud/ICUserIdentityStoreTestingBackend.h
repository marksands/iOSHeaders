//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ICUserVerificationContext, NSMutableDictionary, NSNumber, NSString;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>
{
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
}

+ (_Bool)supportsSecureCoding;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
@property(copy, nonatomic) NSNumber *activeLockerAccountDSID; // @synthesize activeLockerAccountDSID=_activeLockerAccountDSID;
@property(copy, nonatomic) NSNumber *activeAccountDSID; // @synthesize activeAccountDSID=_activeAccountDSID;
- (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContextToEstablishAccount;
- (id)verificationContextForDSID:(id)arg1;
- (void)synchronize;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeIdentityForDSID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)identityPropertiesForDSID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


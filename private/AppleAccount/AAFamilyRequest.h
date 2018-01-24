//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, ACAccount;

@interface AAFamilyRequest : AARequest
{
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
}

- (void).cxx_destruct;
- (id)urlRequest;
@property(readonly, nonatomic) _Bool isUserInitiated;
- (id)_familyGrandSlamSigner;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;

@end


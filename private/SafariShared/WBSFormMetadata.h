//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface WBSFormMetadata : NSObject <NSSecureCoding>
{
    NSNumber *_containsAtLeastOneSecureTextField;
    NSArray *_controls;
    _Bool _allowsAutocomplete;
    _Bool _containsActiveElement;
    _Bool _bestForCredentialPreFill;
    _Bool _bestForPageLevelAutoFill;
    _Bool _bestForStreamlinedLogin;
    _Bool _visible;
    _Bool _usesRelAsync;
    _Bool _usesGeneratedPassword;
    _Bool _isSearchForm;
    NSDictionary *_annotations;
    unsigned long long _type;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    NSURL *_action;
    long long _uniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_textSample;
    NSString *_userNameElementUniqueID;
    unsigned long long _requestType;
    NSDictionary *_passwordRequirements;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *passwordRequirements; // @synthesize passwordRequirements=_passwordRequirements;
@property(readonly, nonatomic) _Bool isSearchForm; // @synthesize isSearchForm=_isSearchForm;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) _Bool usesGeneratedPassword; // @synthesize usesGeneratedPassword=_usesGeneratedPassword;
@property(readonly, copy, nonatomic) NSString *userNameElementUniqueID; // @synthesize userNameElementUniqueID=_userNameElementUniqueID;
@property(readonly, copy, nonatomic) NSString *textSample; // @synthesize textSample=_textSample;
@property(readonly, copy, nonatomic) NSString *passwordElementUniqueID; // @synthesize passwordElementUniqueID=_passwordElementUniqueID;
@property(readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID; // @synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID;
@property(readonly, nonatomic) _Bool usesRelAsync; // @synthesize usesRelAsync=_usesRelAsync;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic, getter=isBestForStreamlinedLogin) _Bool bestForStreamlinedLogin; // @synthesize bestForStreamlinedLogin=_bestForStreamlinedLogin;
@property(readonly, nonatomic, getter=isBestForPageLevelAutoFill) _Bool bestForPageLevelAutoFill; // @synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill;
@property(readonly, nonatomic, getter=isBestForCredentialPreFill) _Bool bestForCredentialPreFill; // @synthesize bestForCredentialPreFill=_bestForCredentialPreFill;
@property(readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID; // @synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property(readonly, nonatomic) _Bool containsActiveElement; // @synthesize containsActiveElement=_containsActiveElement;
@property(readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID; // @synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) _Bool allowsAutocomplete; // @synthesize allowsAutocomplete=_allowsAutocomplete;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool containsAtLeastOneSecureTextField;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (id)_init;
- (id)initWithJSValue:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSArray *controls;
- (_Bool)isEqual:(id)arg1;

@end


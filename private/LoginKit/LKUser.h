//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserManagement/UMMutableUser.h>

#import <LoginKit/NSCopying-Protocol.h>
#import <LoginKit/NSSecureCoding-Protocol.h>

@class CNContact, NSDate, NSMutableDictionary, NSString, NSURL;

@interface LKUser : UMMutableUser <NSSecureCoding, NSCopying>
{
    _Bool _needFederatedAuthFlow;
    _Bool _isPhoneticInfoProvidedInConfiguration;
    _Bool _isAttemptedPhoneticTranscription;
    NSString *_passwordType;
    NSURL *_mediumImageURL;
    NSURL *_largeImageURL;
    NSString *_identifier;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSDate *_lastOnlineAuth;
    NSURL *_localMediumImageURL;
    NSURL *_localLargeImageURL;
    long long _retryCount;
    CNContact *_contact;
    NSMutableDictionary *_namingSimilarityInfoByClassID;
    NSString *_tokenizedPhoneticDisplayName;
}

+ (id)userFromDictionary:(id)arg1;
+ (id)userFromUMUser:(id)arg1;
+ (void)setAutogeneratesPhoneticNameWithLocale:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isAttemptedPhoneticTranscription; // @synthesize isAttemptedPhoneticTranscription=_isAttemptedPhoneticTranscription;
@property(retain, nonatomic) NSString *tokenizedPhoneticDisplayName; // @synthesize tokenizedPhoneticDisplayName=_tokenizedPhoneticDisplayName;
@property(nonatomic) _Bool isPhoneticInfoProvidedInConfiguration; // @synthesize isPhoneticInfoProvidedInConfiguration=_isPhoneticInfoProvidedInConfiguration;
@property(retain, nonatomic) NSMutableDictionary *namingSimilarityInfoByClassID; // @synthesize namingSimilarityInfoByClassID=_namingSimilarityInfoByClassID;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURL *localLargeImageURL; // @synthesize localLargeImageURL=_localLargeImageURL;
@property(retain, nonatomic) NSURL *localMediumImageURL; // @synthesize localMediumImageURL=_localMediumImageURL;
@property(retain, nonatomic) NSDate *lastOnlineAuth; // @synthesize lastOnlineAuth=_lastOnlineAuth;
@property(nonatomic) _Bool needFederatedAuthFlow; // @synthesize needFederatedAuthFlow=_needFederatedAuthFlow;
@property(retain, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(retain, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSURL *largeImageURL; // @synthesize largeImageURL=_largeImageURL;
@property(retain, nonatomic) NSURL *mediumImageURL; // @synthesize mediumImageURL=_mediumImageURL;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
- (void).cxx_destruct;
- (void)setDiffUMUserPropertiesFromUMUser:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToLKUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSPersonNameComponents, NSString, UIImage;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_userIdentifier;
    NSString *_displayName;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    NSString *_imageIdentifier;
    NSString *_imageURL;
    NSString *_userSource;
    NSData *_userImageData;
    UIImage *_userImage;
}

+ (_Bool)supportsSecureCoding;
+ (id)meCardUser;
@property(copy, nonatomic) UIImage *userImage; // @synthesize userImage=_userImage;
@property(copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;
@property(copy, nonatomic) NSString *userSource; // @synthesize userSource=_userSource;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)updateUserImage;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isMeCardUser;
- (id)dictionaryValue;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
- (id)initWithDictionary:(id)arg1;

@end

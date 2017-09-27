//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _includeAccountProviderIdentifier;
    _Bool _includeAuthenticationExpirationDate;
    _Bool _interruptionAllowed;
    _Bool _forceAuthentication;
    NSString *_channelIdentifier;
    NSArray *_supportedAccountProviderIdentifiers;
    NSArray *_featuredAccountProviderIdentifiers;
    NSString *_verificationToken;
    NSString *_localizedVideoTitle;
    NSArray *_attributeNames;
    NSArray *_supportedAuthenticationSchemes;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *supportedAuthenticationSchemes; // @synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes;
@property(copy, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(nonatomic, getter=isInterruptionAllowed) _Bool interruptionAllowed; // @synthesize interruptionAllowed=_interruptionAllowed;
@property(copy, nonatomic) NSString *localizedVideoTitle; // @synthesize localizedVideoTitle=_localizedVideoTitle;
@property(nonatomic) _Bool includeAuthenticationExpirationDate; // @synthesize includeAuthenticationExpirationDate=_includeAuthenticationExpirationDate;
@property(nonatomic) _Bool includeAccountProviderIdentifier; // @synthesize includeAccountProviderIdentifier=_includeAccountProviderIdentifier;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(copy, nonatomic) NSArray *featuredAccountProviderIdentifiers; // @synthesize featuredAccountProviderIdentifiers=_featuredAccountProviderIdentifiers;
@property(copy, nonatomic) NSArray *supportedAccountProviderIdentifiers; // @synthesize supportedAccountProviderIdentifiers=_supportedAccountProviderIdentifiers;
@property(copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


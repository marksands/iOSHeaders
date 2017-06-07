//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/NSCopying-Protocol.h>
#import <ContactsDonation/NSMutableCopying-Protocol.h>
#import <ContactsDonation/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSString *_donationIdentifier;
    NSString *_clusterIdentifier;
    NSDate *_donationDate;
    NSDate *_expirationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDate *donationDate; // @synthesize donationDate=_donationDate;
@property(readonly, copy, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property(readonly, copy, nonatomic) NSString *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4;
- (id)initWithDonationOrigin:(id)arg1;

@end


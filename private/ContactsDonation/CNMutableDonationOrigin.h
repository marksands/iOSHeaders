//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsDonation/CNDonationOrigin.h>

@class NSDate, NSString;

@interface CNMutableDonationOrigin : CNDonationOrigin
{
}

+ (id)new;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSDate *donationDate; // @dynamic donationDate;
@property(copy, nonatomic) NSString *clusterIdentifier; // @dynamic clusterIdentifier;
@property(copy, nonatomic) NSString *donationIdentifier; // @dynamic donationIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
- (id)init;

@end


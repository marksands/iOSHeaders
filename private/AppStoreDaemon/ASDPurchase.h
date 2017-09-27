//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_buyParameters;
    _Bool _createsJobs;
    _Bool _displaysOnLockScreen;
    _Bool _isBackgroundUpdate;
    _Bool _isRedownload;
    _Bool _shouldCancelForInstalledBundleItems;
    _Bool _sendGUID;
    NSString *_bundleID;
    NSNumber *_itemID;
    NSString *_itemName;
    NSString *_vendorName;
    NSDictionary *_additionalHeaders;
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    NSString *_bagKey;
    long long _extensionsToEnable;
    NSArray *_gratisIdentifiers;
    NSString *_referrerName;
    NSString *_referrerURL;
    long long _purchaseID;
    NSArray *_requiredCapabilities;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool sendGUID; // @synthesize sendGUID=_sendGUID;
@property(nonatomic) _Bool shouldCancelForInstalledBundleItems; // @synthesize shouldCancelForInstalledBundleItems=_shouldCancelForInstalledBundleItems;
@property(copy, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property long long purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) _Bool isRedownload; // @synthesize isRedownload=_isRedownload;
@property(copy, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *referrerName; // @synthesize referrerName=_referrerName;
@property(nonatomic) _Bool isBackgroundUpdate; // @synthesize isBackgroundUpdate=_isBackgroundUpdate;
@property(copy, nonatomic) NSArray *gratisIdentifiers; // @synthesize gratisIdentifiers=_gratisIdentifiers;
@property long long extensionsToEnable; // @synthesize extensionsToEnable=_extensionsToEnable;
@property(nonatomic) _Bool displaysOnLockScreen; // @synthesize displaysOnLockScreen=_displaysOnLockScreen;
@property(nonatomic) _Bool createsJobs; // @synthesize createsJobs=_createsJobs;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)firstValueForBuyParameter:(id)arg1;
- (void)appendValue:(id)arg1 forBuyParameter:(id)arg2;
@property(copy, nonatomic) NSString *buyParameters;
- (id)init;

@end


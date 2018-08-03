//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CTCategory : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSArray *_webDomains;
    NSString *_secondaryIdentifier;
    NSString *_resourceString;
}

+ (void)_identifierUsingContextKit:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (id)_lookupDHIDInInfoPlist:(id)arg1 key:(unsigned long long)arg2;
+ (void)_lookupAppStoreUsing:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_AppStoreIDToDHIDCategoriesMap;
+ (id)_AppStoreToDHIDCategoriesMap;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)_DHIDtoPrimaryCategoriesMap;
+ (void)categoryForDomainName:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)categoryForDomainURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)categoryForBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)localizedNameForIdentifier:(id)arg1;
+ (id)primaryLocalizedNameForIdentifier:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)initialize;
@property(copy, nonatomic) NSString *resourceString; // @synthesize resourceString=_resourceString;
@property(copy, nonatomic) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(copy, nonatomic) NSArray *webDomains; // @synthesize webDomains=_webDomains;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCategory:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *secondaryLocalizedName;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *primaryLocalizedName;
@property(readonly, copy, nonatomic) NSString *primaryIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_ctCategoryCommonInitWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;

@end


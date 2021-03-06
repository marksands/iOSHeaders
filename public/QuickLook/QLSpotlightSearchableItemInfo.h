//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QLSpotlightSearchableItemInfo : NSObject <NSSecureCoding>
{
    NSString *_queryString;
    NSString *_searchableItemUniqueIdentifier;
    NSString *_applicationBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)spotlightInfoWithUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *searchableItemUniqueIdentifier; // @synthesize searchableItemUniqueIdentifier=_searchableItemUniqueIdentifier;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


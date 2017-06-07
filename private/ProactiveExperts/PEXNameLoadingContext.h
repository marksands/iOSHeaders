//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperts/NSCopying-Protocol.h>
#import <ProactiveExperts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PEXNameLoadingContext : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleIdentifier;
    NSArray *_recipients;
}

+ (_Bool)supportsSecureCoding;
+ (id)nameLoadingContextWithRecipients:(id)arg1;
+ (id)nameLoadingContextWithBundleIdentifier:(id)arg1;
+ (id)globalContext;
- (void).cxx_destruct;
- (_Bool)isEqualToNameLoadingContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isGlobalContext;
- (id)initWithBundleIdentifier:(id)arg1 recipients:(id)arg2;

@end


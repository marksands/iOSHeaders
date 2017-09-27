//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_hostedViewMinimumAllowedSizes;
    NSDictionary *_hostedViewMaximumAllowedSizes;
    NSArray *_interfaceSections;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *interfaceSections; // @synthesize interfaceSections=_interfaceSections;
@property(copy, nonatomic) NSDictionary *hostedViewMaximumAllowedSizes; // @synthesize hostedViewMaximumAllowedSizes=_hostedViewMaximumAllowedSizes;
@property(copy, nonatomic) NSDictionary *hostedViewMinimumAllowedSizes; // @synthesize hostedViewMinimumAllowedSizes=_hostedViewMinimumAllowedSizes;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding>
{
    HAPMetadataConstraints *_constraints;
    NSString *_manufacturerDescription;
    NSString *_format;
    NSString *_units;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(retain, nonatomic) HAPMetadataConstraints *constraints; // @synthesize constraints=_constraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCharacteristicMetadata:(id)arg1;
- (id)_generateValidConstraints:(id)arg1;
- (id)description;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;

@end


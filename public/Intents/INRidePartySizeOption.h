//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INRidePartySizeOptionExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INPriceRange, NSString;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding>
{
    NSString *_sizeDescription;
    INPriceRange *_priceRange;
    struct _NSRange _partySizeRange;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) INPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property(readonly, nonatomic) NSString *sizeDescription; // @synthesize sizeDescription=_sizeDescription;
@property(readonly, nonatomic) struct _NSRange partySizeRange; // @synthesize partySizeRange=_partySizeRange;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithPartySizeRange:(struct _NSRange)arg1 sizeDescription:(id)arg2 priceRange:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


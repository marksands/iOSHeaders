//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _copiedToPasteboard;
    _Bool _shouldAggregate;
    NSString *_name;
    NSString *_originatingBundleID;
    NSString *_fullFormattedAddress;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_postalCode;
    NSString *_country;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSURL *_originatingWebsiteURL;
    NSURL *_mapItemURL;
    NSString *_label;
    NSString *_value;
    NSString *_shortValue;
    NSString *_documentID;
    NSDictionary *_addressComponents;
    NSString *_source;
    NSString *_trigger;
    NSDate *_createdAt;
    NSNumber *_lifetime;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)round:(double)arg1 toNearest:(double)arg2;
@property(copy, nonatomic) NSNumber *lifetime; // @synthesize lifetime=_lifetime;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *addressComponents; // @synthesize addressComponents=_addressComponents;
@property(copy, nonatomic) NSString *documentID; // @synthesize documentID=_documentID;
@property(nonatomic) _Bool shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property(copy, nonatomic) NSString *shortValue; // @synthesize shortValue=_shortValue;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool copiedToPasteboard; // @synthesize copiedToPasteboard=_copiedToPasteboard;
@property(copy, nonatomic) NSURL *mapItemURL; // @synthesize mapItemURL=_mapItemURL;
@property(copy, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(copy, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(copy, nonatomic) NSString *fullFormattedAddress; // @synthesize fullFormattedAddress=_fullFormattedAddress;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqualToConnectionsLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)addressDictionary;
- (unsigned long long)_roundedPredictionAge;
- (unsigned char)_pexItemSource;
- (id)quickTypeItem;

@end


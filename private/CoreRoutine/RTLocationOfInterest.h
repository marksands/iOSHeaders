//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;
@protocol GEOMapItem;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>
{
    double _latitude;
    double _longitude;
    double _uncertainty;
    double _confidence;
    NSUUID *_identifier;
    long long _type;
    long long _typeSource;
    id <GEOMapItem> _geoMapItem;
    long long _geoMapItemSource;
    NSArray *_visits;
    NSString *_customLabel;
}

+ (_Bool)supportsSecureCoding;
+ (id)geoMapItemSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeToString:(long long)arg1;
@property(readonly, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) long long geoMapItemSource; // @synthesize geoMapItemSource=_geoMapItemSource;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(readonly, nonatomic) long long typeSource; // @synthesize typeSource=_typeSource;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 typeSource:(long long)arg7 geoMapItem:(id)arg8 geoMapItemSource:(long long)arg9 visits:(id)arg10 customLabel:(id)arg11;
- (long long)frequencyCompare:(id)arg1;
- (long long)recentCompare:(id)arg1;
- (id)relativeNameToMapItem:(id)arg1;
- (id)preciseName;
- (id)name;

@end


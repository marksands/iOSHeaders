//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSURL *_pictureURL;
    NSString *_category;
    double _latitude;
    double _longitude;
    double _distance;
}

+ (_Bool)supportsSecureCoding;
@property double distance; // @synthesize distance=_distance;
@property double longitude; // @synthesize longitude=_longitude;
@property double latitude; // @synthesize latitude=_latitude;
@property(retain) NSString *category; // @synthesize category=_category;
@property(retain) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodableProperties;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


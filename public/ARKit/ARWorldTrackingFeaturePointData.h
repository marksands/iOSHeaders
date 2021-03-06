//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARResultData.h"
#import "NSSecureCoding.h"

@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding>
{
    double _timestamp;
    ARPointCloud *_visionFeaturePoints;
    ARPointCloud *_featurePoints;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(retain, nonatomic) ARPointCloud *visionFeaturePoints; // @synthesize visionFeaturePoints=_visionFeaturePoints;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTrafficFeature.h>

@class NSString;

@interface VKTrafficCameraFeature : VKTrafficFeature
{
    struct PolylineCoordinate _approachingRouteOffset;
    double _approachingDistanceInMeters;
    long long _type;
    long long _state;
    _Bool _isAboveSpeedThreshold;
    _Bool _shouldUpdateStyle;
    unsigned int _speedLimit;
    NSString *_speedLimitText;
    NSString *_uniqueIdentifier;
    unsigned int _cameraPriority;
    int _groupIdentifier;
    unsigned int _speedThreshold;
}

@property(readonly, nonatomic) int groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) unsigned int cameraPriority; // @synthesize cameraPriority=_cameraPriority;
@property(readonly, nonatomic) NSString *speedLimitText; // @synthesize speedLimitText=_speedLimitText;
@property(nonatomic) _Bool shouldUpdateStyle; // @synthesize shouldUpdateStyle=_shouldUpdateStyle;
@property(nonatomic) _Bool isAboveSpeedThreshold; // @synthesize isAboveSpeedThreshold=_isAboveSpeedThreshold;
@property(readonly, nonatomic) unsigned int speedThreshold; // @synthesize speedThreshold=_speedThreshold;
@property(nonatomic) struct PolylineCoordinate approachingRouteOffset; // @synthesize approachingRouteOffset=_approachingRouteOffset;
@property(readonly, nonatomic) double approachingDistanceInMeters; // @synthesize approachingDistanceInMeters=_approachingDistanceInMeters;
@property(nonatomic) long long labelState; // @synthesize labelState=_state;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id).cxx_construct;
@property(readonly, nonatomic) _Bool isGrouped;
- (_Bool)isSpeedLimitCamera;
- (_Bool)isBehind;
- (_Bool)isApproaching;
- (_Bool)isAheadButNotApproaching;
- (void)updateLabelStateForRouteUserOffset:(const struct PolylineCoordinate *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1;

@end


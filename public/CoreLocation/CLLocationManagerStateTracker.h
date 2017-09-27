//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreLocation/CLStateTracker.h>

@interface CLLocationManagerStateTracker : CLStateTracker
{
    struct _CLLocationManagerStateTrackerState _state;
    void *_identifier;
    _Bool _inTransaction;
}

+ (const char *)trackerStateTypeName;
+ (unsigned long long)trackerStateSize;
- (void *)identifier;
- (_Bool)dumpState:(void *)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s *)arg3;
- (void)updateState:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool courtesyPromptNeeded;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) _Bool updatingVehicleHeading;
@property(nonatomic) _Bool updatingVehicleSpeed;
@property(nonatomic) _Bool batchingLocation;
@property(nonatomic) _Bool allowsMapCorrection;
@property(nonatomic) _Bool showsBackgroundLocationIndicator;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool paused;
@property(nonatomic) int pausesLocationUpdatesAutomatically;
@property(nonatomic) long long activityType;
@property(nonatomic) int previousAuthorizationStatus;
@property(nonatomic) _Bool previousAuthorizationStatusValid;
@property(nonatomic) _Bool dynamicAccuracyReductionEnabled;
@property(nonatomic) _Bool allowsAlteredAccessoryLocations;
@property(nonatomic) _Bool allowsLocationPrompts;
@property(nonatomic) _Bool persistentMonitoringEnabled;
@property(nonatomic) double headingFilter;
@property(nonatomic) _Bool updatingHeading;
@property(nonatomic) _Bool updatingRanging;
@property(nonatomic) _Bool requestingRanging;
@property(nonatomic) _Bool requestingLocation;
@property(nonatomic) _Bool updatingLocation;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 identifier:(void *)arg2;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2 state:(CDUnknownBlockType)arg3;
- (id)initInSilo:(id)arg1 withIdentifier:(void *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDLocationDelegate.h"
#import "HMFMessageReceiver.h"
#import "NSSecureCoding.h"

@class CLLocation, CLRegion, HMDHome, HMDHomeLocationData, HMFMessageDispatcher, NSDate, NSObject<OS_dispatch_queue>, NSString, NSTimeZone, NSUUID;

@interface HMDHomeLocationHandler : HMFObject <HMDLocationDelegate, HMFMessageReceiver, NSSecureCoding>
{
    _Bool _isExtractingCurrentLocation;
    int _locationAuthorization;
    CLLocation *_location;
    NSTimeZone *_timeZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSDate *_locationUpdateTimestamp;
    CLRegion *_region;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2;
@property(nonatomic) _Bool isExtractingCurrentLocation; // @synthesize isExtractingCurrentLocation=_isExtractingCurrentLocation;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
@property(nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(retain, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)getReachableIPAccessory:(unsigned long long *)arg1 btleAccessory:(unsigned long long *)arg2;
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;
- (void)didDetermineLocation:(id)arg1;
- (_Bool)isDate:(id)arg1 laterThanDate:(id)arg2;
- (_Bool)isLocation:(id)arg1 closeToLocation:(id)arg2;
@property(readonly, nonatomic) HMDHomeLocationData *locationData;
- (void)_sendLocationUpdate;
- (void)runTransactionWithLocation:(id)arg1 updateTime:(id)arg2;
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;
- (void)_updateLocation:(id)arg1;
- (void)_updateTimeZone:(id)arg1;
- (void)_evaluateHomeRegionState:(id)arg1;
- (_Bool)_needToExtractLocation;
- (_Bool)_canExtractLocation;
- (void)accessoriesBecomeUnreachable;
- (void)accessoriesBecomeReachable;
- (void)accessoryAdded;
- (void)_handleRetrieveLocation:(id)arg1;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_registerForRegionUpdate;
- (void)_registerForMessages;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


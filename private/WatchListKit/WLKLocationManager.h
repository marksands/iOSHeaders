//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>
{
    int _didChangeNotificationToken;
    NSDictionary *_lastKnownLocation;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    CDUnknownBlockType _locationUpdateBlock;
    CLLocationManager *_locationManager;
    NSXPCConnection *_connection;
}

+ (id)_dictionaryForLocation:(id)arg1;
+ (id)defaultLocationManager;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int didChangeNotificationToken; // @synthesize didChangeNotificationToken=_didChangeNotificationToken;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CDUnknownBlockType locationUpdateBlock; // @synthesize locationUpdateBlock=_locationUpdateBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (id)_connection;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)_supportPath;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryOnDisk;
- (void)_writeToDisk;
- (void)_readFromDisk;
- (void)_refresh;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;
- (void)_requestLocation:(CDUnknownBlockType)arg1;
- (void)_requestLastLocation:(CDUnknownBlockType)arg1;
- (void)setLastKnownLocation:(id)arg1;
- (_Bool)_locationNeedsUpdate:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)updateLocationIfNeeded;
@property(readonly, nonatomic) NSDictionary *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
- (void)requestAuthorization;
- (long long)authorizationStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


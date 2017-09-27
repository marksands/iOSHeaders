//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "MapsSuggestionsLocationUpdater.h"
#import "MapsSuggestionsObject.h"

@class CLLocation, CLLocationManager, NSObject<OS_dispatch_queue>, NSString;

@interface MapsSuggestionsDualLocationUpdater : NSObject <CLLocationManagerDelegate, MapsSuggestionsObject, MapsSuggestionsLocationUpdater>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _running;
    CLLocationManager *_locationManagerForUpdating;
    CLLocationManager *_locationManagerForLeeching;
    CLLocation *_lastBestLocation;
    id <MapsSuggestionsLocationUpdaterDelegate> _delegate;
}

+ (id)defaultLocationUpdater;
@property(nonatomic) __weak id <MapsSuggestionsLocationUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLLocation *lastBestLocation; // @synthesize lastBestLocation=_lastBestLocation;
@property(retain, nonatomic) CLLocationManager *locationManagerForLeeching; // @synthesize locationManagerForLeeching=_locationManagerForLeeching;
@property(retain, nonatomic) CLLocationManager *locationManagerForUpdating; // @synthesize locationManagerForUpdating=_locationManagerForUpdating;
@property(nonatomic) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_stop;
- (void)_start;
- (void)restartLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (void)startLocationUpdatesForDelegate:(id)arg1;
- (void)dealloc;
- (void)_initLocationManagers;
- (id)init;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


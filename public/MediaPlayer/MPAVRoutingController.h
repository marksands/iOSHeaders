//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVRoute, MPAVRoutingDataSource, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MPAVRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSMutableSet *_pendingPickedRoutes;
    MPAVRoute *_legacyCachedRoute;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    _Bool _asyncFetchingRoutes;
    long long _externalScreenType;
    _Bool _hasExternalScreenType;
    _Bool _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    int _deviceAvailabilityNotifyToken;
    _Bool _deviceAvailabilityOverrideState;
    _Bool _fetchAvailableRoutesSynchronously;
    id <MPAVRoutingControllerDelegate> _delegate;
    MPAVRoutingDataSource *_dataSource;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    long long _routeTypes;
}

+ (void)setActiveRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getActiveRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (id)systemRouteWithContextUID:(id)arg1;
+ (id)systemRoute;
+ (id)_currentDeviceRoutingIconImageName;
+ (id)_currentDeviceRoutingIconImage;
+ (id)_iconImageForRoute:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingPickedRoutes; // @synthesize pendingPickedRoutes=_pendingPickedRoutes;
@property(nonatomic) long long routeTypes; // @synthesize routeTypes=_routeTypes;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool fetchAvailableRoutesSynchronously; // @synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MPAVRoutingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deviceAvailabilityOverrideState;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (long long)_volumeControlStateForPickedRoute;
- (long long)_externalScreenType:(_Bool *)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_updateCachedRoutes;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (void)_setExternalScreenType:(long long)arg1;
- (id)_pickedRoutesInArray:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_refreshPendingRoutes;
- (void)_removePendingRoute:(id)arg1;
- (id)_addPendingRoute:(id)arg1;
- (void)logCurrentRoutes;
- (void)_onQueueClearCachedRoutes;
- (void)clearCachedRoutes;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (_Bool)routeOtherThanHandsetAvailable;
- (_Bool)wirelessDisplayRoutesAvailable;
- (_Bool)airtunesRouteIsPicked;
- (_Bool)wirelessDisplayRouteIsPicked;
- (_Bool)receiverRouteIsPicked;
- (_Bool)handsetRouteIsPicked;
- (_Bool)speakerRouteIsPicked;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)pickSpeakerRoute;
- (_Bool)pickHandsetRoute;
- (_Bool)pickBestDeviceRoute;
- (_Bool)_updateGroupMembership:(long long)arg1 forRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)removePickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removePickedRoute:(id)arg1;
- (_Bool)addPickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)addPickedRoute:(id)arg1;
@property(readonly, nonatomic) _Bool supportsMultipleSelection;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (_Bool)pickRoute:(id)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property(readonly, nonatomic) _Bool volumeControlIsAvailable;
@property(readonly, nonatomic) _Bool hasPendingPickedRoutes;
- (_Bool)routeIsPendingPick:(id)arg1;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
@property(readonly, nonatomic) NSArray *pickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pickedRoute;
@property(readonly, nonatomic) long long externalScreenType;
@property(readonly, copy, nonatomic) NSArray *availableRoutes;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;

@end


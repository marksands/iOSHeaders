//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class MPAVRouteConnection;

@interface MPAVEndpointRoute : MPAVRoute
{
    MPAVRouteConnection *_connection;
    void *_endpoint;
}

+ (void)getActiveEndpointRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) void *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (unsigned long long)_outputDevicesComposition;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (_Bool)supportsRemoteControl;
- (_Bool)supportsGrouping;
- (long long)routeSubtype;
- (long long)routeType;
- (id)groupUID;
- (id)routeUID;
- (_Bool)isRoutingToWirelessDevice;
- (_Bool)isDeviceSpeakerRoute;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isDeviceRoute;
- (_Bool)isStereoPair;
- (_Bool)isHomePodRoute;
- (_Bool)isAppleTVRoute;
- (_Bool)isAirPlayingToDevice;
- (_Bool)canAccessRemoteAssets;
- (id)connection;
- (id)description;
- (id)designatedGroupLeaderName;
- (id)routeNames;
- (id)routeName;
- (void)dealloc;
- (id)initWithEndpoint:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


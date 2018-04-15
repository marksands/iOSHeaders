//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute
{
    void *_logicalLeaderOutputDevice;
    NSArray *_outputDevices;
}

+ (long long)pickableRouteTypeForOutputDevice:(void *)arg1;
+ (id)localDeviceUID;
+ (id)localOutputDeviceLocalizedName;
+ (void *)logicalLeaderFromOutputDevices:(id)arg1;
@property(readonly, nonatomic) void *logicalLeaderOutputDevice; // @synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice;
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
- (void).cxx_destruct;
- (_Bool)supportsGrouping;
- (_Bool)isStereoPair;
- (_Bool)requiresPassword;
- (_Bool)supportsWirelessDisplay;
- (long long)pickableRouteType;
- (long long)routeSubtype;
- (long long)routeType;
- (id)playingPairedDeviceName;
- (id)groupUID;
- (id)productIdentifier;
- (id)routeUID;
- (_Bool)isPickedOnPairedDevice;
- (_Bool)isVolumeControlAvailable;
@property(readonly, nonatomic, getter=isGroupLeader) _Bool groupLeader;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isDeviceSpeakerRoute;
- (_Bool)isDeviceRoute;
- (_Bool)isHomePodRoute;
- (_Bool)isCarplayRoute;
- (_Bool)isAppleTVRoute;
- (_Bool)canAccessRemoteAssets;
- (id)description;
- (id)routeName;
- (id)initWithOutputDevices:(id)arg1;

@end


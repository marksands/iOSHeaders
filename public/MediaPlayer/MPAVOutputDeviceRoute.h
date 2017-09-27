//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAVRoute.h>

@interface MPAVOutputDeviceRoute : MPAVRoute
{
    void *_outputDevice;
}

@property(readonly, nonatomic) void *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)requiresPassword;
- (_Bool)supportsWirelessDisplay;
- (long long)pickableRouteType;
- (long long)routeSubtype;
- (long long)routeType;
- (id)productIdentifier;
- (id)routeUID;
- (_Bool)isDeviceRoute;
- (_Bool)isB238Route;
- (_Bool)isAppleTVRoute;
- (_Bool)canAccessRemoteAssets;
- (id)description;
- (void)dealloc;
- (id)initWithOutputDevice:(void *)arg1;

@end


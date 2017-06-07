//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDiscovery, GKPlayer, NSString;

@interface GKNearbyDevice : NSObject
{
    NSString *_deviceID;
    GKDiscovery *_discovery;
    GKPlayer *_player;
    long long _state;
}

+ (id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKDiscovery *discovery; // @synthesize discovery=_discovery;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)sendDictionary:(id)arg1;
- (void)dealloc;

@end


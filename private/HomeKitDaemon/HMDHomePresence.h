//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, HMDHome, NSArray, NSDictionary, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging>
{
    HMDHome *_home;
    NSDictionary *_userPresenceMap;
    HMDDevice *_lastUpdateByDevice;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDDevice *lastUpdateByDevice; // @synthesize lastUpdateByDevice=_lastUpdateByDevice;
@property(readonly, nonatomic) NSDictionary *userPresenceMap; // @synthesize userPresenceMap=_userPresenceMap;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (_Bool)areUsersNotAtHome:(id)arg1;
- (_Bool)areUsersAtHome:(id)arg1;
- (_Bool)isUserNotAtHome:(id)arg1;
- (_Bool)isUserAtHome:(id)arg1;
@property(readonly, nonatomic, getter=isAnyUserAtHome) _Bool anyUserAtHome;
@property(readonly, nonatomic, getter=isNoUserAtHome) _Bool noUserAtHome;
@property(readonly, nonatomic) NSArray *authorizedUsers;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


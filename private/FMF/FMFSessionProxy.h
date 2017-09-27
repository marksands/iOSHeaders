//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFXPCInternalClientProtocol.h"

@class FMFSession, NSString;

__attribute__((visibility("hidden")))
@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol>
{
    FMFSession *_session;
}

@property(nonatomic) __weak FMFSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)abPreferencesDidChange;
- (oneway void)abDidChange;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;
- (oneway void)modelDidLoad;
- (id)initWithFMFSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


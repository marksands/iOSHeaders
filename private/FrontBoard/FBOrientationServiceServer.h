//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBSystemServiceFacility.h>

@class NSMutableSet;

@interface FBOrientationServiceServer : FBSystemServiceFacility
{
    NSMutableSet *_interestedClients;
}

- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (id)prerequisiteMilestones;
- (void)_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;
- (void)_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;
- (void)_updateInterest:(unsigned int)arg1 forClient:(id)arg2;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdID/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSString;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>
{
    APSConnection *_pushConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void).cxx_destruct;
- (void)runOnFirstUnlock:(CDUnknownBlockType)arg1;
- (void)registerForLockStateNotification;
- (_Bool)deviceUnlockedOnce;
- (_Bool)purpleBuddyWillRun;
- (void)handleAccountChange;
- (void)pushDisable;
- (void)pushEnable;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)currentBundleID;
- (void)forceExpiration;
- (void)refreshConfiguration;
- (void)handleConfiguration;
- (_Bool)isAdEnabledLocality;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


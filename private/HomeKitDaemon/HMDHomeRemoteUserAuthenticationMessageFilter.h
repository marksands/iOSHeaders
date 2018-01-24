//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import "HMFLogging.h"

@class HMDHome, NSString;

@interface HMDHomeRemoteUserAuthenticationMessageFilter : HMDMessageFilter <HMFLogging>
{
    HMDHome *_home;
}

+ (id)logCategory;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)logIdentifier;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


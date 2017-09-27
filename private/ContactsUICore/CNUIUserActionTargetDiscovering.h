//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIUserActionTargetDiscovering.h"

@class CNCache, NSString;

@interface CNUIUserActionTargetDiscovering : NSObject <CNUIUserActionTargetDiscovering>
{
    id <CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;
    CNCache *_cache;
}

+ (_Bool)isSkypeAvailableWithEnvironment:(id)arg1;
+ (id)applicationProxiesForIntent:(id)arg1 environment:(id)arg2;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) id <CNUIUserActionDiscoveringEnvironment> discoveringEnvironment; // @synthesize discoveringEnvironment=_discoveringEnvironment;
- (void).cxx_destruct;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartVideoCallIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)targetForTextWithSkype;
- (id)targetForVideoWithSkype;
- (id)targetForVoiceWithSkype;
- (id)targetForVideoWithFaceTime;
- (id)targetForVoiceWithFaceTime;
- (id)targetForTextWithMessages;
- (id)targetForVoiceWithTelephony;
- (id)targetsForText;
- (id)targetsForVideo;
- (id)targetsForVoice;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)_targetsForActionType:(id)arg1;
- (void)resetTargetsForActionType:(id)arg1;
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
- (id)targetsForActionType:(id)arg1;
- (void)dealloc;
- (id)initWithDiscoveringEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


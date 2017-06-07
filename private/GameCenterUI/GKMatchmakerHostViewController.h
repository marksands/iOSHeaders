//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKMatchmakerServiceProtocol-Protocol.h>

@class GKGame, GKMatchmakerViewController, NSString;

@interface GKMatchmakerHostViewController : GKUIRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol>
{
    GKMatchmakerViewController *_delegateWeak;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;
- (void)extensionIsCanceling;
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)messageFromExtension:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)inviterCancelled;
- (void)setFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setHosted:(_Bool)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (id)extensionObjectProxy;
@property(nonatomic) GKMatchmakerViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


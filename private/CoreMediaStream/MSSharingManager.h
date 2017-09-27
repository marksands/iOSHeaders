//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSSharingManager.h"
#import "MSSharingProtocolDelegate.h"

@class MSMediaStreamDaemon, MSSharingProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate>
{
    NSString *_personID;
    NSString *_manifestPath;
    NSArray *_shares;
    NSMutableArray *_sharesWithLocalModifications;
    MSSharingProtocol *_protocol;
    int _state;
    _Bool _requestCurrentStateRequested;
    NSMutableArray *_invitationQueue;
    NSMutableArray *_invitationResponseQueue;
    NSMutableDictionary *_manageShareByPersonID;
    NSMutableArray *_deleteQueue;
    NSTimer *_manageShareDebounceTimer;
    id <MSSharingManagerDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
}

+ (void)forgetPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (id)_clearInstantiatedSharingManagersByPersonID;
+ (id)existingSharingManagerForPersonID:(id)arg1;
+ (id)sharingManagerForPersonID:(id)arg1;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSSharingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void).cxx_destruct;
- (void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)abort;
- (void)_performNextQueuedAction;
- (void)_requestCurrentShareState;
- (void)_sendNextManagedShare;
- (void)_sendNextInvitationResponse;
- (void)_sendNextInvitation;
- (void)_sendNextDeletion;
- (id)_sharesWithLocalModifications;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)arg1;
- (void)modifyShare:(id)arg1;
- (void)_shareDebounceTimerDidFire:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(_Bool)arg2;
- (void)sendInvitationsForShares:(id)arg1;
@property(retain, nonatomic) NSArray *shares;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


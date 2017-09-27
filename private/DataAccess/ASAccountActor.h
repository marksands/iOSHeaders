//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DADisableableObject.h"

#import "ASAccountActorMessages.h"

@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>
{
}

- (id)initWithDAAccount:(id)arg1;
- (oneway void)_accountPasswordChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)shutdown;
- (oneway void)setAccount:(id)arg1;
- (oneway void)startup;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (_Bool)searchQueriesRunning;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)performSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (void)performFolderChange:(id)arg1 isUserRequested:(_Bool)arg2;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (id)foldersTag;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(_Bool)arg2;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setCustomSignature:(id)arg1;
- (id)customSignature;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)signingIdentityPersistentReference;
- (oneway void)setGeneratesBulletins:(_Bool)arg1;
- (_Bool)generatesBulletins;
- (int)supportsUniqueServerId;
- (int)supportsSmartForwardReply;
- (int)supportsDraftFolderSync;
- (int)supportsConversations;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;

@end


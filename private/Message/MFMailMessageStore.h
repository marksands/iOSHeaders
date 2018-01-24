//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageStore.h"

@class MFActivityMonitor, MFMailboxUid, MailAccount;

@interface MFMailMessageStore : MFMessageStore
{
    unsigned long long _state;
    struct {
        unsigned int isReadOnly:1;
        unsigned int hasUnsavedChangesToMessageData:1;
        unsigned int haveOpenLockFile:1;
        unsigned int compacting:1;
        unsigned int cancelInvalidation:1;
        unsigned int forceInvalidation:1;
        unsigned int isWritingChangesToDisk:1;
        unsigned int isTryingToClose:1;
        unsigned int compactOnClose:1;
        unsigned int reserved:23;
    } _flags;
    MFMailboxUid *_mailboxUid;
    MailAccount *_account;
    unsigned long long _deletedMessagesSize;
    unsigned long long _deletedMessageCount;
    unsigned long long _unreadMessageCount;
    unsigned long long _generationNumber;
    unsigned long long _lastFetchCount;
    MFActivityMonitor *_openMonitor;
}

+ (Class)headersClass;
+ (id)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(_Bool)arg3 deleteOriginals:(_Bool)arg4 isDeletion:(_Bool)arg5;
+ (Class)classForMimePart;
+ (_Bool)storeAtPathIsWritable:(id)arg1;
+ (_Bool)createEmptyStoreForPath:(id)arg1;
+ (_Bool)createEmptyStoreIfNeededForPath:(id)arg1;
- (id)messageIdRollCall:(id)arg1;
- (_Bool)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (_Bool)_shouldChangeComponentMessageFlags;
- (_Bool)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(_Bool)arg3;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(_Bool)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(_Bool)arg3;
- (void)_rebuildTableOfContentsSynchronously;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (int)archiveDestination;
- (_Bool)shouldArchive;
- (_Bool)supportsArchiving;
- (_Bool)shouldDeleteInPlace;
- (_Bool)shouldSetSummaryForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)_flushAllMessageData;
- (void)close;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;
- (_Bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (void)updateServerUnreadCountClosingConnection:(_Bool)arg1;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (id)status;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (void)setFlagForAllMessages:(id)arg1 state:(_Bool)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlag:(id)arg1 state:(_Bool)arg2 forMessages:(id)arg3;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (_Bool)hasCachedDataForMimePart:(id)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (_Bool)allowsAppend;
- (void)messagesWereDeleted:(id)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (void)doCompact;
- (_Bool)canCompact;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (id)_defaultRouterDestination;
- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (_Bool)canFetchMessageIDs;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id *)arg5;
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(id *)arg4;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (_Bool)canFetchSearchResults;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)mutableCopyOfAllMessages;
- (id)copyOfMessagesInRange:(struct _NSRange)arg1;
- (id)copyOfAllMessages;
- (unsigned long long)indexOfMessage:(id)arg1;
- (_Bool)hasMessageForAccount:(id)arg1;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (unsigned long long)unreadCount;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (unsigned long long)fetchWindowCap;
- (unsigned long long)fetchWindow;
- (unsigned long long)growFetchWindow;
- (void)invalidateFetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (_Bool)hasMoreFetchableMessages;
- (unsigned long long)serverNonDeletedCount;
- (unsigned long long)serverUnreadCount;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)serverMessageCount;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;
- (unsigned long long)totalCount;
- (void)deletedCount:(unsigned long long *)arg1 andSize:(unsigned long long *)arg2;
- (void)messagesWillBeCompacted:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)structureDidChange;
- (void)allMessageFlagsDidChange:(id)arg1;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (_Bool)isDrafts;
- (id)description;
- (_Bool)isReadOnly;
- (id)displayName;
- (id)storePathRelativeToAccount;
- (_Bool)isOpened;
- (id)mailboxUid;
- (id)account;
- (void)writeUpdatedMessageDataToDisk;
- (void)cancelOpen;
- (void)didOpen;
- (void)openSynchronously;
- (void)openAsynchronously;
- (void)dealloc;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;

@end


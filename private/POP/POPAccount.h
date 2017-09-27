//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailAccount.h"

@class MFActivityMonitor, MFLock, MFPOP3Connection, NSArray, NSConditionLock, NSString;

@interface POPAccount : MailAccount
{
    MFActivityMonitor *_fetchMonitor;
    MFPOP3Connection *_connection;
    NSConditionLock *_sharedConnectionCondition;
    unsigned long long _connectionsInUse;
    NSArray *_currentUIDs;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    _Bool _fetcherNeedsReset;
    _Bool _hasDoneBackgroundSynchronization;
    _Bool _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    long long _numberOfKnownUIDs;
}

+ (id)saslProfileName;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (void *)legacyKeychainProtocol;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)accountTypeIdentifier;
- (_Bool)shouldFetchBodiesWhenMovingToTrash;
- (_Bool)shouldRestoreMessagesAfterFailedDelete;
- (void)closeCachedConnection;
- (void)closeCachedConnectionForcedOnly:(id)arg1;
- (void)closeConnection:(id)arg1 andSaveUIDs:(id)arg2;
- (void)scheduleDisconnect;
- (void)checkInConnection:(id)arg1 currentUIDs:(id)arg2;
- (id)authenticatedConnection;
- (id)_createNewConnection;
- (id)_getCachedConnection;
- (unsigned long long)connectionsInUse;
- (void)_deleteHook;
- (long long)numberOfKnownUIDs;
- (void)setNumberOfKnownUIDs:(long long)arg1;
- (id)newestKnownMessageUID;
- (id)oldestKnownMessageUID;
- (void)setNewestKnownMessageUID:(id)arg1;
- (void)setOldestKnownMessageUID:(id)arg1;
- (id)_URLScheme;
- (unsigned int)delayedMessageDeletionInterval;
- (int)messageDeletionPolicy;
- (void)setDelayedMessageDeletionInterval:(unsigned int)arg1;
- (void)setMessageDeletionPolicy:(int)arg1;
- (void)setShouldAttemptAPOP:(_Bool)arg1;
- (_Bool)shouldAttemptAPOP;
- (_Bool)canMailboxBeRenamed:(id)arg1;
- (_Bool)supportsSyncingReadState;
- (_Bool)canCreateNewMailboxes;
- (id)mailboxPathExtension;
- (void)setPreferredAuthScheme:(id)arg1;
- (Class)connectionClass;
- (Class)storeClassForMailbox:(id)arg1;
- (Class)storeClass;
- (_Bool)requiresAuthentication;
- (id)secureServiceName;
- (id)serviceName;
- (_Bool)supportsPurge;
- (_Bool)canGoOffline;
- (id)statisticsKind;
- (id)certUIService;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (long long)fetchNumNewMessages:(unsigned long long)arg1 oldMessages:(unsigned long long)arg2 preservingUID:(id)arg3 withStore:(id)arg4;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;

@end


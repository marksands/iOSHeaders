//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet, NSString;

@interface NNMKSyncedMessage : NSObject
{
    _Bool _usedProtectedChannelForMessageSync;
    _Bool _usedNotificationPriorityForMessageSync;
    _Bool _contentSyncedUsingNotificationPriority;
    _Bool _contentSyncedBecauseUserRequested;
    _Bool _contentSynced;
    _Bool _contentRequestedByUser;
    _Bool _resendRequested;
    _Bool _isThreadSpecific;
    NSString *_messageId;
    NSString *_sanitizedMessageId;
    unsigned long long _status;
    unsigned long long _statusVersion;
    NSDate *_dateReceived;
    NSMutableSet *_attachmentsContentIdsNotYetSynced;
    NSString *_conversationId;
    unsigned long long _resendInterval;
    unsigned long long _contentResendInterval;
    NSString *_mailboxId;
    unsigned long long _isSpecialMailboxSpecific;
}

@property(nonatomic) unsigned long long isSpecialMailboxSpecific; // @synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific;
@property(nonatomic) _Bool isThreadSpecific; // @synthesize isThreadSpecific=_isThreadSpecific;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) unsigned long long contentResendInterval; // @synthesize contentResendInterval=_contentResendInterval;
@property(nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property(nonatomic) _Bool resendRequested; // @synthesize resendRequested=_resendRequested;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSMutableSet *attachmentsContentIdsNotYetSynced; // @synthesize attachmentsContentIdsNotYetSynced=_attachmentsContentIdsNotYetSynced;
@property(nonatomic) _Bool contentRequestedByUser; // @synthesize contentRequestedByUser=_contentRequestedByUser;
@property(nonatomic) _Bool contentSynced; // @synthesize contentSynced=_contentSynced;
@property(nonatomic) _Bool contentSyncedBecauseUserRequested; // @synthesize contentSyncedBecauseUserRequested=_contentSyncedBecauseUserRequested;
@property(nonatomic) _Bool contentSyncedUsingNotificationPriority; // @synthesize contentSyncedUsingNotificationPriority=_contentSyncedUsingNotificationPriority;
@property(nonatomic) _Bool usedNotificationPriorityForMessageSync; // @synthesize usedNotificationPriorityForMessageSync=_usedNotificationPriorityForMessageSync;
@property(nonatomic) _Bool usedProtectedChannelForMessageSync; // @synthesize usedProtectedChannelForMessageSync=_usedProtectedChannelForMessageSync;
@property(retain, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(nonatomic) unsigned long long statusVersion; // @synthesize statusVersion=_statusVersion;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sanitizedMessageId; // @synthesize sanitizedMessageId=_sanitizedMessageId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (_Bool)isContentCompletelySynced;
- (id)init;
- (id)initWithMessage:(id)arg1 useDefaultMailbox:(_Bool)arg2;
- (id)initWithMessage:(id)arg1;

@end


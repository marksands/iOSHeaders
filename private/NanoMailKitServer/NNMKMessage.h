//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NNMKMailboxItem.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding, NSCopying>
{
    _Bool _isThreadSpecific;
    _Bool _replaceStandaloneNotification;
    NSString *_subject;
    NSDate *_dateReceived;
    NSString *_preview;
    unsigned long long _status;
    NSString *_messageId;
    NSString *_serverId;
    NSString *_accountId;
    NSString *_mailboxId;
    NSString *_conversationId;
    NSString *_from;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSDate *_dateSent;
    NSString *_messageIdHeader;
    NSString *_notificationMessageId;
    NSString *_publisherBulletinId;
    unsigned long long _source;
    unsigned long long _statusVersion;
    unsigned long long _isSpecialMailboxSpecific;
    unsigned long long _visibleStatus;
}

+ (id)messageIdsFromMessages:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)generateConversationIdWithAccountId:(id)arg1 conversationId:(id)arg2;
+ (id)generateNotificationIdWithFolderId:(id)arg1 remoteId:(id)arg2;
+ (id)generateMessageHashForMessage:(id)arg1;
+ (id)attachmentIdForURL:(id)arg1;
+ (id)messageIdForURL:(id)arg1;
+ (id)URLForMessageId:(id)arg1 attachmentID:(id)arg2;
+ (id)URLForMessageId:(id)arg1;
+ (_Bool)isMessageURL:(id)arg1;
+ (_Bool)messageHasMultipleRecipients:(id)arg1;
+ (unsigned long long)addState:(unsigned long long)arg1 toStatus:(unsigned long long)arg2;
+ (unsigned long long)removeState:(unsigned long long)arg1 fromStatus:(unsigned long long)arg2;
+ (_Bool)checkStatus:(unsigned long long)arg1 stateToCheck:(unsigned long long)arg2;
@property(nonatomic) _Bool replaceStandaloneNotification; // @synthesize replaceStandaloneNotification=_replaceStandaloneNotification;
@property(nonatomic) unsigned long long visibleStatus; // @synthesize visibleStatus=_visibleStatus;
@property(nonatomic) unsigned long long isSpecialMailboxSpecific; // @synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific;
@property(nonatomic) _Bool isThreadSpecific; // @synthesize isThreadSpecific=_isThreadSpecific;
@property(nonatomic) unsigned long long statusVersion; // @synthesize statusVersion=_statusVersion;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *publisherBulletinId; // @synthesize publisherBulletinId=_publisherBulletinId;
@property(copy, nonatomic) NSString *notificationMessageId; // @synthesize notificationMessageId=_notificationMessageId;
@property(copy, nonatomic) NSString *messageIdHeader; // @synthesize messageIdHeader=_messageIdHeader;
@property(copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *preview; // @synthesize preview=_preview;
@property(copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isFromSource:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeState:(unsigned long long)arg1;
- (void)addState:(unsigned long long)arg1;
- (_Bool)checkState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


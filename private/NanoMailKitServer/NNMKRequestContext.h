//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface NNMKRequestContext : NSObject
{
    _Bool _hasProtectedMessages;
    NSArray *_mailboxes;
    NSString *_conversationId;
    NSDate *_beforeDate;
    unsigned long long _count;
    unsigned long long _messagesForSpecialMailbox;
}

@property(nonatomic) unsigned long long messagesForSpecialMailbox; // @synthesize messagesForSpecialMailbox=_messagesForSpecialMailbox;
@property(nonatomic) _Bool hasProtectedMessages; // @synthesize hasProtectedMessages=_hasProtectedMessages;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *beforeDate; // @synthesize beforeDate=_beforeDate;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
- (void).cxx_destruct;

@end


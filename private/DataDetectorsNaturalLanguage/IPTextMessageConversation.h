//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPCircularBufferArray, NSArray, NSMutableDictionary;

@interface IPTextMessageConversation : NSObject
{
    IPCircularBufferArray *_lastMessages;
    NSArray *_allMessages;
    NSMutableDictionary *_messageByMessageIdentifierDictionary;
    NSMutableDictionary *_eventsByMessageIdentifierDictionary;
}

+ (id)collapseMessages:(id)arg1;
+ (id)collapsedMessagesFromMessages:(id)arg1;
@property(retain) NSMutableDictionary *eventsByMessageIdentifierDictionary; // @synthesize eventsByMessageIdentifierDictionary=_eventsByMessageIdentifierDictionary;
@property(retain) NSMutableDictionary *messageByMessageIdentifierDictionary; // @synthesize messageByMessageIdentifierDictionary=_messageByMessageIdentifierDictionary;
@property(copy, nonatomic) NSArray *allMessages; // @synthesize allMessages=_allMessages;
- (void).cxx_destruct;
- (id)eventsInPreviouslyScannedMessageWithIdentifier:(id)arg1;
- (void)_scanEventsInLastMessageOnly:(_Bool)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scanEventsInLastMessageOnly:(_Bool)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)messageForIdentifier:(id)arg1;
- (void)reset;
- (void)addMessage:(id)arg1;
- (id)init;

@end


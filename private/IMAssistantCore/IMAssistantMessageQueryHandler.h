//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler
{
}

- (void)searchMessagesWithContentsPredicate:(id)arg1 messageIdentifiers:(id)arg2 recipients:(id)arg3 recipientsPredicate:(id)arg4 senders:(id)arg5 sendersPredicate:(id)arg6 dateTimeRange:(id)arg7 attributes:(unsigned long long)arg8 completion:(CDUnknownBlockType)arg9;
- (id)chatContainingPersons:(id)arg1;
- (id)IMPersonsForSPIHandles:(id)arg1;
- (id)messageContentsPredicate:(id)arg1;
- (id)sendersPredicate:(id)arg1;
- (id)recipientsPredicate:(id)arg1;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesForSenders:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)handlesAndServicesForPersons:(id)arg1 services:(id *)arg2;
- (void)SPIQueryMessagesForChats:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)serviceNamesForChats:(id)arg1;
- (id)idenfiersForChats:(id)arg1;
- (id)resolveDateTimeRange:(id)arg1;
- (_Bool)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

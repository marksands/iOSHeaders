//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMChatItemRules.h"

@class IMChat, IMChatItem, NSArray, NSMutableArray, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules>
{
    IMChat *_chat;
    NSArray *_items;
    NSMutableArray *_chatItems;
    IMChatItem *_nextStaleChatItem;
}

+ (_Bool)testShouldShowSMSSpamForChat:(id)arg1 chatItems:(id)arg2;
+ (_Bool)testShouldShowReportSpamForChat:(id)arg1 chatItems:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithChat:(id)arg1;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (_Bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (_Bool)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
- (void)_processChatItemsForAttribution:(id)arg1;
- (void)_processChatItemsForReplayButton:(id)arg1;
- (id)_effectControlForChatItem:(id)arg1;
- (id)_attributionChatItemForChatItem:(id)arg1;
- (_Bool)_shouldDisplayAttributionInfo:(id)arg1;
- (void)_processChatItemsForBreadcrumbs:(id)arg1;
- (void)_didProcessChatItems:(id)arg1;
- (_Bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (id)_nextStaleChatItem;
- (void)_setNextStaleChatItem:(id)arg1;
- (id)_chatItems;
- (void)_setItems:(id)arg1;
- (id)_items;
- (_Bool)_shouldShowEffectPlayButtonForMessage:(id)arg1;
- (_Bool)shouldShowExpressiveMessageTextAsText:(id)arg1;
- (_Bool)shouldShowRaiseMessageStatus;
- (id)chatItemForIMChatItem:(id)arg1;
- (id)testChatItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


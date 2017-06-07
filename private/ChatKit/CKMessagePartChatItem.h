//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray, UIItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem
{
    NSArray *_visibleAssociatedMessageChatItems;
}

@property(readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems; // @synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIItemProvider *dragItemProvider;
@property(readonly, nonatomic) _Bool hasStickers;
@property(readonly, nonatomic) _Bool hasMessageAcknowledgment;
@property(readonly, nonatomic) struct _NSRange messagePartRange;
@property(readonly, nonatomic) _Bool canSendMessageAcknowledgment;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
@property(readonly, copy, nonatomic) NSArray *pasteboardItems;
@property(readonly, nonatomic) BOOL color;
@property(readonly, nonatomic) IMMessage *message;
- (_Bool)_isSURFRelatedMessage;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (_Bool)stickersSnapToPoint;
- (_Bool)canAttachStickers;
- (_Bool)canSendAsTextMessage;
- (_Bool)canForward;
- (_Bool)canCopy;
- (id)description;
- (id)aggregateAcknowledgmentChatItem;
- (_Bool)shouldShowVotingView;
- (id)votingCounts;
- (long long)selectedType;
@property(readonly, copy, nonatomic) NSArray *messageAcknowledgments;
- (id)composition;

@end


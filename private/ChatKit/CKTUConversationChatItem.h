//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem
{
}

@property(readonly, nonatomic) __weak NSUUID *tuConversationUUID;
@property(readonly, nonatomic) BOOL color;
- (id)time;
- (void)configureBalloonView:(id)arg1;
- (_Bool)isFromMe;
- (_Bool)shouldCacheSize;
- (Class)balloonViewClass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class IMHandle, NSDate, NSString;

@interface CKAssociatedMessageChatItem : CKChatItem
{
    NSString *_timestampString;
}

@property(copy, nonatomic) NSString *timestampString; // @synthesize timestampString=_timestampString;
- (void).cxx_destruct;
- (_Bool)wantsDrawerLayout;
- (id)loadTimestampString;
@property(readonly, nonatomic) struct _NSRange associatedMessageRange;
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
- (id)loadTranscriptDrawerText;
- (id)IMAssociatedMessageChatItem;
@property(readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property(readonly, nonatomic) _Bool failed;
- (BOOL)transcriptOrientation;
@property(readonly, nonatomic) _Bool parentMessageIsFromMe;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) NSString *associatedChatItemGUID;
@property(readonly, nonatomic) NSString *guid;

@end


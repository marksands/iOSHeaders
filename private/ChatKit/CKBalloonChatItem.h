//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class IMHandle, NSDate;

@interface CKBalloonChatItem : CKChatItem
{
}

- (_Bool)needsAdjustedTextAlignmentInsets;
- (_Bool)needsPreservedAspectRatio;
@property(readonly, nonatomic) BOOL balloonShape;
@property(readonly, nonatomic) BOOL tailShape;
- (struct CKBalloonDescriptor_t)balloonDescriptor;
- (void)configureBalloonView:(id)arg1;
@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool failed;
@property(readonly, nonatomic, getter=isFromMe) _Bool fromMe;
@property(readonly, nonatomic) Class impactBalloonViewClass;
@property(readonly, nonatomic) Class balloonViewClass;
@property(readonly, nonatomic) unsigned long long balloonCorners;
@property(readonly, nonatomic) BOOL balloonOrientation;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (_Bool)isEditable;
- (_Bool)wantsDrawerLayout;
- (_Bool)displayDuringSend;
- (id)contact;
- (id)cellIdentifier;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (id)description;

@end


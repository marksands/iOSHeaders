//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BBBulletin, CNContact, IMTranscriptChatItem, NSAttributedString, NSString;

@interface CKChatItem : NSObject
{
    _Bool _zOrder;
    _Bool _sizeLoaded;
    IMTranscriptChatItem *_imChatItem;
    BBBulletin *_bulletin;
    double _maxWidth;
    NSAttributedString *_transcriptText;
    NSAttributedString *_transcriptDrawerText;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

+ (id)chatItemWithBulletin:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3;
+ (id)chatItemWithIMChatItem:(id)arg1 balloonMaxWidth:(double)arg2 otherMaxWidth:(double)arg3;
@property(nonatomic, getter=isSizeLoaded) _Bool sizeLoaded; // @synthesize sizeLoaded=_sizeLoaded;
@property(copy, nonatomic) NSAttributedString *transcriptDrawerText; // @synthesize transcriptDrawerText=_transcriptDrawerText;
@property(copy, nonatomic) NSAttributedString *transcriptText; // @synthesize transcriptText=_transcriptText;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) _Bool zOrder; // @synthesize zOrder=_zOrder;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) IMTranscriptChatItem *IMChatItem; // @synthesize IMChatItem=_imChatItem;
- (void).cxx_destruct;
- (void)_setSizeForTesting:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CKBalloonDescriptor_t balloonDescriptor; // @dynamic balloonDescriptor;
- (id)loadTranscriptDrawerText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptText;
- (id)initWithBulletin:(id)arg1 maxWidth:(double)arg2;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
@property(readonly, nonatomic) _Bool stickersSnapToPoint;
@property(readonly, nonatomic) _Bool canAttachStickers;
@property(readonly, copy, nonatomic) NSString *menuTitle;
@property(readonly, nonatomic) _Bool canSendAsTextMessage;
- (_Bool)canSave;
@property(readonly, nonatomic) _Bool canExport;
@property(readonly, nonatomic) _Bool canForward;
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canCopy;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) _Bool wantsDrawerLayout;
@property(readonly, nonatomic) _Bool displayDuringSend;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) BOOL transcriptOrientation;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptTextAlignmentInsets;
- (void)unloadSize;
@property(readonly, nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)unloadTranscriptText;
@property(readonly, nonatomic) _Bool hasTail;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)visibleAssociatedMessageChatItems;

@end


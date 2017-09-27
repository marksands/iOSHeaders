//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class NSAttributedString, UILabel, UIView;

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell
{
    _Bool _drawerWasVisible;
    _Bool _drawerTextChanged;
    NSAttributedString *_drawerText;
    long long _animationPauseReasons;
    UILabel *_drawerLabel;
    struct CGSize _messageDisplayViewRequestedSize;
    struct CGSize _drawerTextSize;
}

@property(nonatomic) struct CGSize drawerTextSize; // @synthesize drawerTextSize=_drawerTextSize;
@property(nonatomic) _Bool drawerTextChanged; // @synthesize drawerTextChanged=_drawerTextChanged;
@property(nonatomic) _Bool drawerWasVisible; // @synthesize drawerWasVisible=_drawerWasVisible;
@property(retain, nonatomic) UILabel *drawerLabel; // @synthesize drawerLabel=_drawerLabel;
@property(nonatomic) long long animationPauseReasons; // @synthesize animationPauseReasons=_animationPauseReasons;
@property(nonatomic) struct CGSize messageDisplayViewRequestedSize; // @synthesize messageDisplayViewRequestedSize=_messageDisplayViewRequestedSize;
@property(copy, nonatomic) NSAttributedString *drawerText; // @synthesize drawerText=_drawerText;
- (void).cxx_destruct;
@property(readonly) UIView *messageDisplayView;
- (void)willLayoutDrawerLabelFrame:(struct CGRect *)arg1;
@property(readonly) struct CGRect drawerLabelFrame;
- (struct CGRect)messageDisplayViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end


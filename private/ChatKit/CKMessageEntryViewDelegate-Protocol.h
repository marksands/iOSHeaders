//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKMediaObject, CKMessageEntryView, NSArray;

@protocol CKMessageEntryViewDelegate <NSObject>
- (struct CGSize)messageEntryViewMaxShelfPluginViewSize:(CKMessageEntryView *)arg1;
- (double)messageEntryViewMaxHeight:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressEnded:(struct CGPoint)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 sendButtonLongPressMoved:(struct CGPoint)arg2;
- (void)messageEntryViewSendButtonLongPressBegan:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (_Bool)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1;

@optional
- (void)sendCurrentLocationMessage:(CKMessageEntryView *)arg1;
- (_Bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(CKMessageEntryView *)arg1;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
@end


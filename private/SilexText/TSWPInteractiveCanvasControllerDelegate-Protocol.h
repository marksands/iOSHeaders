//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexText/TSDInteractiveCanvasControllerDelegate-Protocol.h>

@class TSDRep, TSWPFootnoteReferenceAttachment, TSWPHyperlinkField, TSWPInteractiveCanvasController, TSWPSmartField, TSWPTwoPartAction, UIDragInteraction, UIDragItem, UIView;
@protocol TSDGesture, TSWPHyperlinkHostRepProtocol, UIDragSession;

@protocol TSWPInteractiveCanvasControllerDelegate <TSDInteractiveCanvasControllerDelegate>

@optional
@property(readonly, nonatomic) _Bool interactiveCanvasControllerAllowsHyperlinkInteraction;
- (_Bool)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 tappedOnFootnoteAttachment:(TSWPFootnoteReferenceAttachment *)arg2;
- (UIDragItem *)interactiveCanvasController:(TSWPInteractiveCanvasController *)arg1 dragItemForSmartField:(TSWPSmartField *)arg2 interaction:(UIDragInteraction *)arg3 session:(id <UIDragSession>)arg4;
- (void)showInsertPageNumberUIFromRect:(struct CGRect)arg1 inView:(UIView *)arg2;
- (TSWPTwoPartAction *)actionForHyperlink:(TSWPHyperlinkField *)arg1 inRep:(TSDRep<TSWPHyperlinkHostRepProtocol> *)arg2 gesture:(id <TSDGesture>)arg3;
@end


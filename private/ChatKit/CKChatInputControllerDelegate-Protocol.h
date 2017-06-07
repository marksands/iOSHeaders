//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKChatInputController, CKComposition, IMSticker, NSData, NSString, UIInputViewController, UIView, UIViewController;
@protocol CKBrowserDragControllerTranscriptDelegate;

@protocol CKChatInputControllerDelegate <NSObject>
- (void)sendCurrentLocation;
- (void)chatInputControllerWillDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidDismissCompactBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(CKChatInputController *)arg1;
- (void)chatInputControllerDidTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputControllerWillTransitionExpanded:(CKChatInputController *)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(CKChatInputController *)arg1;
- (void)chatInputControllerWillHideHandwriting:(CKChatInputController *)arg1;
- (void)chatInputControllerDidShowHandwriting:(CKChatInputController *)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
- (void)chatInputDidSelectPhotoPicker;
- (void)setLocalUserIsComposing:(_Bool)arg1 withPluginBundleID:(NSString *)arg2 typingIndicatorData:(NSData *)arg3;
- (void)chatInputDidUpdateWithNewInputViewController:(UIInputViewController *)arg1;
- (void)chatInputDidUpdateInputViewShowingBrowser:(_Bool)arg1 entryFieldCollapsed:(_Bool)arg2 animated:(_Bool)arg3;
- (void)chatInputSentComposition:(CKComposition *)arg1;
- (_Bool)keyboardIsVisibleForChatInputController:(CKChatInputController *)arg1;
- (id <CKBrowserDragControllerTranscriptDelegate>)dragControllerTranscriptDelegate;
- (void)sendSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)sendSticker:(IMSticker *)arg1;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(CKChatInputController *)arg1;
- (UIView *)viewForDragAndChatInputDropTarget;
- (UIViewController *)viewControllerForChatInputModalPresentation;
@end


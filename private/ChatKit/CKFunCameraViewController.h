//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKBrowserViewControllerSendDelegate.h"

@class CKConversation, IMBalloonPlugin, NSString, UIView, UIViewController<CKBrowserViewControllerProtocol>;

@interface CKFunCameraViewController : UIViewController <CKBrowserViewControllerSendDelegate>
{
    id <CKFunCameraViewControllerDelegate> _delegate;
    IMBalloonPlugin *_balloonPlugin;
    UIView *_funCameraView;
    UIViewController<CKBrowserViewControllerProtocol> *_funCameraAppViewController;
    CKConversation *_conversation;
}

@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *funCameraAppViewController; // @synthesize funCameraAppViewController=_funCameraAppViewController;
@property(retain, nonatomic) UIView *funCameraView; // @synthesize funCameraView=_funCameraView;
@property(retain, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) __weak id <CKFunCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (_Bool)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(_Bool)arg3 error:(id *)arg4;
- (void)commitPayload:(id)arg1;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
- (id)contentViewControllerForPlugin:(id)arg1;
- (id)configuredContentViewControllerForPlugin:(id)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


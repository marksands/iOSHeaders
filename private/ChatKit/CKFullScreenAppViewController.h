//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKBrowserSwitcherFooterViewDelegate-Protocol.h>
#import <ChatKit/CKBrowserViewControllerProtocol-Protocol.h>
#import <ChatKit/CKDismissViewDelegate-Protocol.h>
#import <ChatKit/CKFullScreenAppNavbarManagerDelegate-Protocol.h>
#import <ChatKit/UIInteractionProgressObserver-Protocol.h>

@class CADisplayLink, CKAppGrabberView, CKBrowserDragManager, CKBrowserSwitcherFooterView, CKConversation, CKDismissView, CKFullScreenAppNavbarManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSData, NSNumber, NSObject, NSString, UISimpleInteractionProgress, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface CKFullScreenAppViewController : UIViewController <CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKDismissViewDelegate, CKBrowserSwitcherFooterViewDelegate, UIInteractionProgressObserver>
{
    CKAppGrabberView *_grabberView;
    UITapGestureRecognizer *_collapseTapRecognizer;
    UISwipeGestureRecognizer *_collapseSwipeRecognizer;
    _Bool _inTransition;
    _Bool _inDragAndDrop;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    CKFullScreenAppNavbarManager *_navbarManager;
    IMBalloonPlugin *_plugin;
    unsigned long long _transitionDirection;
    CADisplayLink *_animationDisplayLink;
    UISimpleInteractionProgress *_interactionProgress;
    long long _lastKnownDeviceOrientation;
    CKBrowserSwitcherFooterView *_footerSwitcherView;
    struct CGRect _initialBrowserFrame;
    struct CGRect _targetBrowserFrame;
}

+ (double)navbarHeight;
@property(retain, nonatomic) CKBrowserSwitcherFooterView *footerSwitcherView; // @synthesize footerSwitcherView=_footerSwitcherView;
@property(nonatomic) long long lastKnownDeviceOrientation; // @synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation;
@property(nonatomic) _Bool inDragAndDrop; // @synthesize inDragAndDrop=_inDragAndDrop;
@property(nonatomic) struct CGRect targetBrowserFrame; // @synthesize targetBrowserFrame=_targetBrowserFrame;
@property(nonatomic) struct CGRect initialBrowserFrame; // @synthesize initialBrowserFrame=_initialBrowserFrame;
@property(retain, nonatomic) UISimpleInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
@property(retain, nonatomic) CADisplayLink *animationDisplayLink; // @synthesize animationDisplayLink=_animationDisplayLink;
@property(nonatomic) unsigned long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) CKFullScreenAppNavbarManager *navbarManager; // @synthesize navbarManager=_navbarManager;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(retain, nonatomic) CKDismissView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <CKFullScreenAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (id)indexPathOfCurrentlySelectedPluginInSwitcherView:(id)arg1;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (_Bool)_currentPluginIsAppManager;
- (_Bool)_currentPluginIsAppStore;
- (struct UIEdgeInsets)navigationBarInsetsWithoutPalette;
- (void)collapse;
- (void)dismissViewWasTapped:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)inputAccessoryView;
- (void)_dragEnded:(id)arg1;
- (void)_dragBegan:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)collapse:(id)arg1;
- (void)navbarManagerDidReceiveMessage:(id)arg1;
- (void)navbarManagerDidDismissAllMessages:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_animationDisplayLinkFired;
- (void)animateBrowserViewToTargetRect:(struct CGRect)arg1 switcherFooterView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateBrowserViewFromSourceRect:(struct CGRect)arg1 interactive:(_Bool)arg2 switcherFooterView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)finalContentViewFrame;
- (void)updateFooterViewFrame;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
@property(readonly, nonatomic) _Bool inExpandedPresentation;
- (_Bool)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) _Bool isiMessage;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
@property(readonly, nonatomic) _Bool shouldSuppressEntryView;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
@property(readonly, nonatomic) _Bool wantsDarkUI;

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) unsigned long long badgeValue;
@property(readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(retain, nonatomic) NSData *conversationEngramID;
@property(nonatomic) long long currentBrowserConsumer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property(readonly, nonatomic) long long parentModalPresentationStyle;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property(readonly, nonatomic) UIViewController *remoteViewController;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wasExpandedPresentation;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKBrowserViewControllerProtocol.h"

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject<CKBrowserViewControllerSendDelegate>, NSString, UIView;

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol>
{
    long long _previousConsumer;
    _Bool _isiMessage;
    _Bool _isTransitioningToExpandedPresentation;
    NSObject<CKBrowserViewControllerSendDelegate> *_sendDelegate;
    IMBalloonPlugin *_balloonPlugin;
    NSString *_conversationID;
    IMBalloonPluginDataSource *_balloonPluginDataSource;
    UIViewController *_presentationViewController;
    long long _currentBrowserConsumer;
    UIView *_dragTargetView;
    CKBrowserDragManager *_browserDragManager;
}

+ (id)currentPPTTestName;
+ (_Bool)supportsMessagesAppExtendedLaunchTest;
@property(nonatomic) _Bool isTransitioningToExpandedPresentation; // @synthesize isTransitioningToExpandedPresentation=_isTransitioningToExpandedPresentation;
@property(retain, nonatomic) CKBrowserDragManager *browserDragManager; // @synthesize browserDragManager=_browserDragManager;
@property(nonatomic) __weak UIView *dragTargetView; // @synthesize dragTargetView=_dragTargetView;
@property(nonatomic) long long currentBrowserConsumer; // @synthesize currentBrowserConsumer=_currentBrowserConsumer;
@property(retain, nonatomic) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource; // @synthesize balloonPluginDataSource=_balloonPluginDataSource;
@property(nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic) _Bool isiMessage; // @synthesize isiMessage=_isiMessage;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate; // @synthesize sendDelegate=_sendDelegate;
- (void).cxx_destruct;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) _Bool shouldSuppressEntryView;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(readonly, nonatomic) _Bool wantsDarkUI;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToExpandedPresentation;
@property(readonly, nonatomic) _Bool wasExpandedPresentation;
@property(readonly, nonatomic) _Bool inExpandedPresentation;
- (_Bool)isLoaded;
- (void)dismiss;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(_Bool)arg2;
- (void)startPPTTestNamed:(id)arg1;
- (void)finishedPPTTestNamed:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2;
- (void)_updateContentOverlayInsetsForSelfAndChildren;

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) unsigned long long badgeValue;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(retain, nonatomic) NSData *conversationEngramID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property(readonly, nonatomic) long long parentModalPresentationStyle;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property(retain, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) UIViewController *remoteViewController;
@property(retain, nonatomic) NSString *sender;
@property(readonly) Class superclass;

@end


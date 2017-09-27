//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSString, UIColor;

@interface TSAViewController : UIViewController
{
    _Bool _viewDidAppear;
    _Bool _showFirstLaunchCoachingTipAfterViewAppears;
    _Bool _firstLaunchCoachingTipsWereShowingBeforeRotation;
    _Bool _coachingTipsWereShowingBeforeRotation;
    _Bool _shouldShowHelpOnAppear;
    NSArray *_leftApplicationToolbarItems;
    NSArray *_rightApplicationToolbarItems;
    double _leftToolbarItemsInset;
    double _rightToolbarItemsInset;
    double _leftToolbarItemsMaximumWidth;
    double _rightToolbarItemsMaximumWidth;
}

@property(nonatomic) _Bool shouldShowHelpOnAppear; // @synthesize shouldShowHelpOnAppear=_shouldShowHelpOnAppear;
@property(nonatomic) _Bool coachingTipsWereShowingBeforeRotation; // @synthesize coachingTipsWereShowingBeforeRotation=_coachingTipsWereShowingBeforeRotation;
@property(nonatomic) _Bool firstLaunchCoachingTipsWereShowingBeforeRotation; // @synthesize firstLaunchCoachingTipsWereShowingBeforeRotation=_firstLaunchCoachingTipsWereShowingBeforeRotation;
@property(nonatomic) _Bool showFirstLaunchCoachingTipAfterViewAppears; // @synthesize showFirstLaunchCoachingTipAfterViewAppears=_showFirstLaunchCoachingTipAfterViewAppears;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) double rightToolbarItemsMaximumWidth; // @synthesize rightToolbarItemsMaximumWidth=_rightToolbarItemsMaximumWidth;
@property(nonatomic) double leftToolbarItemsMaximumWidth; // @synthesize leftToolbarItemsMaximumWidth=_leftToolbarItemsMaximumWidth;
@property(readonly, nonatomic) double rightToolbarItemsInset; // @synthesize rightToolbarItemsInset=_rightToolbarItemsInset;
@property(readonly, nonatomic) double leftToolbarItemsInset; // @synthesize leftToolbarItemsInset=_leftToolbarItemsInset;
@property(retain, nonatomic) NSArray *rightApplicationToolbarItems; // @synthesize rightApplicationToolbarItems=_rightApplicationToolbarItems;
@property(retain, nonatomic) NSArray *leftApplicationToolbarItems; // @synthesize leftApplicationToolbarItems=_leftApplicationToolbarItems;
- (id)firstLaunchCoachingTipShownUserDefaultKey;
@property(readonly, nonatomic) id coachingTipsButton;
- (void)hideFirstLaunchCoachingTipIfNecessary;
- (_Bool)isFirstLaunchCoachingTipShowing;
- (void)showFirstLaunchCoachingTipIfNecessary;
- (void)dismissHelpWithCompletion:(CDUnknownBlockType)arg1;
- (void)showHelpWithTopicId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)toolbarButtonItemForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonForCoachingTipsWithTarget:(id)arg1 action:(SEL)arg2;
- (void)willHideCoachingTips;
- (void)willShowCoachingTips;
- (void)dismissCoachingTips;
- (void)toggleCoachingTips:(id)arg1;
- (id)imageViewFromSnapshotOfView:(id)arg1;
- (_Bool)modalToolbarSupportsUndo;
@property(readonly, nonatomic, getter=isPresentingModalViewController) _Bool presentingModalViewController;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)p_stopListeningForVoiceOverNotifications;
- (void)p_voiceOverStatusDidChange;
- (void)p_startListeningForVoiceOverNotifications;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;
- (id)toolbarButtonForModalDone;
- (id)toolbarButtonForUndoWithIsModal:(_Bool)arg1;
@property(readonly, nonatomic) NSString *toolbarButtonModalGearImageName;
- (id)toolbarButtonWithImageName:(id)arg1 disabledImageName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)toolbarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)toolbarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 isModal:(_Bool)arg4;
@property(readonly, nonatomic) UIColor *applicationToolbarBackgroundColor;
@property(readonly, nonatomic) UIColor *applicationToolbarTintColor;
@property(readonly, nonatomic) UIColor *applicationToolbarTitleColor;
@property(readonly, nonatomic) UIColor *applicationBackgroundColor;
- (void)willSetupApplicationToolbar;
@property(readonly, nonatomic) _Bool isLayoutBelowApplicationToolbar;
@property(readonly, nonatomic) _Bool isViewVisible;
- (void)dealloc;

@end


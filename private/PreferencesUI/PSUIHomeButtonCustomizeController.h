//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSUICircleSegmentedControlDelegate.h"
#import "SBSHardwareButtonEventConsuming.h"

@class BFFPaneHeaderView, NSString, PSUICircleSegmentedControl, UITapGestureRecognizer;

@interface PSUIHomeButtonCustomizeController : UIViewController <PSUICircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming>
{
    BFFPaneHeaderView *_headerView;
    PSUICircleSegmentedControl *_segmentedControl;
    UITapGestureRecognizer *_menuButtonRecognizer;
    id <BSInvalidatable> _eventConsumerToken;
    _Bool _visible;
    _Bool _forceFeelValueChanged;
    _Bool _reachabilityEnabled;
    _Bool _usesDoneButton;
    id <PSUIHomeButtonCustomizeControllerDelegate> _delegate;
}

@property(nonatomic) _Bool usesDoneButton; // @synthesize usesDoneButton=_usesDoneButton;
@property(nonatomic) __weak id <PSUIHomeButtonCustomizeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)segmentedControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2;
- (void)_makeConstraints;
- (void)barButtonTapped;
- (void)setListeningForHomeButtonPresses:(_Bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updateDetailText;
- (void)setForceFeel:(unsigned long long)arg1;
- (unsigned long long)getForceFeel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


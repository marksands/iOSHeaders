//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UIStackView, UIView;
@protocol SBUIActionPlatterViewControllerDelegate;

@interface SBUIActionPlatterViewController : UIViewController <UIGestureRecognizerDelegate>
{
    struct {
        unsigned int actionPlatterViewControllerShouldRespondToTouches:1;
    } _delegateRespondsTo;
    UIStackView *_stackView;
    UIView *_keylinesContainerView;
    UISelectionFeedbackGenerator *_feedbackRetargetBehavior;
    _Bool _reversesActions;
    NSArray *_actions;
    UILongPressGestureRecognizer *_gestureRecognizer;
    long long _imagePosition;
    id <SBUIActionPlatterViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBUIActionPlatterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) _Bool reversesActions; // @synthesize reversesActions=_reversesActions;
@property(readonly, nonatomic) __weak UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_updateKeylineViews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithActions:(id)arg1 gestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


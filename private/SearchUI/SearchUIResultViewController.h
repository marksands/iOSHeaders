//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SearchUIReplicatorView, SearchUIResultTableViewController, SearchUISearchField, UIView;

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate>
{
    SearchUIResultTableViewController *_resultTableViewController;
    SearchUIReplicatorView *_replicatorView;
    id <SearchUIResultViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchUIResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) SearchUIReplicatorView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(retain) SearchUIResultTableViewController *resultTableViewController; // @synthesize resultTableViewController=_resultTableViewController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (id)contentScrollView;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)updateWithResultSections:(id)arg1;
@property(nonatomic) _Bool shouldUseInsetRoundedSections;
@property(nonatomic) _Bool shouldHideResultsUnderKeyboard;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener;
@property(retain, nonatomic) SearchUISearchField *searchField;
@property(nonatomic) unsigned long long style;
- (unsigned long long)edgesForExtendedLayout;
- (void)didTap;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3;
@property(retain, nonatomic) UIView *footerView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


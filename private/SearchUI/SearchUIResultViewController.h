//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SearchUIKeyboardableTableViewScrollDelegate.h"
#import "SearchUITableViewTesting.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SearchUIReplicatorView, SearchUIResultTableViewController, SearchUISearchField, UIView;

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewScrollDelegate, SearchUITableViewTesting>
{
    _Bool _shouldMonitorScrollingPastBottomOfContent;
    CDUnknownBlockType tableViewWillUpdateHandler;
    CDUnknownBlockType tableViewDidUpdateHandler;
    CDUnknownBlockType cellWillDisplayHandler;
    SearchUIResultTableViewController *_resultTableViewController;
    SearchUIReplicatorView *_replicatorView;
    NSString *_previousSearchString;
    id <SearchUIResultViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldMonitorScrollingPastBottomOfContent; // @synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent;
@property(nonatomic) __weak id <SearchUIResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *previousSearchString; // @synthesize previousSearchString=_previousSearchString;
@property(retain) SearchUIReplicatorView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(retain) SearchUIResultTableViewController *resultTableViewController; // @synthesize resultTableViewController=_resultTableViewController;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler; // @synthesize cellWillDisplayHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler; // @synthesize tableViewDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler; // @synthesize tableViewWillUpdateHandler;
- (void).cxx_destruct;
- (void)tapAtIndexPath:(id)arg1;
- (id)currentTableModel;
- (void)performScrollTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)contentScrollView;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (void)updateWithResultSections:(id)arg1 resetScrollPoint:(_Bool)arg2;
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
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
@property(retain, nonatomic) UIView *footerView;
- (void)didBeginScrolling;
- (void)didScrollPastBottomOfContent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


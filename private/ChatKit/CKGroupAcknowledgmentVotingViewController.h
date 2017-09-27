//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKAcknowledgmentVotingViewAnimatorDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CKAcknowledgmentVotingViewAnimator, CKAggregateAcknowledgmentChatItem, CKGroupAcknowledgmentVotingLayout, NSArray, NSString, UIButton, UICollectionView, UITapGestureRecognizer, _CKAcknowledgmentVoteCountView;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>
{
    NSArray *_tallies;
    CKAggregateAcknowledgmentChatItem *_chatItem;
    UICollectionView *_collectionView;
    CKGroupAcknowledgmentVotingLayout *_layout;
    CKAcknowledgmentVotingViewAnimator *_animator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIButton *_collapseButton;
    _CKAcknowledgmentVoteCountView *_currentlyExpandedVoteCountView;
    NSArray *_sortedAnimatorModelItems;
}

@property(copy, nonatomic) NSArray *sortedAnimatorModelItems; // @synthesize sortedAnimatorModelItems=_sortedAnimatorModelItems;
@property(retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView; // @synthesize currentlyExpandedVoteCountView=_currentlyExpandedVoteCountView;
@property(retain, nonatomic) UIButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(retain, nonatomic) NSArray *tallies; // @synthesize tallies=_tallies;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withGestureRecognizer:(id)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1;
- (void)_collapseCollectionView;
- (void)_handleCollapseButton:(id)arg1;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (void)_layoutCollapseButton;
- (void)_setupTallies;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMessagePartChatItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


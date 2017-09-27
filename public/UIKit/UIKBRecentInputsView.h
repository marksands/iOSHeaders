//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _verticalLayout;
    UICollectionView *_collectionView;
    NSArray *_recentInputStrings;
    UICollectionViewFlowLayout *_flowLayout;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NSArray *recentInputStrings; // @synthesize recentInputStrings=_recentInputStrings;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)displayLayer:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupCollectionView;
- (void)setRecentInputs:(id)arg1;
- (void)setVerticalLayout:(_Bool)arg1;
- (unsigned long long)focusableVariantCount;
- (id)selectedRecentInputString;
- (void)refreshSelectedRecent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


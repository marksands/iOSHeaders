//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSIndexPath *_startScrollingIndexPath;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSIndexPath *startScrollingIndexPath; // @synthesize startScrollingIndexPath=_startScrollingIndexPath;
- (void).cxx_destruct;
- (void)_panGestureRecognized:(id)arg1;
- (struct CGPoint)_collectionViewBoundsCenter;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, UICollectionViewLayoutAttributes;

@protocol SKUIStorePageCollectionViewLayout <NSObject>
@property(nonatomic) _Bool rendersWithPerspective;
@property(nonatomic) _Bool rendersWithParallax;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
@property(copy, nonatomic) NSString *backdropGroupName;
- (NSArray *)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForUnpinnedItemAtIndexPath:(NSIndexPath *)arg1;
@end


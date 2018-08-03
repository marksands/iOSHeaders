//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, PUModelTileTransform, PUOneUpTilingLayout;

@protocol PUOneUpTilingLayoutDelegate <NSObject>

@optional
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 disableInitialZoomToFillForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)layout:(PUOneUpTilingLayout *)arg1 accessoryOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 minimumVisibleContentHeightForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowAccessoryForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)layout:(PUOneUpTilingLayout *)arg1 contentOffsetForItemAtIndexPath:(NSIndexPath *)arg2;
- (PUModelTileTransform *)layout:(PUOneUpTilingLayout *)arg1 modelTileTransformForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)layout:(PUOneUpTilingLayout *)arg1 loadingIndicatorSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowProgressIndicatorForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)alphaForReviewScreenBarsInLayout:(PUOneUpTilingLayout *)arg1;
- (_Bool)layoutShouldShowReviewScreenScrubberBar:(PUOneUpTilingLayout *)arg1;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldShowPlayButtonForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)layout:(PUOneUpTilingLayout *)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)layout:(PUOneUpTilingLayout *)arg1 badgeSizeForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)layout:(PUOneUpTilingLayout *)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
- (double)layout:(PUOneUpTilingLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
@end


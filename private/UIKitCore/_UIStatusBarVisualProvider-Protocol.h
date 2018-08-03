//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOrderedSet, NSSet, NSString, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarIdentifier, _UIStatusBarRegion, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarVisualProvider <NSObject>
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property(nonatomic) __weak _UIStatusBar *statusBar;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)actionable:(id <_UIStatusBarActionable>)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1;
- (void)statusBarRegionsUpdated;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
@end


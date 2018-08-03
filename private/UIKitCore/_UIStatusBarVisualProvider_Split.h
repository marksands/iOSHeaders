//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

@class NSDictionary, NSLayoutConstraint, NSTimer, UILayoutGuide, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement *_serviceNamePlacement;
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;
    _UIStatusBarDisplayItemPlacement *_batteryChargingPlacement;
    UILayoutGuide *_cutoutLayoutGuide;
    UILayoutGuide *_mainRegionsLayoutGuide;
    NSLayoutConstraint *_leadingBottomConstraint;
    NSLayoutConstraint *_expandedLeadingLowerTopConstraint;
    NSTimer *_pillTimer;
    NSTimer *_systemUpdatesTimer;
    NSTimer *_batteryExpansionTimer;
    NSTimer *_airplaneModeIgnoreChangesTimer;
}

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
+ (id)expandedFont;
+ (id)normalFont;
+ (struct NSDirectionalEdgeInsets)expandedEdgeInsets;
+ (struct NSDirectionalEdgeInsets)trailingEdgeInsets;
+ (struct NSDirectionalEdgeInsets)leadingEdgeInsets;
+ (struct NSDirectionalEdgeInsets)_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(_Bool)arg2;
+ (double)baseIconScale;
+ (double)lowerExpandedBaselineOffset;
+ (double)baselineBottomInset;
+ (id)pillFont;
+ (struct CGSize)pillSize;
+ (double)pillCenteringEdgeInset;
+ (double)trailingCenteringEdgeInset;
+ (double)leadingCenteringEdgeInset;
+ (double)notchBottomCornerRadius;
+ (double)notchTopCornerRadius;
+ (struct CGSize)notchSize;
+ (double)referenceScale;
+ (double)referenceWidth;
+ (double)cornerRadius;
+ (double)height;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
@property(retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer; // @synthesize airplaneModeIgnoreChangesTimer=_airplaneModeIgnoreChangesTimer;
@property(retain, nonatomic) NSTimer *batteryExpansionTimer; // @synthesize batteryExpansionTimer=_batteryExpansionTimer;
@property(retain, nonatomic) NSTimer *systemUpdatesTimer; // @synthesize systemUpdatesTimer=_systemUpdatesTimer;
@property(retain, nonatomic) NSTimer *pillTimer; // @synthesize pillTimer=_pillTimer;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingLowerTopConstraint; // @synthesize expandedLeadingLowerTopConstraint=_expandedLeadingLowerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint; // @synthesize leadingBottomConstraint=_leadingBottomConstraint;
@property(retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide; // @synthesize mainRegionsLayoutGuide=_mainRegionsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *cutoutLayoutGuide; // @synthesize cutoutLayoutGuide=_cutoutLayoutGuide;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement; // @synthesize batteryChargingPlacement=_batteryChargingPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // @synthesize pillIconPlacement=_pillIconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement; // @synthesize serviceNamePlacement=_serviceNamePlacement;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (void).cxx_destruct;
- (void)setExpanded:(_Bool)arg1;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_disableSystemUpdates;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_resetBattery;
- (void)_collapseBattery;
- (void)_stopBatteryCollapseTimer;
- (id)_removalAnimationForBatteryCharging;
- (id)_additionAnimationForBatteryCharging;
- (struct CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (struct CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (id)animationForAirplaneMode;
- (double)airplaneObstacleFadeOutDuration;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForBackgroundActivityIcon;
- (void)_switchPillToTimeWithUpdate:(_Bool)arg1;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;
- (void)_updateDataForBackgroundActivity:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (void)updateDataForService:(id)arg1;
- (_Bool)canFixupDisplayItemAttributes;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)dataUpdated:(id)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)willUpdateWithData:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)styleAttributes;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end


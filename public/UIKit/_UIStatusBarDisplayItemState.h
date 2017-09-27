//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIStatusBarPrioritized.h"

@class NSMutableArray, NSMutableSet, NSSet, NSString, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarDisplayItemPlacementState;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemState : NSObject <_UIStatusBarPrioritized>
{
    _Bool _wasEnabled;
    _Bool _wasVisible;
    _Bool _dataEnabled;
    _Bool _updated;
    _Bool _floating;
    NSString *_identifier;
    _UIStatusBar *_statusBar;
    NSMutableArray *_placementStates;
    long long _currentPlacementStateIndex;
    long long _previousPlacementStateIndex;
    long long _enabilityOverride;
    long long _enabilityStatus;
    long long _visibilityStatus;
    _UIStatusBarAnimation *_addingAnimation;
    _UIStatusBarAnimation *_removingAnimation;
    NSMutableSet *_animations;
}

+ (void)setupExclusionsBetweenDisplayItemStates:(id)arg1 visualProvider:(id)arg2;
+ (id)stateForDisplayItemWithIdentifier:(id)arg1 statusBar:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) _UIStatusBarAnimation *removingAnimation; // @synthesize removingAnimation=_removingAnimation;
@property(retain, nonatomic) _UIStatusBarAnimation *addingAnimation; // @synthesize addingAnimation=_addingAnimation;
@property(nonatomic) long long visibilityStatus; // @synthesize visibilityStatus=_visibilityStatus;
@property(nonatomic) long long enabilityStatus; // @synthesize enabilityStatus=_enabilityStatus;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) _Bool dataEnabled; // @synthesize dataEnabled=_dataEnabled;
@property(nonatomic) long long enabilityOverride; // @synthesize enabilityOverride=_enabilityOverride;
@property(nonatomic) long long previousPlacementStateIndex; // @synthesize previousPlacementStateIndex=_previousPlacementStateIndex;
@property(nonatomic) _Bool wasVisible; // @synthesize wasVisible=_wasVisible;
@property(nonatomic) _Bool wasEnabled; // @synthesize wasEnabled=_wasEnabled;
@property(nonatomic) long long currentPlacementStateIndex; // @synthesize currentPlacementStateIndex=_currentPlacementStateIndex;
@property(retain, nonatomic) NSMutableArray *placementStates; // @synthesize placementStates=_placementStates;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) long long priority;
@property(readonly, copy, nonatomic) NSSet *potentialPlacementRegionIdentifiers;
- (_Bool)isCurrentPlacement:(id)arg1;
- (_Bool)prepareAnimation:(id)arg1 withDisplayItem:(id)arg2;
- (id)_animationForDisplayItem:(id)arg1 withUpdateAnimation:(id)arg2;
- (void)_cancelObsoleteAnimations;
- (id)_updateForUpdatedData:(id)arg1 updatedStyleAttributes:(id)arg2 updatedEnability:(id)arg3;
- (id)_updateForItem:(id)arg1 data:(id)arg2 styleAttributes:(id)arg3;
- (_Bool)_itemMayBeEnabled:(id)arg1;
- (id)updateWithData:(id)arg1 styleAttributes:(id)arg2;
- (void)updatePlacement;
- (void)_updatePlacementWithRecursionBlock:(CDUnknownBlockType)arg1;
- (void)_updateStatuses;
- (void)prepareForUpdate;
- (id)placementStateForPlacement:(id)arg1;
- (void)addPlacement:(id)arg1 inRegion:(id)arg2;
- (_Bool)_updateToEnabledPlacementState;
- (void)updateToNextEnabledPlacement;
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
- (_Bool)hasRunningAnimations;
@property(readonly, nonatomic, getter=isEnabledIgnoringAnimations) _Bool enabledIgnoringAnimations;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;

@end


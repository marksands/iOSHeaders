//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIDraggable.h"
#import "_UIExcludable.h"
#import "_UIForceLevelClassifierDelegate.h"
#import "_UITouchable.h"

@class NSArray, NSMutableArray, NSMutableSet, NSObservation, NSObservationSource, NSSet, NSString, UIGestureEnvironment, UIView, _UIForceLevelClassifier, _UITouchForceObservable;

@interface UIGestureRecognizer : NSObject <_UIForceLevelClassifierDelegate, _UIExcludable, _UITouchable, _UIDraggable>
{
    struct {
        unsigned int delegateShouldBegin:1;
        unsigned int delegateCanPrevent:1;
        unsigned int delegateCanBePrevented:1;
        unsigned int delegateShouldRecognizeSimultaneously:1;
        unsigned int delegateShouldReceiveTouch:1;
        unsigned int delegateShouldReceivePress:1;
        unsigned int delegateShouldRequireFailure:1;
        unsigned int delegateShouldBeRequiredToFail:1;
        unsigned int delegateFailed:1;
        unsigned int privateDelegateShouldBegin:1;
        unsigned int privateDelegateCanPrevent:1;
        unsigned int privateDelegateCanBePrevented:1;
        unsigned int privateDelegateShouldRecognizeSimultaneously:1;
        unsigned int privateDelegateShouldReceiveTouch:1;
        unsigned int privateDelegateShouldReceivePress:1;
        unsigned int privateDelegateShouldRequireFailure:1;
        unsigned int privateDelegateShouldBeRequiredToFail:1;
        unsigned int subclassShouldRequireFailure:1;
        unsigned int subclassShouldBeRequiredToFail:1;
        unsigned int hasSubclassDynamicFailureRequirements:1;
        unsigned int hasDelegateDynamicFailureRequirements:1;
        unsigned int subclassTouchesEstimatedPropertiesUpdated:1;
        unsigned int queriedFailureRequirements:1;
        unsigned int cancelsTouchesInView:1;
        unsigned int delaysTouchesBegan:1;
        unsigned int delaysTouchesEnded:1;
        unsigned int disabled:1;
        unsigned int dirty:1;
        unsigned int delivered:1;
        unsigned int deliveredEndedOrCancelled:1;
        unsigned int continuous:1;
        unsigned int requiresDelayedBegan:1;
        unsigned int willBeginAfterSatisfyingFailureRequirements:1;
        unsigned int requiresSystemGesturesToFail:1;
        unsigned int acceptsFailureRequirements:1;
        unsigned int requiresExclusiveTouchType:1;
        unsigned int initialTouchTypeIsValid:1;
        unsigned int forceRequirementSatisfied:1;
        unsigned int wantsDragEvents:1;
        unsigned int isDynamicGesture:1;
    } _gestureFlags;
    NSMutableArray *_targets;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedPresses;
    UIView *_view;
    double _lastTouchTimestamp;
    double _firstEventTimestamp;
    long long _state;
    long long _allowedTouchTypes;
    long long _initialTouchType;
    NSMutableSet *_internalActiveTouches;
    _UIForceLevelClassifier *_forceClassifier;
    long long _requiredPreviewForceState;
    _UITouchForceObservable *_touchForceObservable;
    NSObservation *_touchForceObservableAndClassifierObservation;
    NSMutableArray *_forceTargets;
    unsigned long long _forcePressCount;
    NSObservationSource *_beganObservable;
    NSMutableSet *_failureRequirements;
    NSMutableSet *_failureDependents;
    NSMutableSet *_activeEvents;
    _Bool _keepTouchesOnContinuation;
    id <UIGestureRecognizerDelegate> _delegate;
    NSArray *_allowedPressTypes;
    NSString *_name;
    UIGestureEnvironment *_gestureEnvironment;
}

+ (_Bool)_supportsTouchContinuation;
+ (_Bool)_shouldUseLinearForceLevelClassifier;
+ (_Bool)_shouldSupportStylusTouches;
+ (_Bool)_shouldDefaultToTouches;
@property(nonatomic) UIGestureEnvironment *gestureEnvironment; // @synthesize gestureEnvironment=_gestureEnvironment;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *allowedPressTypes; // @synthesize allowedPressTypes=_allowedPressTypes;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setKeepTouchesOnContinuation:) _Bool _keepTouchesOnContinuation; // @synthesize _keepTouchesOnContinuation;
- (void).cxx_destruct;
- (id)_defaultAllowedPressTypes;
- (id)_defaultAllowedTouchTypes;
@property(copy, nonatomic) NSArray *allowedTouchTypes;
- (void)_invalidateInitialTouchType;
- (void)_setInitialTouchType:(long long)arg1;
- (_Bool)_touchTypeIsAllowed:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)_affectedByGesture:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(_Bool)arg3;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_briefDescription;
- (id)_rawBriefDescription;
- (void)_ensureForceObservationChain;
- (unsigned long long)_forcePressCount;
- (void)_removeForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_addForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (void)_setForceLevelClassifier:(id)arg1;
- (id)_forceLevelClassifier;
- (id)_touchForceObservable;
- (_Bool)_requiredPreviewForceStateSatisfiedByForceLevel:(long long)arg1;
- (long long)currentPreviewForceState;
- (void)setRequiredPreviewForceState:(long long)arg1;
- (long long)requiredPreviewForceState;
- (long long)_currentForceLevel;
- (void)_setRequiredForceLevel:(long long)arg1;
- (long long)_requiredForceLevel;
- (void)_requiredGestureRecognizerCompleted:(id)arg1;
- (_Bool)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1;
- (_Bool)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1;
- (_Bool)_forceRequirementSatisfied;
- (_Bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (_Bool)_inForceCapableEnvironment;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (_Bool)_acceptsFailureRequirements;
- (void)_setAcceptsFailureRequiments:(_Bool)arg1;
- (void)removeFailureRequirement:(id)arg1;
@property(readonly, nonatomic) NSSet *_failureDependents;
@property(readonly, nonatomic) NSSet *_failureRequirements;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)_removeFailureDependent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (_Bool)_canExcludeOtherExcludables;
- (void)_exclude;
- (void)_cancelRecognition;
- (_Bool)_isDirty;
- (void)_setDirty;
- (_Bool)_isExcludedByExcludable:(id)arg1;
- (_Bool)_delegateCanPreventGestureRecognizer:(id)arg1;
- (_Bool)_delegateCanBePreventedByGestureRecognizer:(id)arg1;
- (id)_beganObservable;
- (_Bool)_shouldBegin;
- (_Bool)_shouldReceivePress:(id)arg1;
- (_Bool)_delegateShouldReceivePress:(id)arg1;
- (_Bool)_delegateShouldReceiveTouch:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (_Bool)_shouldReceiveDragEvent:(id)arg1;
- (long long)_depthFirstViewCompare:(id)arg1;
- (_Bool)_isActive;
- (_Bool)_isRecognized;
- (_Bool)_requiresGestureRecognizerToFail:(id)arg1;
- (void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2;
- (void)_enqueueDelayedPressesToSend;
- (void)_enqueueDelayedTouchesToSend;
- (void)_enqueueDelayedTouchesAndPressesToSend;
- (void)_enqueueDelayedPressToSend:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_clearDelayedPresses;
- (void)_clearDelayedTouches;
- (void)_pressWasCancelled:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (void)_delayPressesForEventIfNeeded:(id)arg1;
- (void)_delayTouchesForEventIfNeeded:(id)arg1;
- (void)_delayPressesForEvent:(id)arg1 inPhase:(long long)arg2;
- (void)_delayTouchesForEvent:(id)arg1 inPhase:(long long)arg2;
- (void)_delayPress:(id)arg1 forEvent:(id)arg2;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_ignoreActiveEvents;
- (double)_distanceBetweenTouches:(id)arg1;
- (struct CGPoint)_centroidOfTouches:(id)arg1 excludingEnded:(_Bool)arg2;
- (id)_activeTouchesForEvent:(id)arg1;
- (id)_allActiveTouches;
- (void)ignorePress:(id)arg1 forEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)addTouchesFromGestureRecognizer:(id)arg1;
- (void)transferTouchesFromGestureRecognizer:(id)arg1;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2 byCancellingTouches:(_Bool)arg3;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2;
- (void)_addTouch:(id)arg1 forEvent:(id)arg2;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_draggingEndedWithEvent:(id)arg1;
- (void)_draggingExitedWithEvent:(id)arg1;
- (void)_draggingUpdatedWithEvent:(id)arg1;
- (void)_draggingEnteredWithEvent:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_registerTouches:(id)arg1 forEstimationUpdatesWithEvent:(id)arg2;
- (void)_updateForceClassifierWithEvent:(id)arg1;
- (long long)_exclusiveDirectionalPressAxis;
- (_Bool)_wantsPartialTouchSequences;
- (id)_delayedTouches;
@property(readonly, nonatomic) double lastTouchTimestamp;
@property(nonatomic) _Bool requiresExclusiveTouchType;
@property(nonatomic, getter=_requiresSystemGesturesToFail, setter=_setRequiresSystemGesturesToFail:) _Bool requiresSystemGesturesToFail;
- (void)setState:(long long)arg1;
@property(readonly, nonatomic) long long state;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) _Bool delaysTouchesEnded;
@property(nonatomic) _Bool delaysTouchesBegan;
@property(nonatomic) _Bool cancelsTouchesInView;
- (void)setView:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (id)stringValue;
- (void)_resetGestureRecognizer;
- (void)reset;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_setWantsDragEvents:(_Bool)arg1;
- (_Bool)_wantsDragEvents;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *_pairedGestureIdentifiers;
- (id)_pairedGestureIdentifiersAndCreate:(_Bool)arg1;
- (void)_detach;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


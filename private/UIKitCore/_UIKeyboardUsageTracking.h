//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIKeyboardUsageTracking : NSObject
{
}

+ (void)variantDeleteIncrement;
+ (void)showVariantsIncrement;
+ (void)letterCaseToggleIncrement;
+ (void)keyboardSupportsTouch:(_Bool)arg1;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)appAutofillExtraKeyTapped;
+ (void)appAutofillFilled;
+ (void)appAutofillDetectedDecrement;
+ (void)appAutofillDetectedIncrement;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;
+ (void)restAndTypeTriggered;
+ (void)normalPunctuationKeyCount;
+ (void)undoKeyCount;
+ (void)redoKeyCount;
+ (void)panAlternateKeyFlickDownCount;
+ (void)singleStringKeyFlickUpCount;
+ (void)dualStringsKeyFlickUpCount;
+ (void)keyboardReachabilityDistribution:(double)arg1;
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;
+ (void)keyboardGestureOneFingerForcePress:(_Bool)arg1 withPressCount:(int)arg2;
+ (void)keyboardGestureOneFingerForcePan:(_Bool)arg1;
+ (void)keyboardGestureTwoFingerTap:(_Bool)arg1 withTapCount:(int)arg2;
+ (void)showLowercaseKeyplanePreference:(_Bool)arg1;
+ (void)showCharacterPreviewPreference:(_Bool)arg1;
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(_Bool)arg2 index:(unsigned long long)arg3;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)keyboardGestureSetPredictionPreference:(_Bool)arg1;
+ (void)inputSwitcherSetPredictionPreference:(_Bool)arg1;
+ (void)predictionViewState:(_Bool)arg1 forInputMode:(id)arg2;
+ (void)keyboardExtensionsOnDevice;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (UIStorage)
- (id)_accessibilityProxyView;
- (id)_accessibilityProxyViewAncestorWhenMissingWindow;
- (_Bool)_accessibilityApplicationHandleButtonAction:(int)arg1;
- (id)_accessibilitySiriContentElementsWithSemanticContext;
- (id)_accessibilityElementsWithSemanticContext:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1;
- (id)_accessibilityAncestorFocusParcel;
- (id)_accessibilityExtendedLabelForFocusParcelWithLabel:(id)arg1;
- (unsigned long long)_accessibilityFocusParcelChildrenCount:(unsigned long long)arg1;
- (_Bool)_accessibilityIsFocusParcel;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(_Bool)arg1 focusableItems:(_Bool)arg2 exclusions:(id)arg3 classExclusions:(id)arg4;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(_Bool)arg1 focusableItems:(_Bool)arg2 exclusions:(id)arg3;
- (id)_accessibilitySubviews;
- (_Bool)_isAccessibilityExplorerElement;
- (id)_accessibilitySortExplorerElements:(id)arg1;
- (unsigned long long)_accessibilityExplorerElementReadPriority;
- (id)_accessibilityFrameDelegate;
- (id)_accessibilitySiriContentNativeFocusableElements;
- (id)_accessibilityNativeFocusableElements:(id)arg1;
- (id)_accessibilityExplorerElements;
- (_Bool)_accessibilityIsContainedByVideoElement;
- (_Bool)_accessibilityIsContainedByPreferredNativeFocusElement;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityRetrieveHeaderElements;
- (id)_accessibilityNativeFocusAncestor;
- (_Bool)_accessibilityShouldSpeakExplorerElementsAfterFocus;
- (_Bool)_accessibilityShouldIgnoreSoundForFailedMoveAttempt;
- (_Bool)_accessibilityNativeFocusPreferredElementIsValid;
- (_Bool)_accessibilityShouldBeExplorerElementWithoutSystemFocus;
- (id)_accessibilityNativeFocusPreferredElement;
- (_Bool)_accessibilityCanBecomeNativeFocused;
- (_Bool)_accessibilitySetNativeFocus;
- (_Bool)_accessibilityShouldSetNativeFocusWhenATVFocused;
- (_Bool)_accessibilityViewHierarchyHasNativeFocus;
- (_Bool)_accessibilityFullscreenVideoViewIsVisible;
- (_Bool)_accessibilityUIKitHasNativeFocus;
- (_Bool)_accessibilityHasNativeFocus;
- (id)_accessibilitySpeakThisPreferredUnderlineColor;
- (id)_accessibilitySpeakThisPreferredHighlightColor;
- (_Bool)_accessibilitySpeakThisCanBeHighlighted;
- (_Bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (_Bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect *)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1 string:(id)arg2;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (unsigned long long)_accessibilitySpeakThisMaximumNumberOfElements;
- (void)_accessibilitySetIgnoreDelegate:(_Bool)arg1;
- (_Bool)_accessibilityIgnoreDelegate;
- (_Bool)_accessibilityMimicsTextInputResponder;
- (_Bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)_accessibilityActivateDragWithDescriptorDictionary:(id)arg1 forAssistiveTechnology:(id)arg2;
- (id)dragDescriptorMatchingDictionary:(id)arg1;
- (struct CGRect)_accessibilityScreenRectForSceneReferenceRect:(struct CGRect)arg1;
- (struct CGPoint)_accessibilityScreenPointForSceneReferencePoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityHandleMagicTap;
- (_Bool)_accessibilityHandleMagicTapForPronunciation;
- (void)_setAccessibilityIsRealtimeElementBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityActivateBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityIncrementBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityDecrementBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityGuideElementHeaderTextBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityLinkedUIElementsBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityElementsBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityHeaderElementsBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityNavigationStyleBlock:(CDUnknownBlockType)arg1;
- (void)_setShouldGroupAccessibilityChildrenBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityViewIsModalBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityElementsHiddenBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityLanguageBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityActivationPointBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityPathBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityFrameBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityTraitsBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityValueBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityHintBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityIdentifierBlock:(CDUnknownBlockType)arg1;
- (void)_setAccessibilityLabelBlock:(CDUnknownBlockType)arg1;
- (void)_setIsAccessibilityElementBlock:(CDUnknownBlockType)arg1;
- (void *)_accessibilityGetBlockForAttribute:(long long)arg1;
- (void)_accessibilitySetBlock:(void *)arg1 forAttribute:(long long)arg2;
- (void)_accessibilityRemoveActionBlockForKey:(unsigned int)arg1;
- (void)_accessibilityRemoveAllActionBlocks;
- (void)_accessibilityActionBlock:(CDUnknownBlockType *)arg1 andValue:(id *)arg2 forKey:(unsigned int)arg3;
- (_Bool)_accessibilityHasActionBlockForKey:(unsigned int)arg1;
- (_Bool)_accessibilityInternalHandleStartStopToggle;
- (void)_accessibilitySetActionBlock:(CDUnknownBlockType)arg1 withValue:(id)arg2 forKey:(unsigned int)arg3;
@end


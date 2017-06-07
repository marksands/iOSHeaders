//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NAUITextStyleDescriptor;

@interface UIView (NAUIAdditions)
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(CDUnknownBlockType)arg2 animatablesBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)naui_endDisablingAnimations;
+ (void)naui_beginDisablingAnimations;
- (void)naui_removeNamedConstraints;
- (void)naui_removeConstraintsNamed:(id)arg1;
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;
- (id)_naui_constraintsNamed:(id)arg1;
- (id)_naui_constraintsByNameDictionary:(_Bool)arg1;
- (_Bool)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;
- (_Bool)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;
- (void)naui_addConstraints:(id)arg1;
- (void)naui_addConstraint:(id)arg1;
- (void)naui_removeConstraints:(id)arg1;
- (void)naui_removeConstraint:(id)arg1;
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;
- (_Bool)naui_isProperDescendantOfView:(id)arg1;
- (void)naui_addAutoLayoutSubviews:(id)arg1;
- (void)naui_addAutoLayoutSubview:(id)arg1;
- (void)naui_performAnimateableConstraintChanges:(CDUnknownBlockType)arg1;
- (_Bool)naui_canAnimate;
@property(retain, nonatomic, setter=naui_setDynamicFontTextStyleDescriptor:) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
- (void)naui_showAllViewBoundsRecursively:(_Bool)arg1;
@end


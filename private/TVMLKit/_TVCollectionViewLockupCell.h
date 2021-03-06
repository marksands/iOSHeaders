//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TVAuxiliaryViewSelecting.h"

@class NSString, UIMotionEffectGroup, UIView<TVAuxiliaryViewSelecting>;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewLockupCell : UICollectionViewCell <TVAuxiliaryViewSelecting>
{
    UIMotionEffectGroup *_motionEffectGroup;
    _Bool _pressIsAnimating;
    UIView<TVAuxiliaryViewSelecting> *__selectingView;
    _Bool _unpressOnEndAnimating;
    _Bool _allowsFocus;
}

@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)_setFocused:(_Bool)arg1 animated:(_Bool)arg2 context:(id)arg3 coordinator:(id)arg4;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_showPressState;
- (void)_setFocusDirection:(struct CGPoint)arg1;
- (void)_handleSelect;
- (id)_selectingView;
- (void)_detachMotionEffects;
- (void)_clearPressState;
- (void)_attachMotionEffects;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;
- (_Bool)_descendantsShouldHighlight;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_unapplyMotionEffect:(id)arg1;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

#import "PUToolbarViewModelChangeObserver.h"

@class NSArray, NSMutableSet, NSString, PUToolbarViewModel, UIView;

__attribute__((visibility("hidden")))
@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver>
{
    _Bool __isUpdating;
    _Bool __needsUpdateToolbarItems;
    _Bool __needsUpdateAccessoryView;
    _Bool __needsUpdateAccessoryViewTopOutset;
    _Bool __needsUpdateContainedToolbar;
    _Bool __needsUpdateAccessoryViewContainer;
    PUToolbarViewModel *_toolbarViewModel;
    long long __numberOfNestedChanges;
    NSArray *__toolbarItems;
    UIView *__accessoryView;
    double __containedToolbarHeight;
    double __accessoryViewTopOutset;
    double __minimumBackgroundHeight;
    UIToolbar *__containedToolbar;
    UIView *__accessoryViewContainer;
    NSMutableSet *__accessoryViewContainers;
}

@property(readonly, nonatomic) NSMutableSet *_accessoryViewContainers; // @synthesize _accessoryViewContainers=__accessoryViewContainers;
@property(retain, nonatomic, setter=_setAccessoryViewContainer:) UIView *_accessoryViewContainer; // @synthesize _accessoryViewContainer=__accessoryViewContainer;
@property(retain, nonatomic, setter=_setContainedToolbar:) UIToolbar *_containedToolbar; // @synthesize _containedToolbar=__containedToolbar;
@property(nonatomic, setter=_setMinimumBackgroundHeight:) double _minimumBackgroundHeight; // @synthesize _minimumBackgroundHeight=__minimumBackgroundHeight;
@property(nonatomic, setter=_setAccessoryViewTopOutset:) double _accessoryViewTopOutset; // @synthesize _accessoryViewTopOutset=__accessoryViewTopOutset;
@property(nonatomic, setter=_setContainedToolbarHeight:) double _containedToolbarHeight; // @synthesize _containedToolbarHeight=__containedToolbarHeight;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView=__accessoryView;
@property(copy, nonatomic, setter=_setToolbarItems:) NSArray *_toolbarItems; // @synthesize _toolbarItems=__toolbarItems;
@property(nonatomic, setter=_setNeedsUpdateAccessoryViewContainer:) _Bool _needsUpdateAccessoryViewContainer; // @synthesize _needsUpdateAccessoryViewContainer=__needsUpdateAccessoryViewContainer;
@property(nonatomic, setter=_setNeedsUpdateContainedToolbar:) _Bool _needsUpdateContainedToolbar; // @synthesize _needsUpdateContainedToolbar=__needsUpdateContainedToolbar;
@property(nonatomic, setter=_setNeedsUpdateAccessoryViewTopOutset:) _Bool _needsUpdateAccessoryViewTopOutset; // @synthesize _needsUpdateAccessoryViewTopOutset=__needsUpdateAccessoryViewTopOutset;
@property(nonatomic, setter=_setNeedsUpdateAccessoryView:) _Bool _needsUpdateAccessoryView; // @synthesize _needsUpdateAccessoryView=__needsUpdateAccessoryView;
@property(nonatomic, setter=_setNeedsUpdateToolbarItems:) _Bool _needsUpdateToolbarItems; // @synthesize _needsUpdateToolbarItems=__needsUpdateToolbarItems;
@property(nonatomic, setter=_setUpdating:) _Bool _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property(nonatomic, setter=_setNumberOfNestedChanges:) long long _numberOfNestedChanges; // @synthesize _numberOfNestedChanges=__numberOfNestedChanges;
@property(retain, nonatomic) PUToolbarViewModel *toolbarViewModel; // @synthesize toolbarViewModel=_toolbarViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateViewsIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateAccessoryViewContainer;
- (void)_invalidateContainedToolbar;
- (void)_updateAccessoryTopOutsetViewIfNeeded;
- (void)_invalidateAccessoryViewTopOutset;
- (void)_updateAccessoryViewIfNeeded;
- (void)_invalidateAccessoryView;
- (void)_updateToolbarItemsIfNeeded;
- (void)_invalidateToolbarItems;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_assertInsideUpdate;
- (void)_assertInsideChangeBlock;
- (void)_performChanges:(CDUnknownBlockType)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_getContainedToolbarFrame:(struct CGRect *)arg1 accessoryViewContainerFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldStretchDuringCrossfadeTransition;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


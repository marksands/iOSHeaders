//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView
{
    _UIStatusBarRoundedCornerView *_pillView;
}

- (void).cxx_destruct;
- (void)_updatePillFrame;
- (struct CGRect)_pillFrame;
- (double)extraRightPadding;
- (long long)textStyle;
- (long long)buttonType;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)usesAdvancedActions;
- (_Bool)allowsUserInteraction;
- (_Bool)canBecomeFocused;
- (_Bool)showsTouchWhenHighlighted;
- (void)removeFromSuperview;
- (void)movedToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIAlertControllerVisualStyleAlert.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleAlertTV : UIAlertControllerVisualStyleAlert
{
}

- (id)_keyCommandInputForCancelAction;
- (long long)_effectStyle;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (_Bool)placementAvoidsKeyboard;
- (double)textFieldHorizontalMargin;
- (struct UIEdgeInsets)textFieldContentInset;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (id)dimmingViewForAlertController:(id)arg1;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (double)maximumWidthForTitleAndMessageContentView;
- (double)maximumWidth;
- (double)_maximumContentWidth;
- (double)_minimumButtonWidth;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)messageLabelColor;
- (double)_marginAboveDetailMessageFirstBaseline;
- (id)_detailMessageFont;
- (id)messageLabelFont;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end


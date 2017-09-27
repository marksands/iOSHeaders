//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter;

@interface UIAlertView : UIView
{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    UIAlertView *_retainedSelf;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _defaultButtonIndex;
    long long _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    long long _alertViewStyle;
    _Bool _runsModal;
    id _context;
    _Bool _hasPreparedAlertActions;
    _Bool _isPresented;
    _Bool _alertControllerShouldDismiss;
    _Bool _handlingAlertActionShouldDismiss;
    _Bool _dismissingAlertController;
    _Bool __currentlyRunningModal;
    id _delegate;
}

+ (_Bool)_isAlertControllerShimClass;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform)arg1;
+ (_Bool)_springBoardAlertDisplayingOverApplicationAlert;
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(_Bool)arg1;
+ (struct CGSize)minimumSize;
+ (id)_alertViewForWindow:(id)arg1;
+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_remoteAlertViewWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setCurrentlyRunningModal:) _Bool _currentlyRunningModal; // @synthesize _currentlyRunningModal=__currentlyRunningModal;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_alertController;
- (void)_showByReplacingPreviousAlertAnimated:(_Bool)arg1;
- (void)_useLegacyUI:(_Bool)arg1;
- (void)_updateFrameForDisplay;
- (void)_prepareToBeReplaced;
- (id)keyboard;
- (void)setKeyboardShowsOnPopup:(_Bool)arg1;
- (void)_useUndoStyle:(_Bool)arg1;
- (_Bool)_shouldUseUndoStyle;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)_showByReplacingAlert:(id)arg1 animated:(_Bool)arg2;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setAccessoryView:(id)arg1;
- (void)replaceAlert:(id)arg1;
- (void)_prepareForDisplay;
- (int)numberOfLinesInTitle;
- (double)_buttonHeight;
- (double)_maxHeight;
- (struct CGRect)titleRect;
- (_Bool)runsModal;
- (void)setRunsModal:(_Bool)arg1;
- (_Bool)dimsBackground;
- (void)setDimsBackground:(_Bool)arg1;
- (_Bool)forceHorizontalButtonsLayout;
- (void)setForceHorizontalButtonsLayout:(_Bool)arg1;
- (long long)numberOfRows;
- (void)setNumberOfRows:(long long)arg1;
- (struct CGSize)backgroundSize;
- (id)_dimView;
- (void)setDimView:(id)arg1;
- (_Bool)isBodyTextTruncated;
- (id)taglineTextLabel;
- (id)bodyTextLabel;
- (id)titleLabel;
- (id)_titleLabel;
- (_Bool)_canShowAlerts;
- (_Bool)_isAnimating;
- (_Bool)showsOverSpringBoardAlerts;
- (void)setShowsOverSpringBoardAlerts:(_Bool)arg1;
- (id)tableView;
- (_Bool)tableShouldShowMinimumContent;
- (void)setTableShouldShowMinimumContent:(_Bool)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (int)bodyMaxLineCount;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (int)titleMaxLineCount;
- (void)setTitleMaxLineCount:(int)arg1;
- (int)suspendTag;
- (void)setSuspendTag:(int)arg1;
- (void)layoutAnimated:(_Bool)arg1;
- (void)layout;
- (long long)_currentOrientation;
- (_Bool)requiresPortraitOrientation;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)_showAnimated:(_Bool)arg1;
- (void)_performPopup:(_Bool)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(_Bool)arg2;
- (void)popupAlertAnimated:(_Bool)arg1;
- (void)popupAlertAnimated:(_Bool)arg1 atOffset:(double)arg2;
- (_Bool)groupsTextFields;
- (void)setGroupsTextFields:(_Bool)arg1;
- (void)_setTextFieldsHidden:(_Bool)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (id)textField;
- (int)textFieldCount;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (int)buttonCount;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)_buttonAtIndex:(long long)arg1;
- (void)_updateFirstOtherButtonEnabledState;
- (void)_updateButtonTitles;
- (id)buttonAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
@property(nonatomic) long long cancelButtonIndex;
- (long long)defaultButtonIndex;
- (void)setDefaultButtonIndex:(long long)arg1;
- (id)defaultButton;
- (void)setDefaultButton:(id)arg1;
- (id)_destructiveButton;
- (void)_setDestructiveButton:(id)arg1;
- (id)_defaultButton;
- (void)_setDefaultButton:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitleText:(id)arg1;
- (void)_endRunningModallyIfNecessary;
- (void)_beginRunningModallyIfNecessary;
- (void)_setIsPresented:(_Bool)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)window;
@property(nonatomic) long long alertViewStyle;
- (void)_updateMessageAndSubtitle;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)_changeButtonTitleAtIndex:(long long)arg1 toTitle:(id)arg2;
- (void)_prepareAlertActions;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end


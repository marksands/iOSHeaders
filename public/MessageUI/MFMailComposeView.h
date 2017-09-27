//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITransitionView.h"

#import "MFAutocompleteResultsTableViewControllerDelegate.h"
#import "MFComposeBodyFieldDelegate.h"
#import "MFComposeHeaderViewDelegate.h"
#import "MFDragSourceDelegate.h"
#import "MFDropTargetDelegate.h"
#import "MFMailComposeContactsSearchControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextContentViewDelegate.h"

@class MFAutocompleteResultsTableViewController, MFComposeFromView, MFComposeImageSizeView, MFComposeMultiView, MFComposeRecipientTextView, MFComposeSubjectView, MFFromAddressViewController, MFMailComposeContactsSearchController, NSInvocation, NSMutableArray, NSString, UIPickerView, UIResponder, UIScrollView, UIView, UIView<MFComposeBodyField>, UIViewController;

@interface MFMailComposeView : UITransitionView <MFComposeHeaderViewDelegate, MFAutocompleteResultsTableViewControllerDelegate, UIPopoverControllerDelegate, MFDragSourceDelegate, MFDropTargetDelegate, UITextContentViewDelegate, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate>
{
    UIScrollView *_bodyScroller;
    UIView *_headerView;
    UIView *_contentView;
    id <MFComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
    id <MFMailComposeViewDelegate> _mailComposeViewDelegate;
    UIView *_shadowView;
    MFComposeRecipientTextView *_toField;
    MFComposeRecipientTextView *_ccField;
    MFComposeRecipientTextView *_bccField;
    MFComposeRecipientTextView *_lastChangedRecipientView;
    MFComposeRecipientTextView *_activeRecipientView;
    MFComposeSubjectView *_subjectField;
    MFComposeFromView *_fromField;
    MFComposeMultiView *_multiField;
    MFComposeImageSizeView *_imageSizeField;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    UIView *_fromAddressPickerBackgroundView;
    _Bool _isDragging;
    NSMutableArray *_pendingDropRecipients;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    MFMailComposeContactsSearchController *_searchController;
    MFAutocompleteResultsTableViewController *_searchViewController;
    MFAutocompleteResultsTableViewController *_corecipientsSearchViewController;
    UIView *_corecipientsSearchTableViewSeparator;
    double _offsetBeforeSearch;
    double _keyboardIntersection;
    unsigned long long _options;
    struct CGSize _currentContentSize;
    unsigned long long _notifyingBodyField;
    unsigned long long _fromAddressPickerDisplayMode;
    unsigned int _isChangingRecipients:1;
    unsigned int _isLoading:1;
    unsigned int _isShowingPeoplePicker:1;
    unsigned int _isRotating:1;
    unsigned int _isClosing:1;
    unsigned int _isForEditing:1;
    unsigned int _isAnimationDisabled:1;
    unsigned int _shouldShowOptionalHeaders:1;
    unsigned int _hasAppeared:1;
    unsigned int _corecipientsTableVisible:1;
    UIViewController *_popoverOwner;
    id <MFMailComposeToFieldDelegate> _toFieldDelegate;
}

+ (unsigned long long)expectedFromAddressPickerDisplayModeForTraitCollection:(id)arg1;
@property(readonly, nonatomic) unsigned long long fromAddressPickerDisplayMode; // @synthesize fromAddressPickerDisplayMode=_fromAddressPickerDisplayMode;
@property(readonly, nonatomic) MFMailComposeContactsSearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) UIScrollView *bodyScroller; // @synthesize bodyScroller=_bodyScroller;
@property(readonly, nonatomic) MFComposeMultiView *multiField; // @synthesize multiField=_multiField;
@property(readonly, nonatomic) MFComposeImageSizeView *imageSizeField; // @synthesize imageSizeField=_imageSizeField;
@property(readonly, nonatomic) MFComposeFromView *fromField; // @synthesize fromField=_fromField;
@property(readonly, nonatomic) MFComposeSubjectView *subjectField; // @synthesize subjectField=_subjectField;
@property(readonly, nonatomic) MFComposeRecipientTextView *bccField; // @synthesize bccField=_bccField;
@property(readonly, nonatomic) MFComposeRecipientTextView *ccField; // @synthesize ccField=_ccField;
@property(readonly, nonatomic) MFComposeRecipientTextView *toField; // @synthesize toField=_toField;
@property(nonatomic) id <MFMailComposeToFieldDelegate> toFieldDelegate; // @synthesize toFieldDelegate=_toFieldDelegate;
@property(nonatomic) UIViewController *popoverOwner; // @synthesize popoverOwner=_popoverOwner;
@property(nonatomic) id <MFComposeRecipientTextViewDelegate> composeRecipientDelegate; // @synthesize composeRecipientDelegate=_composeRecipientViewDelegate;
@property(nonatomic) id <MFMailComposeViewDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_mailComposeViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)_headerViewOriginWithScrollViewOffsetCalculation;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (void)willDisappear;
- (void)didAppear;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(_Bool)arg2 clear:(_Bool)arg3;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(_Bool)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (id)sendingAccountProxyForComposeContactsSearchController:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didIgnoreSearchResults;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (void)clearSearchForActiveRecipientView;
- (void)cancelSearch;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (_Bool)presentSearchResults:(id)arg1;
- (void)dismissSearchResults;
- (_Bool)presentSearchResults;
- (_Bool)chooseSelectedSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectNextSearchResult;
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)menuDidHide;
- (void)_updateQuoteLevelMenu;
- (void)_updateOptionalHeaderVisibilityForceVisible:(_Bool)arg1;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)layoutForChangedComposeHeaderView:(id)arg1 size:(struct CGSize)arg2;
- (void)setScrollsToTop:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)restoreFirstResponderWithKeyboardPinning:(_Bool)arg1;
- (void)restoreFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(_Bool)arg1;
- (void)saveFirstResponder;
- (double)_heightForBottomView;
- (_Bool)isKeyboardVisible;
- (void)setKeyboardVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (void)_endPreventingScrollingToRevealSelection;
- (void)_beginPreventingScrollingToRevealSelection;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)_updateKeyboardIntersection:(struct CGRect)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (_Bool)isShowingFromAddressPickerWheel;
- (void)setFromAddressPickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFromAddressPickerVisible:(_Bool)arg1;
- (void)fromAddressPickerPopoverWasDismissed;
- (void)_setBodyShouldScrollToFirstResponder:(_Bool)arg1;
- (void)_adjustScrollerForBottomView;
- (void)_normalizeBodyFieldFrame;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (id)_focusedRecipientView;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_adjustScrollerContentSize;
- (id)_bodyField;
- (void)_dropItems:(id)arg1 recipientTextView:(id)arg2;
- (void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)dropTargetDragExited:(id)arg1;
- (void)dropTarget:(id)arg1 dragDidMoveToPoint:(struct CGPoint)arg2;
- (void)dropTarget:(id)arg1 dragEnteredAtPoint:(struct CGPoint)arg2;
- (void)_setDragging:(_Bool)arg1;
- (void)dragSource:(id)arg1 willEndInteractionWithItems:(id)arg2 dropOperation:(unsigned long long)arg3;
- (id)dragSource:(id)arg1 suggestedNameForDraggableItem:(id)arg2;
- (id)dragSource:(id)arg1 localObjectForDraggableItem:(id)arg2;
- (id)dragSource:(id)arg1 targetedPreviewForDraggableItem:(id)arg2;
- (id)dragSource:(id)arg1 draggableItemsAtPoint:(struct CGPoint)arg2;
- (_Bool)dragSource:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)_cancelDelayedPopover;
- (void)_presentDelayedPopover;
- (void)cancelDelayedPopover;
- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_updateMultiField;
- (void)_updateFromField;
- (void)_setupField:(id *)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect)arg4;
- (void)_multiFieldClicked;
@property(nonatomic, getter=isShowingPeoplePicker) _Bool showingPeoplePicker;
@property(nonatomic, getter=isChangingRecipients) _Bool changingRecipients;
@property(nonatomic, getter=isAnimationDisabled) _Bool animationDisabled;
@property(nonatomic) _Bool isForEditing;
- (void)searchResultsPopoverWasDismissed;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)setRecipientFieldsEditable:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)endEditing:(_Bool)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (id)bottomView;
- (void)toggleImageSizeFieldIfNecessary;
- (void)_endBlockingBodyScroll;
- (void)_beginBlockingBodyScroll;
- (void)_layoutSubviews:(_Bool)arg1;
- (void)_layoutSubviews:(_Bool)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3 searchResultsWereDismissed:(_Bool)arg4;
- (void)_revealSelection;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize)arg2 withPinFrame:(out struct CGRect *)arg3;
- (void)_layoutSubviews:(_Bool)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3;
- (void)_setCorecipientsTableViewVisible:(_Bool)arg1 withFieldFrame:(struct CGRect)arg2;
- (_Bool)_shouldShowCorecipientsTableView;
- (_Bool)_userInterfaceConfigurationSupportsCorecipientsTableView;
- (id)_allHeaderViews;
- (_Bool)isSearchResultsPopoverVisible;
- (void)_layoutSubviewsWithActiveRecipientView:(_Bool)arg1 changingView:(id)arg2 toSize:(struct CGSize)arg3;
- (void)_updateTextViewOriginWithHeaderFrame:(struct CGRect)arg1;
- (void)_setHeaderFrame:(struct CGRect)arg1;
- (struct CGRect)_headerFrame;
- (id)_textView;
@property(readonly, nonatomic) UIView *bodyTextView;
@property(readonly, nonatomic) UIView<MFComposeBodyField> *bodyField;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect)arg1 enclosingFrame:(struct CGRect)arg2 changingView:(id)arg3 frameToPin:(struct CGRect)arg4 wasSearching:(_Bool)arg5;
- (void)_revealSelectionIfNeededWithChangingView:(id)arg1;
- (void)_updateTextViewHeightWithHeaderFrame:(struct CGRect)arg1;
- (void)_setShadowViewVisible:(_Bool)arg1 frame:(struct CGRect)arg2;
- (struct UIEdgeInsets)layoutMargins;
- (void)composeHeaderViewClicked:(id)arg1;
- (void)_collectKeyViews:(id)arg1;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)_cancelAnimations;
- (id)_corecipientResultsTable;
- (id)_searchResultsTable;
@property(readonly, nonatomic) MFAutocompleteResultsTableViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (_Bool)_presentsSearchResultsTableAsPopover;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (void)_setUpContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


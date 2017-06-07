//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CoreSuggestionsUI/SGUIEventsAndContactsTableViewControllerDelegate-Protocol.h>
#import <CoreSuggestionsUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableSet, NSString, SGUISuggestionConfirmationController, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SGRealtimeSuggestion, SGUIBannerViewDelegate;

@interface SGUIBannerView : UIView <UIPopoverPresentationControllerDelegate, SGUIEventsAndContactsTableViewControllerDelegate>
{
    SGUISuggestionConfirmationController *_confirmationController;
    NSMutableSet *_doneSuggestions;
    NSArray *_singleBannerImageConstraints;
    NSArray *_multipleBannerImageConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_guideTopConstraint;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    id <SGRealtimeSuggestion> _suggestionBeingConfirmed;
    id <SGUIBannerViewDelegate> _delegate;
    UIButton *_closeButton;
    UIButton *_addButton;
    UILabel *_suggestionText;
    UILabel *_suggestionPrefixText;
    UIImageView *_bannerImageView;
    UIImageView *_secondaryBannerImageView;
    UIImageView *_disclosureImageView;
    NSArray *_orderedSuggestions;
}

+ (id)_disclosureChevronImage:(_Bool)arg1;
+ (id)_cancelImage;
+ (id)_contactsImage;
+ (id)_calendarImage;
+ (double)bannerHeightConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)topMarginConstant;
+ (id)buttonFont;
+ (id)subtitleFont;
+ (id)titleFont;
+ (id)bannerViewForSuggestions:(id)arg1;
+ (id)bannerViewForEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
@property(copy, nonatomic) NSArray *orderedSuggestions; // @synthesize orderedSuggestions=_orderedSuggestions;
@property(retain, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(retain, nonatomic) UIImageView *secondaryBannerImageView; // @synthesize secondaryBannerImageView=_secondaryBannerImageView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) UILabel *suggestionPrefixText; // @synthesize suggestionPrefixText=_suggestionPrefixText;
@property(retain, nonatomic) UILabel *suggestionText; // @synthesize suggestionText=_suggestionText;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <SGUIBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissPresentedViewController:(id)arg1;
- (id)_presentedControllerCancelButtonItem;
- (id)_presentedControllerDoneButtonItem;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (void)_presentModalViewController:(id)arg1 fromSourceView:(id)arg2;
- (void)_presentModalViewControllerFromButton:(id)arg1;
- (id)_presentingViewController;
- (void)_hideMe;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (unsigned long long)numberOfSuggestions;
- (_Bool)areMultipleSuggestionsPresent;
- (id)disclosureImagePressed;
@property(readonly, copy, nonatomic) UIImage *disclosureImage;
@property(readonly, copy, nonatomic) UIImage *secondaryBannerImage;
@property(readonly, copy, nonatomic) UIImage *bannerImage;
@property(readonly, copy, nonatomic) NSArray *currentSuggestionGroup;
- (void)controller:(id)arg1 doneWithSuggestion:(id)arg2;
- (id)_filterRealtimeSuggestions:(id)arg1 forClass:(Class)arg2;
- (id)popoverSourceView;
- (void)confirmEventSuggestion;
- (void)confirmContactSuggestion;
- (void)_confirmCurrentSuggestion;
- (void)_confirmSuggestion:(id)arg1;
- (void)_dismissBannerRejectSuggestion:(_Bool)arg1;
- (void)dismissBanner:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_findSuggestionsOfClass:(Class)arg1;
- (id)addButtonTitle;
- (void)updateFonts;
- (void)_updateUI;
- (void)_update;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_installLayoutConstraints;
- (void)_setupViews;
- (id)initWithSuggestions:(id)arg1;
- (id)initWithEventSuggestions:(id)arg1 contactSuggestions:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


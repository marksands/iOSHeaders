//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKUITableViewCellWithPrimaryAndSecondaryFonts.h>

@class ColorBarView, EKCalendarDate, EKUIOccurrenceTableViewCellLabel, NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSObject<OS_dispatch_source>, NSString, UIColor, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts
{
    EKUIOccurrenceTableViewCellLabel *_travelTextLabel;
    EKUIOccurrenceTableViewCellLabel *_primaryLabel;
    EKUIOccurrenceTableViewCellLabel *_secondaryLabel;
    EKUIOccurrenceTableViewCellLabel *_travelDepartureTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_topTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_bottomTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_countdownLabel;
    ColorBarView *_colorBarView;
    ColorBarView *_travelTimeColorBarView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    NSArray *_ekUIOccurrenceTableViewCellConstraints;
    _Bool _areCurrentCellConstraintsForLargeText;
    UIVisualEffectView *_primaryVisualEffectParentView;
    UIVisualEffectView *_secondaryVisualEffectParentView;
    _Bool _travelTimeTemplate;
    _Bool _invitationTemplate;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_contentBottom_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_travelTextBaseline_to_primaryTextBaseLine_Constraint;
    NSLayoutConstraint *_horizontalDividerBarBottom_to_colorBarTop_Constraint;
    NSLayoutConstraint *_contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextLeftMarginConstraint;
    NSLayoutConstraint *_timeTextRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelBaseling_to_contentBottom_Constraint;
    double _travelTime;
    UIColor *_eventCalendarColor;
    UIColor *_selectedBackGroundColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_travelTextLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTextLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    _Bool _isPast;
    _Bool _isAllDay;
    _Bool _isRecurring;
    _Bool _isBirthday;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _cancelled;
    _Bool _opaque;
    NSObject<OS_dispatch_source> *_countdownLabelUpdateTimer;
    _Bool _doesNotUseTemplate;
    _Bool _isTemplateCell;
    _Bool _isFakeInvitation;
    UIVisualEffect *_primaryVisualEffect;
    UIVisualEffect *_secondaryVisualEffect;
}

+ (id)_allDayLocalizedString;
+ (id)_nowLocalizedString;
+ (id)_tentativeAngledStripeBackground;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (double)_rightImageSpacing;
+ (_Bool)vibrant;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (id)tentativeBackgroundColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)needsReplyBackgroundColor;
+ (id)normalBackgroundColor;
+ (id)strikethroughTimeTextColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalTopTimeTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)strikethroughPrimaryTextColor;
+ (id)invitationPrimaryTextColor;
+ (id)prefixPrimaryTextColor;
+ (id)normalPrimaryTextColor;
+ (id)cancelledDeclinedColorBarColor;
+ (_Bool)requiresConstraintBasedLayout;
+ (double)cellHeightForWidth:(double)arg1;
+ (id)reuseIdentifierForEvent:(id)arg1;
+ (id)allReuseIdentifiers;
+ (id)reuseIdentifierForTemplateInvitation;
+ (id)reuseIdentifierForTemplateWithTravelTime;
+ (id)reuseIdentifierForTemplate;
+ (void)_clearCaches;
+ (void)initialize;
@property(retain, nonatomic) UIVisualEffect *secondaryVisualEffect; // @synthesize secondaryVisualEffect=_secondaryVisualEffect;
@property(retain, nonatomic) UIVisualEffect *primaryVisualEffect; // @synthesize primaryVisualEffect=_primaryVisualEffect;
@property(nonatomic) _Bool isFakeInvitation; // @synthesize isFakeInvitation=_isFakeInvitation;
@property(nonatomic) _Bool isTemplateCell; // @synthesize isTemplateCell=_isTemplateCell;
@property(nonatomic) _Bool doesNotUseTemplate; // @synthesize doesNotUseTemplate=_doesNotUseTemplate;
- (void).cxx_destruct;
- (id)_textForDepartureTimeLabel;
- (id)_textForBottomTimeLabel;
- (id)_textForTopTimeLabel;
- (id)_textForCountdownLabelWithCurrentDate:(id)arg1;
- (_Bool)_eventIsNow;
- (id)_sharedNumberFormatter;
- (_Bool)isDeclined;
- (_Bool)needsReply;
- (_Bool)isTentative;
- (_Bool)isBirthday;
- (_Bool)isCancelled;
- (_Bool)isPast;
- (_Bool)isAllDay;
- (void)_updateTravelTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateTopTimeLabel;
- (void)_updateCountdownLabel;
- (void)_uninstallCountdownTimer;
- (void)_countdownTimerFired;
- (void)_installCountdownTimerWithFireDate:(id)arg1;
- (void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1;
- (void)_updateSecondaryTextLabel;
- (void)_updatePrimaryTextLabel;
- (void)_updateNumberOfLinesForLabel:(id)arg1 isRightAlignedInStandardLayout:(_Bool)arg2;
- (void)_updateAngleBackgroundColor;
- (void)_updateColorBarColor;
- (id)_setUpLargeTextConstraints;
- (id)_setUpStandardConstraints;
- (void)_setUpConstraints;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_widthForTimeViews;
- (double)_verticalSpacingTopToTopForNonPrimaryLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingPrimaryLabelToTimeLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (void)updateConstraints;
- (void)contentCategorySizeChanged;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)arg1;
- (void)_createViewsForReuseIdentifier:(id)arg1;
- (void)forceUpdateOfAllElements;
- (id)_birthdayIcon;
- (void)setColorBarLayerFilter:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (id)imageView;
- (id)detailTextLabel;
- (id)textLabel;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (id)accessoryImage;
- (void)_updateAccessoryImage;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5 includingTravelTime:(_Bool)arg6 includingCountdown:(_Bool)arg7;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5 includingTravelTime:(_Bool)arg6;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(_Bool)arg4 drawsDimmedForPast:(_Bool)arg5;
- (id)reuseIdentifier;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


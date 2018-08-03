//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLTitledPlatterView.h"

#import "NCAuxiliaryOptionsSupporting.h"
#import "NCNotificationStaticContentAccepting.h"

@class BSUIFontProvider, NCAuxiliaryOptionsView, NCNotificationContentView, NCNotificationGrabberView, NSArray, NSDate, NSString, NSTimeZone, UIButton, UIImage, UIView;

@interface NCNotificationShortLookView : PLTitledPlatterView <NCNotificationStaticContentAccepting, NCAuxiliaryOptionsSupporting>
{
    BSUIFontProvider *_fontProvider;
    NCNotificationContentView *_notificationContentView;
    NCNotificationGrabberView *_grabberView;
    NCAuxiliaryOptionsView *_auxiliaryOptionsView;
    _Bool _mainOverlayLayoutValid;
    _Bool _defersAnimatedUpdates;
    _Bool _banner;
}

+ (unsigned long long)_optionsForMainOverlayForRecipe:(long long)arg1;
@property(nonatomic, getter=_isBanner, setter=_setBanner:) _Bool banner; // @synthesize banner=_banner;
@property(nonatomic) _Bool defersAnimatedUpdates; // @synthesize defersAnimatedUpdates=_defersAnimatedUpdates;
- (void).cxx_destruct;
- (void)_layoutGrabber;
- (void)_layoutAuxiliaryOptionsView;
- (void)_layoutNotificationContentView;
- (void)_configureAuxiliaryOptionsViewIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureCustomContentView;
- (void)_configureHeaderContentView;
- (struct CGSize)_sizeThatFitsContentWithSize:(struct CGSize)arg1 withAuxiliaryOptionsViewVisible:(_Bool)arg2;
- (void)nc_performDeferredActionsIfNeeded;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@property(readonly, nonatomic) NSArray *optionButtons;
@property(nonatomic) unsigned long long numberOfOptionButtons;
@property(copy, nonatomic) NSString *optionsSummaryText;
@property(nonatomic) unsigned long long messageNumberOfLines;
@property(retain, nonatomic) UIView *accessoryView;
@property(retain, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSString *summaryText;
@property(retain, nonatomic) NSArray *interfaceActions;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;
- (void)setBackgroundView:(id)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (_Bool)_shouldShowGrabber;
- (id)_newNotificationContentView;
@property(readonly, nonatomic, getter=_grabberView) NCNotificationGrabberView *grabberView;
- (void)_layoutMainOverlay;
- (unsigned long long)_optionsForMainOverlay;
@property(readonly, nonatomic, getter=_notificationContentView) NCNotificationContentView *notificationContentView;
@property(retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;

// Remaining properties
@property(copy, nonatomic) NSDate *date;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(nonatomic) long long dateFormatStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(copy, nonatomic) NSArray *icons;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIButton *utilityButton;

@end


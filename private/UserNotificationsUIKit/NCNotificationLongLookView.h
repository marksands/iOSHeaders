//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLExpandedPlatterView.h"

#import "NCCustomContentContainingLookView.h"
#import "NCNotificationContentViewDelegate.h"
#import "NCNotificationStaticContentAccepting.h"
#import "UIGestureRecognizerDelegate.h"

@class NCNotificationContentView, NSArray, NSDate, NSString, NSTimeZone, UIButton, UIControl, UIImage, UIScrollView, UITapGestureRecognizer, UIView;

@interface NCNotificationLongLookView : PLExpandedPlatterView <UIGestureRecognizerDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView>
{
    NCNotificationContentView *_notificationContentView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
    _Bool _hidesNotificationContent;
    unsigned long long _customContentLocation;
}

@property(nonatomic) _Bool hidesNotificationContent; // @synthesize hidesNotificationContent=_hidesNotificationContent;
@property(nonatomic) unsigned long long customContentLocation; // @synthesize customContentLocation=_customContentLocation;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)adjustForContentSizeCategoryChange;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (void)layoutSubviews;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutCustomContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutMainContentView;
- (struct CGSize)_contentViewSize;
- (struct CGRect)_actionsViewFrame;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureCustomContentView;
- (long long)lookStyle;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;
@property(readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred;
@property(nonatomic) _Bool clipsVisibleContentToBounds;
@property(nonatomic) double contentBottomInset;
@property(nonatomic) struct CGSize customContentSize;
@property(readonly, nonatomic) UIView *customContentView;
@property(copy, nonatomic) NSDate *date;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(nonatomic) long long dateFormatStyle;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <NCNotificationLongLookViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIControl *dismissControl;
@property(readonly, nonatomic) struct UIEdgeInsets dismissControlInsets;
@property(nonatomic) _Bool hasShadow;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(copy, nonatomic) NSArray *icons;
@property(retain, nonatomic) NSArray *interfaceActions;
@property(nonatomic) unsigned long long messageNumberOfLines;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(copy, nonatomic) NSString *summaryText;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIButton *utilityButton;

@end


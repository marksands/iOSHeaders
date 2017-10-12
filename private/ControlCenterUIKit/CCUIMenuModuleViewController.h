//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

#import "CCUIContentModuleContentViewController.h"
#import "UIGestureRecognizerDelegate.h"

@class CCUIContentModuleContext, CCUIMenuModuleItemView, MTMaterialView, NSMutableArray, NSString, UILabel, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView;

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>
{
    UILabel *_titleLabel;
    UIView *_headerSeparatorView;
    MTMaterialView *_platterMaterialView;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItemsViews;
    UIScrollView *_contentScrollView;
    UIView *_darkeningBackgroundView;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _ignoreMenuItemAtTouchLocationAfterExpanded;
    CCUIMenuModuleItemView *_menuItemToIgnore;
    _Bool _shouldProvideOwnPlatter;
    _Bool _useTallLayout;
    UIView *_contentView;
    CCUIContentModuleContext *_contentModuleContext;
}

@property(nonatomic) __weak CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(nonatomic) _Bool useTallLayout; // @synthesize useTallLayout=_useTallLayout;
@property(nonatomic) _Bool shouldProvideOwnPlatter; // @synthesize shouldProvideOwnPlatter=_shouldProvideOwnPlatter;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (double)_menuItemsHeightForWidth:(double)arg1;
- (id)_titleFont;
- (double)_separatorHeight;
- (void)_handlePressGesture:(id)arg1;
- (void)_setupMenuItems;
- (void)_setupTitleLabel;
- (void)_setupContentViewBounds;
- (struct CGAffineTransform)_contentTransformForScale:(double)arg1;
- (double)_contentScaleForSize:(struct CGSize)arg1;
- (void)_layoutSeparatorForSize:(struct CGSize)arg1;
- (void)_layoutMenuItemsForSize:(struct CGSize)arg1;
- (void)_layoutTitleLabelForSize:(struct CGSize)arg1;
- (void)_layoutGlyphViewForSize:(struct CGSize)arg1;
- (void)_fadeViewsForExpandedState:(_Bool)arg1;
- (void)_handleActionTapped:(id)arg1;
- (void)_updateScrollViewContentSize;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
- (double)preferredExpandedContentHeightWithWidth:(double)arg1;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
- (void)contentModuleWillTransitionToExpandedContentMode:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)_desiredExpandedHeight;
- (double)_maximumHeight;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_layoutViewSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)headerHeightForWidth:(double)arg1;
@property(readonly, nonatomic) double headerHeight;
- (void)removeAllActions;
@property(readonly, nonatomic) unsigned long long actionsCount;
- (void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly) Class superclass;

@end

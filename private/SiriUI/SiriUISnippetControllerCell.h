//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SiriUIReusableView.h"

@class NSString, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UICollectionReusableView<SiriUIReusableView>, UILabel, UIView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView>
{
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    _Bool _cellIsUsingPlatterStyle;
    double _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    SiriUISnippetViewController *_snippetViewController;
    struct UIEdgeInsets _snippetEdgeInsets;
}

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;
@property(nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets snippetEdgeInsets; // @synthesize snippetEdgeInsets=_snippetEdgeInsets;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
- (void).cxx_destruct;
- (void)setTopPadding:(double)arg1;
- (void)setShowBackgroundView:(_Bool)arg1;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetResizeToSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateSnippetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateSnippetCancellationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (double)_heightForTransparentFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForFooterView;
- (double)_heightForHeaderView;
- (void)_configureSubviewsForCurrentInset;
- (void)layoutSubviews;
- (id)accessibilityIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


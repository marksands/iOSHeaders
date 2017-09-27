//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CNAvatarCardHighlightView, CNQuickAction, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIPageControl, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionCell : UITableViewCell
{
    struct CGPoint _initialLocation;
    struct CGPoint _lastLocation;
    _Bool _swipped;
    _Bool _moreHighlighted;
    _Bool _gestureActivated;
    _Bool _transitioning;
    CNQuickAction *_action;
    long long _context;
    UIImageView *_actionImageView;
    CNAvatarCardHighlightView *_defaultHighlightView;
    CNAvatarCardHighlightView *_moreHighlightView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIPageControl *_pageControl;
    UILabel *_moreLabel;
    UIView *_translatingView;
    UIView *_separatorView;
    UIButton *_expandButton;
    NSLayoutConstraint *_punchOutLeftConstraint;
    NSLayoutConstraint *_translatingViewLeadingConstraint;
    NSLayoutConstraint *_pageControlLeadingConstraint;
    NSLayoutConstraint *_expandButtonWidthConstraint;
    NSLayoutConstraint *_moreHighlightViewHiddingConstraint;
    double _initialTranslatingViewLeadingConstraintConstant;
    unsigned long long _lastScrollDirection;
    double _lastScrollDirectionTimestamp;
}

+ (id)cellNibForContacts;
+ (id)cellNibForActions;
@property(nonatomic) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) _Bool gestureActivated; // @synthesize gestureActivated=_gestureActivated;
@property(nonatomic) double lastScrollDirectionTimestamp; // @synthesize lastScrollDirectionTimestamp=_lastScrollDirectionTimestamp;
@property(nonatomic) unsigned long long lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(nonatomic) double initialTranslatingViewLeadingConstraintConstant; // @synthesize initialTranslatingViewLeadingConstraintConstant=_initialTranslatingViewLeadingConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *moreHighlightViewHiddingConstraint; // @synthesize moreHighlightViewHiddingConstraint=_moreHighlightViewHiddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandButtonWidthConstraint; // @synthesize expandButtonWidthConstraint=_expandButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageControlLeadingConstraint; // @synthesize pageControlLeadingConstraint=_pageControlLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *translatingViewLeadingConstraint; // @synthesize translatingViewLeadingConstraint=_translatingViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *punchOutLeftConstraint; // @synthesize punchOutLeftConstraint=_punchOutLeftConstraint;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *translatingView; // @synthesize translatingView=_translatingView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNAvatarCardHighlightView *moreHighlightView; // @synthesize moreHighlightView=_moreHighlightView;
@property(retain, nonatomic) CNAvatarCardHighlightView *defaultHighlightView; // @synthesize defaultHighlightView=_defaultHighlightView;
@property(retain, nonatomic) UIImageView *actionImageView; // @synthesize actionImageView=_actionImageView;
@property(nonatomic) _Bool moreHighlighted; // @synthesize moreHighlighted=_moreHighlighted;
@property(nonatomic) _Bool swipped; // @synthesize swipped=_swipped;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) CNQuickAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)trackHighlight:(id)arg1;
- (void)stopTrackingWithGestureRecognizer:(id)arg1;
- (void)startTrackingWithGestureRecognizer:(id)arg1;
- (void)reloadData;
- (void)_updateHighlightAnimated:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)awakeFromNib;
- (void)_updateFonts;

@end


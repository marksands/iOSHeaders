//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSAttributedString, PXBadgedThumbnailView, PXInboxTableViewCellLayoutCoordinator, PXRoundedCornerOverlayView, UIImageView, UILabel;

@interface PXInboxTableViewCell : UITableViewCell
{
    _Bool _unseen;
    id <PXInboxModel> _model;
    NSAttributedString *_title;
    PXInboxTableViewCellLayoutCoordinator *_layoutCoordinator;
    UIImageView *_placeholderImageView;
    PXRoundedCornerOverlayView *_cornerOverlayView;
    PXBadgedThumbnailView *_thumbnailView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (void)preloadResources;
+ (id)thumbnailBadgeImageForTintColor:(id)arg1;
+ (id)unseenHighlightColor;
+ (id)placeholderEmptyImage;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXBadgedThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView; // @synthesize cornerOverlayView=_cornerOverlayView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator; // @synthesize layoutCoordinator=_layoutCoordinator;
@property(nonatomic, getter=isUnseen) _Bool unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(copy, nonatomic) id <PXInboxModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_updateTitleLabel;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSAttributedString *subtitle;
- (void)_updateTitle;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


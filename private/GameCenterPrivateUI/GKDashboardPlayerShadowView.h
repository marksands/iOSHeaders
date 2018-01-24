//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GKDashboardPlayerPhotoView, GKPlayer, UICollectionViewCell;

@interface GKDashboardPlayerShadowView : UIView
{
    UICollectionViewCell *_parentCell;
    GKDashboardPlayerPhotoView *_photoView;
}

@property(nonatomic) GKDashboardPlayerPhotoView *photoView; // @synthesize photoView=_photoView;
@property(nonatomic) UICollectionViewCell *parentCell; // @synthesize parentCell=_parentCell;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *parentView; // @dynamic parentView;
@property(retain, nonatomic) GKPlayer *player; // @dynamic player;
- (void)setupPhoto;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end


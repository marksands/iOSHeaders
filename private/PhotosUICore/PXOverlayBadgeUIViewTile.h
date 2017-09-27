//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PXAssetTile.h"
#import "PXChangeObserver.h"
#import "PXOverlayBadgeTile.h"
#import "PXReusableObject.h"
#import "PXUIViewBasicTile.h"

@class NSString, PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView;

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXAssetTile, PXOverlayBadgeTile, PXUIViewBasicTile>
{
    struct {
        _Bool badgeView;
    } _needsUpdateFlags;
    PXImageRequester *_imageRequester;
    PXAssetBadgeManager *_badgeManager;
    unsigned long long __badgeOptions;
    PXUIAssetBadgeView *__badgeView;
}

+ (void)preloadResources;
@property(readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // @synthesize _badgeView=__badgeView;
@property(nonatomic, setter=_setBadgeOptions:) unsigned long long _badgeOptions; // @synthesize _badgeOptions=__badgeOptions;
@property(retain, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)layoutSubviews;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


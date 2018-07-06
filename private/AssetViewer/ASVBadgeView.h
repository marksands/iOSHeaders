//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ASVBadgeDescription, UIImageView, UIVisualEffectView;

@interface ASVBadgeView : UIView
{
    UIVisualEffectView *_blurView;
    UIImageView *_badgeImageView;
    UIView *_shadowView;
    _Bool _highlighted;
    ASVBadgeDescription *_badgeDescription;
    struct CGSize _thumbnailSize;
}

+ (void)applyBlurWithBackground:(id)arg1 offset:(struct CGPoint)arg2;
+ (id)badgeForThumbnail:(id)arg1;
+ (id)highlightedBlurViewEffects;
+ (id)normalBlurViewEffects;
+ (id)badgeView;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) ASVBadgeDescription *badgeDescription; // @synthesize badgeDescription=_badgeDescription;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)_updateShadow;
- (void)setUpView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IMBalloonPlugin, NSString, UIView;

@interface CKBrowserSwitcherCell : UICollectionViewCell
{
    _Bool _usingFallbackSnapshot;
    IMBalloonPlugin *_plugin;
    UIView *_browserSnapshotView;
    UIView *_extensionInterruptedView;
    NSString *_snapshotCacheKey;
}

+ (id)identifier;
@property(retain, nonatomic) NSString *snapshotCacheKey; // @synthesize snapshotCacheKey=_snapshotCacheKey;
@property(retain, nonatomic) UIView *extensionInterruptedView; // @synthesize extensionInterruptedView=_extensionInterruptedView;
@property(retain, nonatomic) UIView *browserSnapshotView; // @synthesize browserSnapshotView=_browserSnapshotView;
@property(nonatomic, getter=isUsingFallbackSnapshot) _Bool usingFallbackSnapshot; // @synthesize usingFallbackSnapshot=_usingFallbackSnapshot;
@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)_handleBrowserSnapshotDidChange:(id)arg1;
- (void)_updateSnapshotView;
- (void)layoutSubviews;
- (void)showExtensionInterruptedView;
- (void)resetSnapshotView;
- (void)prepareForReuse;
- (void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


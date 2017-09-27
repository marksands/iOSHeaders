//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView
{
    NSString *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    unsigned long long _style;
    unsigned long long _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property(readonly, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;
@property(copy, nonatomic) NSString *styleVersionSuffix; // @synthesize styleVersionSuffix=_styleVersionSuffix;
@property(retain, nonatomic) BPSRemoteImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(nonatomic) unsigned long long sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
@property(retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // @synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier;
- (void).cxx_destruct;
- (id)image;
- (struct CGSize)screenImageSize;
- (unsigned long long)deviceSize;
- (void)overrideMaterial:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyScreenStyle;
- (id)watchAssetBundle;
- (id)initWithStyle:(unsigned long long)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(_Bool)arg3;
- (id)initWithStyle:(unsigned long long)arg1 allowsMaterialFallback:(_Bool)arg2;
- (id)initWithStyle:(unsigned long long)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;

@end


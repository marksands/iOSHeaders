//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFProceduralWallpaper.h>

@class NSBundle, UIView, _UICAPackageView;

@interface SBFMicaWallpaper : SBFProceduralWallpaper
{
    NSBundle *_loadedBundle;
    _UICAPackageView *_packageView;
    UIView *_rootView;
}

+ (id)thumbnailImageForOptions:(id)arg1;
+ (id)presetWallpaperOptions;
+ (id)identifier;
- (void).cxx_destruct;
- (void)setWallpaperOptions:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)_loadView;
- (void)_unloadView;
- (void)layoutSubviews;
- (void)dealloc;

@end


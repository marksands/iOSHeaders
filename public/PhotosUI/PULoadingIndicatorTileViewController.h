//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

@class PUProgressIndicatorView;

__attribute__((visibility("hidden")))
@interface PULoadingIndicatorTileViewController : PUTileViewController
{
    long long _style;
    PUProgressIndicatorView *_indicatorView;
}

+ (void)_destroyIndicatorView:(id)arg1;
+ (id)_createIndicatorViewForStyle:(long long)arg1;
+ (struct CGSize)loadingIndicatorTileSizeForStyle:(long long)arg1;
@property(retain, nonatomic) PUProgressIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)becomeReusable;

@end


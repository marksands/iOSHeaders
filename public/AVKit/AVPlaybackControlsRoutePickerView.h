//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVRoutePickerView.h>

#import "AVPlaybackControlsViewItem.h"

@class AVButton, NSString;

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem>
{
    AVButton *_customButton;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
}

@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateButtonAppearance;
@property(readonly, nonatomic) AVButton *customButton;
@property(nonatomic) struct CGSize extrinsicContentSize;
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
@property(nonatomic, getter=isIncluded) _Bool included;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


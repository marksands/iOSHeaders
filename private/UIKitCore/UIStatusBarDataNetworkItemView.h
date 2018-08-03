//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView
{
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    _Bool _wifiLinkWarning;
    _Bool _enableRSSI;
    _Bool _showRSSI;
}

- (id)accessibilityHUDRepresentation;
- (id)_stringForRSSI;
- (id)_dataNetworkImage;
- (id)_dataNetworkImageName;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)contentsImage;
- (_Bool)_updateWithData:(CDStruct_1f606803 *)arg1 networkType:(int)arg2;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)maximumOverlap;
- (double)extraRightPadding;
- (double)extraLeftPadding;

@end


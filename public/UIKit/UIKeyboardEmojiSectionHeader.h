//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView
{
    UILabel *_emojiSectionHeader;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useVibrantBlend;
@property(nonatomic) double headerOpacity;
@property(nonatomic) double headerFontSize;
@property(copy, nonatomic) UIColor *headerTextColor;
@property(copy, nonatomic) NSString *headerName;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface NUANFEndOfArticleTopicButton : UIButton
{
    NSMutableDictionary *_unadjustedControlStateTitles;
}

+ (id)topicButton;
+ (id)buttonColor;
@property(readonly, nonatomic) NSMutableDictionary *unadjustedControlStateTitles; // @synthesize unadjustedControlStateTitles=_unadjustedControlStateTitles;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


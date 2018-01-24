//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface HUColoredButton : UIButton
{
    _Bool _backgroundColorFollowsTintColor;
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property(nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;
@property(nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property(nonatomic) _Bool backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) double cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


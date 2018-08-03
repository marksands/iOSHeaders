//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface _PKInkColorButton : UIButton
{
    _Bool _isCompact;
    _Bool _isUsedOnDarkBackground;
    UIColor *_color;
}

+ (id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(_Bool)arg2;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 color:(id)arg3 isUsedOnDarkBackground:(_Bool)arg4 isCompact:(_Bool)arg5;
+ (id)pathForSelectedColorShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 embossed:(_Bool)arg3 isCompact:(_Bool)arg4;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(_Bool)arg2 isCompact:(_Bool)arg3;
+ (double)swatchInsetForIsCompact:(_Bool)arg1;
+ (struct CGRect)swatchRectForBounds:(struct CGRect)arg1 isCompact:(_Bool)arg2;
+ (double)innerColorCircleInset:(_Bool)arg1;
+ (double)transparentSelectionRingInset:(_Bool)arg1;
+ (id)buttonWithColor:(id)arg1 isCompact:(_Bool)arg2;
@property(nonatomic) _Bool isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property(nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (double)_swatchInset;
- (struct CGRect)_swatchRect;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;

@end


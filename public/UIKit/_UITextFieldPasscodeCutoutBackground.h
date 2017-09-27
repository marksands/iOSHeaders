//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView
{
    _Bool _customStrokeColor;
    _Bool _customFillColor;
    CAShapeLayer *_lighteningOutline;
    double _outlineAlpha;
    double _cornerRadius;
}

+ (id)_fillColor:(_Bool)arg1;
+ (id)_strokeColor:(_Bool)arg1;
+ (Class)layerClass;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (id)_fillColor:(_Bool)arg1;
- (id)_strokeColor:(_Bool)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1;
- (void)_updatePath;
- (void)_updateLightingOutlinePath;
@property(readonly, nonatomic) UIBezierPath *customPath;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidth:(double)arg1 updatePath:(_Bool)arg2;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
@property(nonatomic) double outlineAlpha;
- (double)_pathInset;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)_layer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

+ (Class)layerClass;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)shapeLayer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKSmoothPathView;

@protocol AKSmoothPathViewDelegate <NSObject>
- (void)inputView:(AKSmoothPathView *)arg1 didCollectPrestrokedPath:(struct CGPath *)arg2;
- (void)inputView:(AKSmoothPathView *)arg1 didCollectPath:(struct CGPath *)arg2;
- (void)inputViewWillStartDrawing:(AKSmoothPathView *)arg1;
@end


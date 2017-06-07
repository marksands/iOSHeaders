//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSString, UIBezierPath, UIColor, UIFont, UIImage;
@protocol HKGraphRenderDelegate, HKGraphRendererExclusion;

@protocol HKGraphRenderer <NSObject>
@property(nonatomic) __weak id <HKGraphRenderDelegate> renderDelegate;
@property(nonatomic) struct CGRect axisRect;
- (void)setNeedsRender;
- (void)drawText:(NSString *)arg1 atPoint:(struct CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(UIColor *)arg5 font:(UIFont *)arg6 clipToAxis:(_Bool)arg7 exclusion:(id <HKGraphRendererExclusion>)arg8;
- (void)fillRect:(struct CGRect)arg1 withTexture:(UIImage *)arg2;
- (void)drawPath:(UIBezierPath *)arg1 strokeColor:(UIColor *)arg2 fillColor:(UIColor *)arg3 markerImage:(UIImage *)arg4 useGradientFill:(_Bool)arg5 clipToAxes:(_Bool)arg6;
@end


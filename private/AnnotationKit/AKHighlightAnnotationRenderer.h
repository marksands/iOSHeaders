//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer
{
}

+ (void)_enumerateQuadPathsOfAnnotation:(id)arg1 applyStyle:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
+ (double)_highlightOutsetFactor;
+ (struct CGRect)_rectForQuad:(struct AKQuadrilateral)arg1 rotationAngle:(double *)arg2;
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end


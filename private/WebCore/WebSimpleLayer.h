//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebSimpleLayer : CALayer
{
    _Bool _isRenderingInContext;
}

@property(readonly, nonatomic) _Bool isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMLevelCrosshair : UIView
{
    _Bool _highlighted;
}

+ (void)_drawCrosshairInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2 strokeWidth:(double)arg3 color:(id)arg4;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)drawRect:(struct CGRect)arg1;
- (void)_commonCAMLevelCrosshairInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


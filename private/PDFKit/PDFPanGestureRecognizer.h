//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PDFPanGestureRecognizer : UIPanGestureRecognizer
{
    struct CGPoint _locationOfFirstTouch;
}

@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXTextViewLayoutHelper : NSObject
{
    struct CGAffineTransform _transform;
    struct CGAffineTransform _reverseTransform;
}

- (void)_getFirstBaseline:(double *)arg1 lastBaseline:(double *)arg2 forView:(id)arg3 withSize:(struct CGSize)arg4;
- (double)_firstBaselineLocationForView:(id)arg1 withSize:(struct CGSize)arg2;
- (double)lastBaselineForView:(id)arg1;
- (double)bottomEdgeForView:(id)arg1;
- (double)rightEdgeForView:(id)arg1;
- (double)leftEdgeForView:(id)arg1;
- (void)repositionView:(id)arg1 withRightEdgeLimit:(double)arg2;
- (void)repositionView:(id)arg1 withFirstBaseline:(double)arg2;
- (void)repositionView:(id)arg1 withTopAtOrBelow:(double)arg2;
- (void)positionView:(id)arg1 withLeftEdge:(double)arg2 rightEdge:(double)arg3 alignment:(long long)arg4 firstBaseline:(double)arg5;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)init;

@end


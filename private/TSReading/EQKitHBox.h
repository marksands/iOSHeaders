//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/EQKitCompoundBox.h>

@interface EQKitHBox : EQKitCompoundBox
{
}

- (struct CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;

@end


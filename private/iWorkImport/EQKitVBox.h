//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/EQKitCompoundBox.h>

__attribute__((visibility("hidden")))
@interface EQKitVBox : EQKitCompoundBox
{
    unsigned long long mPivotIndex;
}

@property(readonly, nonatomic) unsigned long long pivotIndex; // @synthesize pivotIndex=mPivotIndex;
- (struct CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (id)description;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;

@end


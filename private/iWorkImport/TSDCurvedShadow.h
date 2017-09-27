//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDShadow.h>

__attribute__((visibility("hidden")))
@interface TSDCurvedShadow : TSDShadow
{
    double mCurve;
}

+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
+ (id)instanceWithArchive:(const struct ShadowArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) double curve; // @synthesize curve=mCurve;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (struct CGRect)boundsForRep:(id)arg1;
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (_Bool)showForEditingText;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)paddingForCurveWithSize:(struct CGSize)arg1;
- (struct CGRect)expandedBoundsForRect:(struct CGRect)arg1;
- (double)paddingForBlur;
- (_Bool)usesOpenGL;
- (unsigned long long)shadowType;
- (double)clampOffset:(double)arg1;
- (id)description;
- (id)initWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(_Bool)arg7;
- (void)saveToArchive:(struct ShadowArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ShadowArchive *)arg1 unarchiver:(id)arg2;

@end


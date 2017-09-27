//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/EQKitBox.h>

__attribute__((visibility("hidden")))
@interface EQKitVShift : EQKitBox
{
    EQKitBox *mBox;
    double mOffset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)erasableBounds;
- (double)depth;
- (double)height;
- (double)width;
- (void)dealloc;
- (id)initWithBox:(id)arg1 offset:(double)arg2;
- (id)init;

@end


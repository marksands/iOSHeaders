//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ARPatchGrid : NSObject
{
    vector_f87b304d _patchesVector;
    float _angle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float pivot;
@property(readonly, nonatomic) const CDStruct_183601bc *patches;
@property(readonly, nonatomic) unsigned long long size;
- (id)initWithPatchesVector:(vector_f87b304d)arg1 pivotAngle:(float)arg2;

@end


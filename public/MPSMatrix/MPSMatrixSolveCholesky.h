//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel
{
    MPSMatrixSolveTriangular *_trsmT;
    MPSMatrixSolveTriangular *_trsmN;
    _Bool _upper;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long numberOfRightHandSides; // @synthesize numberOfRightHandSides=_numberOfRightHandSides;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool upper; // @synthesize upper=_upper;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;
- (id)initWithDevice:(id)arg1 upper:(_Bool)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4;

@end


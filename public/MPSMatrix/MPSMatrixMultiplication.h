//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSKernel.h"

@interface MPSMatrixMultiplication : MPSKernel
{
    _Bool _useTiling;
    id <MPSExternalMatrixMultiplication> _plugin;
    CDUnknownFunctionPointerType _encode;
    _Bool _transA;
    _Bool _transB;
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    double _alpha;
    double _beta;
    unsigned long long _M;
    unsigned long long _N;
    unsigned long long _K;
    CDStruct_67e7699a _resultMatrixOrigin;
    CDStruct_67e7699a _leftMatrixOrigin;
    CDStruct_67e7699a _rightMatrixOrigin;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long K; // @synthesize K=_K;
@property(nonatomic) unsigned long long N; // @synthesize N=_N;
@property(nonatomic) unsigned long long M; // @synthesize M=_M;
@property(readonly, nonatomic) double beta; // @synthesize beta=_beta;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) _Bool transB; // @synthesize transB=_transB;
@property(readonly, nonatomic) _Bool transA; // @synthesize transA=_transA;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned long long batchStart; // @synthesize batchStart=_batchStart;
@property(nonatomic) CDStruct_67e7699a rightMatrixOrigin; // @synthesize rightMatrixOrigin=_rightMatrixOrigin;
@property(nonatomic) CDStruct_67e7699a leftMatrixOrigin; // @synthesize leftMatrixOrigin=_leftMatrixOrigin;
@property(nonatomic) CDStruct_67e7699a resultMatrixOrigin; // @synthesize resultMatrixOrigin=_resultMatrixOrigin;
- (void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 leftMatrix:(id)arg3 rightMatrix:(id)arg4 resultMatrix:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 leftMatrix:(id)arg2 rightMatrix:(id)arg3 resultMatrix:(id)arg4;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resultRows:(unsigned long long)arg2 resultColumns:(unsigned long long)arg3 interiorColumns:(unsigned long long)arg4;
- (id)initWithDevice:(id)arg1 transposeLeft:(_Bool)arg2 transposeRight:(_Bool)arg3 resultRows:(unsigned long long)arg4 resultColumns:(unsigned long long)arg5 interiorColumns:(unsigned long long)arg6 alpha:(double)arg7 beta:(double)arg8;

@end


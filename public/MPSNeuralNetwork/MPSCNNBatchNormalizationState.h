//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSState.h"

@interface MPSCNNBatchNormalizationState : MPSState
{
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _gamma
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _beta
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _mean
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _var
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _sumGrad
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _dotGrad
    unsigned long long _accumulationCount;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

- (void)dealloc;
- (id)gradientForBeta;
- (id)gradientForGamma;
- (id)variance;
- (id)mean;
- (id)beta;
- (id)gamma;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (void)reset;
- (id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3;
- (id)initDeferredWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3;
- (unsigned long long)resourceSize;

@end

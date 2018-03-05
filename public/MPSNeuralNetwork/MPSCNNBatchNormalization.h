//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalization : MPSCNNKernel
{
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _gamma
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _beta
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _meanDS
    // Error parsing type: ^{MPSAutoBuffer={atomic<void *>=A^v}Q@@Q}, name: _varDS
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    _Bool _stateNeedsToLoad;
    float _epsilon;
    unsigned long long _numberOfFeatureChannels;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, retain, nonatomic) id <MPSCNNBatchNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) unsigned long long numberOfFeatureChannels; // @synthesize numberOfFeatureChannels=_numberOfFeatureChannels;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (void)reloadDataSource:(id)arg1;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (void)dealloc;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3 destinationImages:(struct NSArray *)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;

@end


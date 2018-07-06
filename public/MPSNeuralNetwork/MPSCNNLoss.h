//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNLogSoftMax, MPSCNNNeuron, MPSNNReduceUnary;

@interface MPSCNNLoss : MPSCNNKernel
{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
    MPSCNNLogSoftMax *_logSoftMax;
    MPSNNReduceUnary *_reduceRows;
    MPSNNReduceUnary *_reduceColumns;
    MPSNNReduceUnary *_reduceFeatureChannels;
    MPSCNNNeuron *_arithmetic;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) float delta; // @synthesize delta=_delta;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) unsigned long long numberOfClasses; // @synthesize numberOfClasses=_numberOfClasses;
@property(readonly, nonatomic) float labelSmoothing; // @synthesize labelSmoothing=_labelSmoothing;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property(readonly, nonatomic) unsigned int lossType; // @synthesize lossType=_lossType;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (void)initializeSupportFiltersWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end


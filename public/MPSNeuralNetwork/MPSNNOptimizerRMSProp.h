//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNOptimizer.h>

@interface MPSNNOptimizerRMSProp : MPSNNOptimizer
{
    double _decay;
    float _epsilon;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) double decay; // @synthesize decay=_decay;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2 inputSumOfSquaresVectors:(id)arg3 resultState:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 batchNormalizationGradientState:(id)arg2 batchNormalizationSourceState:(id)arg3 inputSumOfSquaresVectors:(id)arg4 resultState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 convolutionGradientState:(id)arg2 convolutionSourceState:(id)arg3 inputSumOfSquaresVectors:(id)arg4 resultState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3 inputSumOfSquaresVector:(id)arg4 resultValuesVector:(id)arg5;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 decay:(double)arg2 epsilon:(float)arg3 optimizerDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 learningRate:(float)arg2;

@end


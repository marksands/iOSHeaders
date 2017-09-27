//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNConvolution;

@interface MPSCNNConvolutionTranspose : MPSCNNKernel
{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _featureChannelsLayout;
    long long _kernelOffsetX;
    long long _kernelOffsetY;
    unsigned long long _groups;
    MPSCNNConvolution *_convolution;
    struct NeuronInfo _neuronInfo;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(nonatomic) long long kernelOffsetY; // @synthesize kernelOffsetY=_kernelOffsetY;
@property(nonatomic) long long kernelOffsetX; // @synthesize kernelOffsetX=_kernelOffsetX;
@property(readonly, nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(readonly, nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
- (id)debugDescription;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionState:(id)arg3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initialize:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6;
- (id)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5;

@end


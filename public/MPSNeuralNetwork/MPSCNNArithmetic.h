//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNArithmetic : MPSCNNBinaryKernel
{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    unsigned long long _primaryStrideInFeatureChannels;
    unsigned long long _secondaryStrideInFeatureChannels;
    int _arithmeticType;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long secondaryStrideInFeatureChannels; // @synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels;
@property(nonatomic) unsigned long long primaryStrideInFeatureChannels; // @synthesize primaryStrideInFeatureChannels=_primaryStrideInFeatureChannels;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float bias; // @synthesize bias=_bias;
@property(nonatomic) float secondaryScale; // @synthesize secondaryScale=_secondaryScale;
@property(nonatomic) float primaryScale; // @synthesize primaryScale=_primaryScale;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;
- (id)initWithDevice:(id)arg1;
- (void)setSecondaryStrideInPixelsY:(unsigned long long)arg1;
- (void)setSecondaryStrideInPixelsX:(unsigned long long)arg1;
- (void)setPrimaryStrideInPixelsY:(unsigned long long)arg1;
- (void)setPrimaryStrideInPixelsX:(unsigned long long)arg1;

@end

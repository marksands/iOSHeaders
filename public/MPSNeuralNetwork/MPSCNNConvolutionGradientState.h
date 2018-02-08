//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientState.h>

#import "MPSImageSizeEncodingState.h"

@class NSString;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState>
{
    _Bool _initialized;
}

- (id)initWithDevice:(id)arg1 weightsBufferSize:(unsigned long long)arg2 biasesBufferSize:(unsigned long long)arg3;
@property(readonly, nonatomic) id <MTLBuffer> gradientForBiases;
@property(readonly, nonatomic) id <MTLBuffer> gradientForWeights;
@property(readonly, nonatomic) unsigned long long sourceHeight;
@property(readonly, nonatomic) unsigned long long sourceWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@class MPSBinaryImageKernel;

@interface MPSCNNBinaryImageFilter : MPSCNNBinaryKernel
{
    MPSBinaryImageKernel *_k;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 updateOffset:(_Bool)arg3;
- (void)dealloc;
- (void)setSecondaryEdgeMode:(unsigned long long)arg1;
- (void)setPrimaryEdgeMode:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFilter:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end


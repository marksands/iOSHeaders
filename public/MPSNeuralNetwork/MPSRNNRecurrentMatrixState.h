//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSState.h"

@interface MPSRNNRecurrentMatrixState : MPSState
{
    id *recurrentMatrices;
    id *cellMatrices;
    int nLayers;
}

- (void)setReadCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id *)arg2 cellMatrixDescriptors:(id *)arg3 isTemporary:(_Bool)arg4 layerCount:(int)arg5;
- (id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1;
- (id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1;

@end


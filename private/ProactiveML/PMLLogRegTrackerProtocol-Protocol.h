//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PMLPlistAndChunksSerializableProtocol.h"

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, NSDictionary, PMLDenseVector;

@protocol PMLLogRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackGradient:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4 serverIteration:(unsigned long long)arg5;
- (NSDictionary *)trackWeights:(PMLDenseVector *)arg1 scaleFactor:(float)arg2 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg3 evaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg4;
@end

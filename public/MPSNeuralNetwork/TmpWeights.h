//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPSCNNConvolutionDataSource.h"

@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource>
{
    id <MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    _Bool _hasBias;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (id)descriptor;
- (unsigned int)dataType;
- (id)label;
- (id)initWithWeights:(id)arg1 useBias:(_Bool)arg2 desc:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


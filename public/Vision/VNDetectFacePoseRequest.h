//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import "VNFaceObservationAccepting.h"

@class NSArray, NSString;

@interface VNDetectFacePoseRequest : VNImageBasedRequest <VNFaceObservationAccepting>
{
}

- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4;
- (long long)dependencyProcessingOrdinality;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly) Class superclass;

@end


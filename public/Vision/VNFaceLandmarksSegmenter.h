//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarksSegmenter : VNEspressoModelFileBasedDetector
{
}

+ (float)_faceLanmarksSegmenterMaximumInputImageAspectRatio;
+ (_Bool)getNumberOfSupportedFaceLandmarkSegments:(unsigned long long *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)getFaceLanmarksSegmenterInputImageSize:(struct CGSize *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (void)prepareNetworkInput:(CDStruct_cf098810 *)arg1 fromScaledFacePixelBuffer:(struct __CVBuffer *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;

@end


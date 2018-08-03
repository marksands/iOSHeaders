//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetectorRevision2 : VNFaceDetector
{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (void)_printDebugInfo:(id)arg1 facesDataRaw:(vector_41a7cb1a *)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purgeIntermediates;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;

@end


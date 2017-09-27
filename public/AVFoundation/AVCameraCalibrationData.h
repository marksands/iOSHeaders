//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject
{
    AVCameraCalibrationDataInternal *_internal;
}

- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;
- (void)dealloc;
- (id)_initEmpty;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;
- (id)initWithDepthMetadataDictionary:(id)arg1;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;
@property(readonly, nonatomic) struct CGPoint lensDistortionCenter;
@property(readonly, nonatomic) NSData *inverseLensDistortionLookupTable;
@property(readonly, nonatomic) NSData *lensDistortionLookupTable;
@property(readonly, nonatomic) float pixelSize;
// Error parsing type for property extrinsicMatrix:
// Property attributes: T{?=[4]},R,N

@property(readonly, nonatomic) struct CGSize intrinsicMatrixReferenceDimensions;
// Error parsing type for property intrinsicMatrix:
// Property attributes: T{?=[3]},R,N

- (id)description;
- (id)debugDescription;

@end


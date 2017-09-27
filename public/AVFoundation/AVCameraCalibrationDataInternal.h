//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface AVCameraCalibrationDataInternal : NSObject
{
    // Error parsing type: {?="columns"[3]}, name: intrinsicMatrix
    struct CGSize intrinsicMatrixReferenceDimensions;
    // Error parsing type: {?="columns"[4]}, name: extrinsicMatrix
    float pixelSize;
    NSData *lensDistortionCoefficients;
    NSData *inverseLensDistortionCoefficients;
    struct CGPoint lensDistortionCenter;
    NSData *lensDistortionLookupTable;
    NSData *inverseLensDistortionLookupTable;
}

@end


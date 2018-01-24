//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VNObservationsCacheKeyProviding.h"

@class MLModel, NSString;

@interface VNCoreMLModel : NSObject <VNObservationsCacheKeyProviding>
{
    NSString *_uuidStringForCacheIdentifier;
    int _modelType;
    unsigned int _inputImageFormat;
    MLModel *_model;
    NSString *_inputImageKey;
    NSString *_predictedFeatureKey;
    NSString *_predictedProbabilitiesKey;
    unsigned long long _inputImageWidth;
    unsigned long long _inputImageHeight;
}

+ (id)modelForMLModel:(id)arg1 error:(id *)arg2;
@property(readonly) unsigned int inputImageFormat; // @synthesize inputImageFormat=_inputImageFormat;
@property(readonly) unsigned long long inputImageHeight; // @synthesize inputImageHeight=_inputImageHeight;
@property(readonly) unsigned long long inputImageWidth; // @synthesize inputImageWidth=_inputImageWidth;
@property(readonly) NSString *predictedProbabilitiesKey; // @synthesize predictedProbabilitiesKey=_predictedProbabilitiesKey;
@property(retain) NSString *predictedFeatureKey; // @synthesize predictedFeatureKey=_predictedFeatureKey;
@property(retain) NSString *inputImageKey; // @synthesize inputImageKey=_inputImageKey;
@property int modelType; // @synthesize modelType=_modelType;
@property(retain) MLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)observationsCacheKey;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)setupInputImageFromModelDescription:(id)arg1;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;

@end


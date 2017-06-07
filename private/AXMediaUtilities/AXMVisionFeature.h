//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMJSONSerializable-Protocol.h>
#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMLanguage, AXMVisionFeatureAssetMetadata, AXMVisionFeatureColorInfo, AXMVisionFeatureFaceLandmarks, NSDictionary, NSString;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding>
{
    float _horizonAngle;
    unsigned long long _featureType;
    double _creationDate;
    double _confidence;
    NSString *_value;
    NSString *_barcodeType;
    long long _ocrFeatureType;
    AXMLanguage *_detectionLanguage;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    double _blur;
    double _brightness;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks;
    AXMVisionFeatureFaceLandmarks *_faceLandmarks3d;
    NSDictionary *_faceExpressionsAndConfidence;
    unsigned long long _faceId;
    long long _likelyExpression;
    struct CGSize _canvasSize;
    struct CGRect _frame;
    struct CGRect _normalizedFrame;
    struct CGAffineTransform _horizonTransform;
    // Error parsing type: {?="columns"[4]}, name: _facePose
}

+ (id)debugNameForFeatureType:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 classificationResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 brightnessResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 blurResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 humanResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 faceResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithFutharkFeature:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;
+ (id)featureWithMetadata:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)unitTestingHorizonFeature;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingFeature;
+ (id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) long long likelyExpression; // @synthesize likelyExpression=_likelyExpression;
@property(nonatomic) float horizonAngle; // @synthesize horizonAngle=_horizonAngle;
@property(nonatomic) struct CGAffineTransform horizonTransform; // @synthesize horizonTransform=_horizonTransform;
// Error parsing type for property facePose:
// Property attributes: T{?=[4]},N,V_facePose

@property(nonatomic) unsigned long long faceId; // @synthesize faceId=_faceId;
@property(retain, nonatomic) NSDictionary *faceExpressionsAndConfidence; // @synthesize faceExpressionsAndConfidence=_faceExpressionsAndConfidence;
@property(retain, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks3d; // @synthesize faceLandmarks3d=_faceLandmarks3d;
@property(retain, nonatomic) AXMVisionFeatureFaceLandmarks *faceLandmarks; // @synthesize faceLandmarks=_faceLandmarks;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double blur; // @synthesize blur=_blur;
@property(retain, nonatomic) AXMVisionFeatureAssetMetadata *assetMetadata; // @synthesize assetMetadata=_assetMetadata;
@property(retain, nonatomic) AXMVisionFeatureColorInfo *colorInfo; // @synthesize colorInfo=_colorInfo;
@property(retain, nonatomic) AXMLanguage *detectionLanguage; // @synthesize detectionLanguage=_detectionLanguage;
@property(nonatomic) long long ocrFeatureType; // @synthesize ocrFeatureType=_ocrFeatureType;
@property(retain, nonatomic) NSString *barcodeType; // @synthesize barcodeType=_barcodeType;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long featureType; // @synthesize featureType=_featureType;
- (void).cxx_destruct;
- (double)confidenceForExpression:(long long)arg1;
- (id)stringForExpression:(long long)arg1;
- (long long)expressionForString:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAXMVisionFeature:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool isTrackable;
- (id)_nameForOCRFeatureType:(long long)arg1;
@property(readonly, nonatomic) _Bool isRectangle;
@property(readonly, nonatomic) _Bool isAssetMetadata;
@property(readonly, nonatomic) _Bool isMediaLegibility;
@property(readonly, nonatomic) _Bool isHorizon;
@property(readonly, nonatomic) _Bool isBlur;
@property(readonly, nonatomic) _Bool isBrightness;
@property(readonly, nonatomic) _Bool isColor;
@property(readonly, nonatomic) _Bool isClassification;
@property(readonly, nonatomic) _Bool isOCR;
@property(readonly, nonatomic) _Bool isHuman;
@property(readonly, nonatomic) _Bool isFace;
@property(readonly, nonatomic) _Bool isBarcode;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithType:(unsigned long long)arg1 value:(id)arg2 confidence:(double)arg3 canvasSize:(struct CGSize)arg4 frame:(struct CGRect)arg5 normalizedFrame:(struct CGRect)arg6;

// Remaining properties
@property(readonly) Class superclass;

@end

